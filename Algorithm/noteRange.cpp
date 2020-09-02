#include<iostream>
#include<string>
#include<vector>

using namespace std;



bool musicalNotes(string instra, string note){

vector<string> piccolo{"D4","E4","F4","G4","A5","B5","C5","D5","E5","F5","G5","A6","B6","C6","D6","E6","F6","G6","A7","B7","C7","D7","E7","F7","G7"};
vector<string> tuba{"D1","E1","F1","G1","A2","B2","C2","D2","E2","F2","G2","A3","B3","C3","D3","E3","F3","G3","A4","B4","C4","D4","E4","F4"};
vector<string> guitar{"E3","F3","G3","A4","B4","C4","D4","E4","F4","G4","A5","B5","C5","D5","E5","F5","G5","A6","B6","C6","D6","E6"};
vector<string> piano{"D1","E1","F1","G1","A2","B2","C2","D2","E2","F2","G2","A3","B3","C3","D3","E3","F3","G3","A4","B4","C4","D4","E4","F4","F4","G4","A5","B5","C5","D5","E5","F5","G5","A6","B6","C6","D6","E6","F6","G6","A7","B7","C7","D7","E7","F7","G7","A8","B8","C8"};
vector<string> violin{"G3","A4","B4","C4","D4","E4","F4","G4","A5","B5","C5","D5","E5","F5","G5","A6","B6","C6","D6","E6","F6","G6","A7"};



    if(instra=="Piccolo"){
        if (std::find(piccolo.begin(), piccolo.end(), note) != piccolo.end())
        {
          return true;
        }
    }
      else if(instra=="Tuba"){
        if (std::find(tuba.begin(), tuba.end(), note) != tuba.end())
        {
          return true;
        }

      }
        else if(instra=="Guitar" ){
            if (std::find(guitar.begin(), guitar.end(), note) != guitar.end())
            {
              return true;
            }

        }
         else if(instra=="Piano" ){
             if (std::find(piano.begin(), piano.end(), note) != piano.end())
                {
                  return true;
                }

         }
          else if(instra=="Violin" ){
              if (std::find(violin.begin(), violin.end(), note) != violin.end())
                {
                  return true;
                }

          }
      return false;

}

int main(){


cout<<musicalNotes("Piccolo", "A3");


}
