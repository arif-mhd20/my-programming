#include<iostream>
#include<string>

using namespace std;

template <class DataType>
DataType sum(DataType firstVar, DataType secondVar){

    return firstVar+secondVar;
}


template <class DataType>
DataType multiplication(DataType firstVar, DataType secondVar){
    return firstVar*secondVar;
}



int main(){
    int a=10, b=20;
    double  c=2, d=3;
    float e=1, f=2;
    string g="Hello", h="World";
    cout<<sum(a,b)<<endl;
    cout<<sum(c,d)<<endl;
    cout<<sum(e,f)<<endl;
    cout<<sum(g,h)<<endl;
    cout<<multiplication(a,b)<<endl;



    return 0;

}
