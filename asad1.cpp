#include<iostream>
#include<bitset>

using namespace std;

int main(){
int a=3, b=2;
cout<<"a: "<<bitset<4>(a)<<endl;
cout<<"b: "<<bitset<4>(b)<<endl;
a=a^b;
b=b^a;
a=a^b;
cout<<"a: "<<bitset<4>(a)<<endl;
cout<<"b: "<<bitset<4>(b)<<endl;
//cout<<"a~b: " <<bitset<4>(a);
/*
int a=3,b=2,temp;


temp=a;

a=b;


b=temp;

cout<<"the swap value is"<<a<<"____"<<b<<endl;
*/



return 0;
}
