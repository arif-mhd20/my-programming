
#include<iostream>

using namespace std;


int main(){
    char oprator='+';
    int variable=0;
    int result=0;
    //cout<<"enter the numbers";

    for(; ; ){

        cin>>variable;

        switch(oprator){
            case '+':
                result+=variable;
                cout<<"Output: "<<result<<endl;
                break;

            case '-':
                result-=variable;
                cout<<"Output: "<<result<<endl;
                break;

            case '*':
                result*=variable;
                cout<<"Output: "<<result<<endl;
                break;


            case '/':
                result/=variable;
                cout<<"Output: "<<result<<endl;
                break;

            case '=':
                cout<<"Output: "<<result<<endl;
                break;


            default:
                cout<<"invalid input";
                break;
        }

        cin>>oprator;


    }

    return 0;
}


