#include<iostream>

using namespace std;


void insertionSort(int arr[], int n){
    int i,v,j;

    for(i=1; i<n ; i++){
        v=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>v){
            arr[j+1]=arr[j];
            j--;
            arr[j+1]=v;
        }
    }

    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int *arr= new int[5]{45,15,12,1,2};

    insertionSort(arr,5);

    delete [] arr;
}
