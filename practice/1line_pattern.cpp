#include<iostream>
using namespace std;

int OneLinePattern(int hashes, int stars){

for(int i=1;i<=hashes;i++){
        cout<<"#";}
for(int j=0;j<=stars;j++){
    cout<<"*";
}


    cout<<"*";
}


int multiLinePattern(int n){

    for(int i=1;i<=n;i++){
        for(int j=5;j>=i;j--){
                cout<<"*";

        }cout<<endl;
    }


}


int complicatedMultiLinePattern(int n){
    int kLimit=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }for(int k=1;k<=kLimit;k++){
            cout<<"*";
            }cout<<endl;
            kLimit+=2;



    }
}

int main(){
    int hashes,stars;
    //cin>>hashes>>stars;
   /* OneLinePattern(hashes,stars);*/


    //multiLinePattern(5);

    complicatedMultiLinePattern(5);

}
