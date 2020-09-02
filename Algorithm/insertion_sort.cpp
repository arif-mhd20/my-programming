#include<iostream>

using namespace std;
template <class datatype>

void printArray(datatype *arr, int arrSize){
    for(int i=0; i<arrSize; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
template <class datatype>
void insertionSort(datatype *arr, int arrSize){
    for(int i=1; i<arrSize; i++){
        for(int j=i; j>0; j--){
            if(arr[j-1]>arr[j]) swap(arr[j-1],arr[j]);
            else break;
        }
    }
}

int main(){
    int arrSize=5;
    string * arr= new string [arrSize]{"s5", "s4", "s1", "s2", "s3"};

    insertionSort(arr,arrSize);

    printArray(arr,arrSize);

    delete [] arr;

    return 0;
}
