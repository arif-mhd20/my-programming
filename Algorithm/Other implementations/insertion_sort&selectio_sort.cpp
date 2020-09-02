#include<iostream>

using namespace std;


//void printArry(int *arr ,int arrSize){

//for}

void insertionSort(){
    const int inSize=5;
int inputArr[inSize]={};

int outputArr[inSize]={0,0,0,0,0};
int outSize=0;




for(int i=0;i<inSize;i++ ){
        cin>>inputArr[i];
        for(int j=0;j<inSize;j++){
            if(outputArr[j]==0){
                outputArr[j]=inputArr[i];
                outSize++;
                break;
            }
            else if(inputArr[i]>outputArr[j]){
                continue;
            }
            else if(inputArr[i]<outputArr[j]){
                for(int k=outSize;k>j;k--){
                    outputArr[k]=outputArr[k-1];
                    outputArr[k-1]=0;
                }
                outputArr[j]=inputArr[i];
                outSize++;
                break;
            }
        }

}
cout<<endl;
for(int i=0;i<inSize;i++){
    cout<<outputArr[i]<<endl;
}

}



void selectionSort(  int  arr[], int n){

    int minIndex,minValue;

    for(int select=0;select<n-1;select++)
    {

        minIndex=select;
        minValue=arr[select];

            for(int i=select+1;i<n;i++){
                if(arr[i]<minValue){
                    minValue=arr[i];
                    minIndex=i;
                }
            }
            arr[minIndex]=arr[select];
            arr[select]=minValue;
            cout<<endl;


        }

      for(int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
      }
}
int main(){
   const int n=5;
    int *arr = new int[n]  ;
    for(int i=0; i<n; i++)cin>>arr[i];

//insertionSort();

selectionSort(arr,n);

}
