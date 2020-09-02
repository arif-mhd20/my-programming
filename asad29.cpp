#include<iostream>

using namespace std;

int iterativeFactorial(int n){

  int  facto=1;


    for(int i=n;i>=1;i--){
        facto=facto*i;
    }

    return facto;

}


int recursiveFactorial(int n){
    if(n==1) return n;

    return n*recursiveFactorial(n-1);
}






int main(){


    int n;

    cin>>n;




    //cout<<iterativeFactorial(n);
    cout<<recursiveFactorial(n);

    return 0;
}
