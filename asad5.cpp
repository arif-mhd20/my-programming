#include<iostream>

using namespace std;

int main(){


int i;

cout<<"enter the choices";

cin>>i;

/*if(i==1)
    cout<<"it is coke";
else if(i==2)
    cout<<"it is water";
else if(i==3)
    cout<<"it is sprite";
else if(i==4)
    cout<<"it is pepsi";
else if(i==5)
    cout<<"it is mirinda";
else
    cout<<"default";*/


    switch(i){

    case 1:
           cout<<"it is coke";
           break;
     case 2:
            cout<<"it is water";
            break;
    case 3:
           cout<<"it is sprite";
           break;
    case 4:
        cout<<"it is pepsi";
        break;
    case 5:
         cout<<"it is mirinda";
         break;

    default:
        cout<<"Error. choice was not valid, here is your money back.";

    }
    return 0;



}
