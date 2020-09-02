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

    printArray(arr, arrSize);



    return 0;
}
