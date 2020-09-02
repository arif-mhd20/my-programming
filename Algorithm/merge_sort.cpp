#include<iostream>
#include<string>

#include "merge_sort.h"

using namespace std;


template <class datatype>
 void printArr(datatype * arr, int arrSize){
 for(int i=0;i<arrSize;i++){

    cout<<arr[i]<<" ";

 }
 cout<<endl;
 }

 /*
 template <class datatype>
void merge( datatype * inputArr , int start, int end,int mid ){
    int A1Size = (mid-start)   +1;
    int B1Size= end-(mid+1)  +1;
    datatype * A=new datatype[A1Size];
    datatype * B=new datatype[B1Size];

    int A1=0,B1=0;

    for(int i=start;i<=mid;i++){
        A[A1++]=inputArr[i];
    }
    for(int i=mid+1;i<=end;i++){
        B[B1++]=inputArr[i];
    }

     A1=0;
     B1=0;

    for(int i=start;i<=end;i++){

            if(A1>=A1Size){
                 inputArr[i]=B[B1++];


            }else if(B1>=B1Size){
                inputArr[i]=A[A1++];
            }
            else if(A[A1]<B[B1]){
                inputArr[i]=A[A1++];


            }else
            inputArr[i]=B[B1++];

    }




}
template <class datatype>
void mergeSort(datatype * inputArr, int start, int end){

    int mid=(start+end)/2;
    int sizeOfArray=(end-start)+1;

    if(sizeOfArray>2){
        mergeSort( inputArr ,start, mid);
        mergeSort( inputArr ,mid+1,end);
    }

    merge(inputArr   ,start,end, mid);


}
*/


int main(){
    const int inputSize=5;
    int * inputArr = new int [inputSize]{5,2,1,4,3};
    mergeSort(inputArr, 0, inputSize-1);
    printArr(inputArr,inputSize);
    delete [] inputArr;


}
