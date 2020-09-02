#include<iostream>

using namespace std;

int * getArr( int * arr){
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;

    return arr;
}

int* doSome(int *arr, int length){

    for(int i=0; i<length; i++){
        cout<<arr[i]<<endl;
    }
    return arr ;
}


int main(){
    /*
    int arrL=3;
    int * someP;
    int arr[arrL]={1,2,3};

    //arr=
    */
    int *arr;
    arr[3]={1,2,3};
    int * someP=getArr(arr);


    for(int i=0; i<3; i++){
        cout<<someP[i]<<endl;
    }



}
