#include<iostream>
#include<string>
#include<sstream>

using namespace std;


int  operation(int a,int b){

return a/b;
}


int operation(int a, int b, int c){


return a*b*c;
}
string operation(string a, int b, int c, int d){

    stringstream asad;

    asad<<(b+c+d);

    string str=asad.str();


return a+str;

}


string operation(int a,int b,  string c ){

stringstream arif;

arif<<(a*b);

string str=arif.str();

return str+c;

}


string operation(double a, double b,string c){

stringstream ahmed;

ahmed<<(a/b);

string str=ahmed.str();

return str+c;

}


int main(){

cout<<operation(7,8)<<endl;

cout<<operation(1, 2, 4)<<endl;


cout<<operation("hello world "  , 5, 6 ,10)<<endl;


cout<<operation(12  ,  34  ,   " LOL")<<endl;

cout<<operation(12.6  , 6.6 ,  "    SUP")<<endl;

return 0;


}
