#include<iostream>
#include<ctime>

using namespace std;

int main(){

int arr[5]={1,2,3,4,5},n;

clock_t begin = clock();

/*
DO BUBBLE SORT HERE

*/
for(int i=0;i<n;i++){
    for(int j=n;j>i;j--){

        if(arr[j]>arr[j-1]){
            arr[j]=temp;
            temp=arr[j-1];
            arr[j-1]=temp;
        }
    }
}

clock_t end = clock();
double elapsed_milliseconds = double(end - begin) / CLOCKS_PER_SEC;

cout<<elapsed_milliseconds;

}
