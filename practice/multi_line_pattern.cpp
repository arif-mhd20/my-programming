#include<iostream>

using namespace std;

int reversedPiramid(int  n){
     int kLimit=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }for(int k=1;k<=kLimit;k++){
            cout<<"*";
            }cout<<endl;
            kLimit+=2;



    }


   int kL=(n*2)-1;
for(int i=1;i<=n;i++){
       for(int j=0;j<i-1;j++){
        cout<<" ";
       }for(int k=1;k<=kL;k++){
       cout<<"*";
       }cout<<endl;
       kL-=2;


}
}

/*
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
*/
int main(){

reversedPiramid(50);
//complicatedMultiLinePattern(60);

}
