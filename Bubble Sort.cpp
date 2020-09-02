#include<iostream>


using namespace std;

void printArray(int *arr, int arrSize){

    for(int i=0; i<arrSize; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

/*
void swap(int *a, int *b){
    int* temp;
    temp=a;
    a=b;
    b=temp;
}
*/

int main(){
    int arrSize=5;
    int arr[arrSize]={1,3,5,4,2};

    ///Printing the array
    //printArray(arr, arrSize);

    ///Bubble sort
    for(int i=arrSize; i>0 ; i--){

            for(int j=1; j<i; j++){
                if(arr[j-1]<arr[j]){
                    int temp;
                    temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                }

                printArray(arr, arrSize);
            }
            cout<<endl;
            cout<<endl;
            //printArray(arr, arrSize);
    }


    ///Printing the array
    //printArray(arr, arrSize);



    return 0;
}
