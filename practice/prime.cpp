#include<iostream>
using namespace std;


bool primeno(int a){

for(int i=2;i<a;i++){
if(a%i==0)
return false;

}
return true;

}





int main(){

int n;
cin>>n;
for(int i=1;i<=n;i++){
        if(primeno(i))
           cout<<i<<" ";


}






}

