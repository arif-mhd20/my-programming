#include<bits/stdc++.h>
using namespace std;

int main(){


    double weight;
    int checkValue=2;
    double dividedWeight;
    cin>>weight;

    dividedWeight=ceil(weight/2);


    if((int)dividedWeight%checkValue==0){

        cout<<"YES";


    }else{
        cout<<"NO";
    }


}
