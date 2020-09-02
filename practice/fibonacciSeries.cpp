#include<iostream>
using namespace std;


int fibonacci(int n){

    if(n<=1){
        return n;
    }
    unsigned fib;
    int fib2=0;
    int fib1=1;

    for(int i=2;i<n;i++){

      fib=fib1+fib2;
      fib2=fib1;
      fib1=fib;

      cout<<fib<<endl;
    }


}








int main(){
int n=200;

fibonacci(n);

/*int valSize;
int val[10];

val[0]=1;
val[1]=1;

for(int i=2;i<10;i++){
        val[i]=val[i-1]+val[i-2];

cout<<val[i]<<"\n";}
*/
}
