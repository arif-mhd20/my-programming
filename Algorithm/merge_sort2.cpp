#include<iostream>

using namespace std;

void merge_sort(int * arr, int start,int end){

int mid=(start+end)/2;

 int Asize=(mid-start)+1;
 int Bsize=(end-(mid+1)+1);


     if(end-start>1){

    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
     }



 int * leftArr = new int[Asize];
 int * rightArr = new int[Bsize];
 int index=0;

 for(int i=start;i<=mid;i++){
    leftArr[index++]=arr[i];

 }
 index=0;
 for(int j=mid+1;j<=end;j++){
    rightArr[index++]=arr[j];
 }
 int leftIndex=0,rightIndex=0;



 for(int i=start;i<=end;i++){

        if(Bsize==rightIndex){ arr[i]=leftArr[leftIndex++];

        }else if(Asize==leftIndex){arr[i]=rightArr[rightIndex++];}

    else if(leftArr[leftIndex]<rightArr[rightIndex]){
     arr[i]=leftArr[leftIndex++];

    }else if(leftArr[leftIndex]>rightArr[rightIndex]){
    arr[i]=rightArr[rightIndex++];
    }
 }




}




 int printArry(int * arr,int arrSize){
 for(int i=0;i<arrSize;i++){
 cout<<arr[i]<<" ";

 }
 cout<<endl;

 }

int main(){
 int arrSize=5;
int * arr =new int[arrSize]{3,5,2,1,4};

merge_sort(arr,0,arrSize-1);
printArry(arr,arrSize);


delete [] arr;

}
