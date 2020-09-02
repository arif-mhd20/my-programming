#include<iostream>

using namespace std;


void thefunction(int &a,int &s, int &d) {


a=a-5;
s=s-10;
d=d-15;


}

int main(){

int q=1,w=2,e=3;

thefunction(q,w,e);

cout<<q<<endl<<w<<endl<<e;

return 0;




}
