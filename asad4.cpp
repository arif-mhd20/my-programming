#include<iostream>

using namespace std;


int main(){

int n;


cout<<"enter the grade"<<endl;

cin>>n;

if (n>='a' || n<='Z'){
    cout<<"Invalid input. Please enter a number between 0-100";

}

else if(n>=0&&n<=100){
        if(n==100)
           cout<<"it is perfect"<<endl;



if(n>=90&&n<=100)
    cout<<"grade a"<<endl;



    if(n>=0&&n<=59){
        cout<<"grade f";
        //cout<<endl<<"n = "<<n;
    }

    else if(n>=60&&n<=69)
        cout<<"grade D";

    else if(n>=70&&n<=79)
        cout<<"grade c";

    else if(n>=80&&n<=89)
        cout<<"grade b";




}
else cout<<"invalid"<<endl;




return 0;


}
