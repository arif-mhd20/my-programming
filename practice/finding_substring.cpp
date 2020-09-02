
#include<iostream>
#include<string>

using namespace std;



std::string preventDistractions(std::string str) {
    int arrSize=5;
	std::string * str2 = new std::string[arrSize] {"anime","meme","vines","roasts","Danny DeVito"};

	for(int i=0; i<arrSize; i++){
        int found = str.find(str2[i]);
        if (found!=std::string::npos){
                cout<<"Found str2\[i\] \@ "<<found<<endl;
                return "NO!";

        }

	}
	return "Safe watching!";

    /*
	int arrSize=5;
	 string::const_iterator it;
	std::string * str2 = new std::string[arrSize] {"anime","meme","vines","roasts","Danny DeVito"};

	it = search(str.begin(), str.end(),
             str2.begin(), str2.end()) != str.end();

                if (it != str.end()){
		return  "NO!";}
	else {
		 return "Safe watching!";}
		 */
}


int main(){
    size_t f;
    std::cout<<"Size t is: "<<f<<endl;
std::cout<<preventDistractions("vines that butter my eggroll")<<std::endl;
std::cout<<preventDistractions("Hot pictures of Danny DeVito")<<std::endl;
std::cout<<preventDistractions("How to ace BC Calculus in 5 Easy Steps")<<std::endl;


}
