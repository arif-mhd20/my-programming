#include <iostream>

using namespace std;

void printArray(int *arr, int arrSize){
    for(int i=0; i<arrSize; i++){
        cout<<arr[i]<<" ";


    }
}

int main(){
    int arr[5] = {5,4,1,2,3};
    int arrSize = 5;
    int temp;

    printArray(arr, arrSize);


    for(int i=0;i<arrSize;i++){
        for(int j=arrSize-1;j>i;j--){

            if(arr[j]>arr[j-1]){

                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }

cout<<endl;
 printArray(arr, arrSize);


    return 0;
}
