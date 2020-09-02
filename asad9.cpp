#include<iostream>

using namespace std;


int main(){


int n,n1=0,n2=1,temp;


cout<<"enter the fibonacci series";

cin>>n;

for(int i=0;i<=n;i++){

    cout<<n1<<"  ";

        if(n1==n){
        break;}

    temp=n2;

    n2=n1+n2;

    n1=temp;





    }



return 0;
}
