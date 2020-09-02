#include<iostream>

using namespace std;

int main()
{

    int arr[5]={1,3,5,4,2};
    int arrsize=5,temp;

    for(int i=arrsize;i>0;i--)
    for(int j=0;j<i;j++){

        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }


    }

    for(int i=0;i<arrsize;i++)
        cout<<arr[i]<<endl;



      return 0;
    }


