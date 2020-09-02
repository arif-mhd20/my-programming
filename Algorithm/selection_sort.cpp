#include<iostream>
#include<string>

using namespace std;
template <class datatype>

void printArray(datatype * arr, int arrSize){
    for(int i=0; i<arrSize; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
template <class datatype>
void selection_sort(datatype * arr, int arrSize ){

datatype minVal ;
int minIndex=0;
    for(int j=0;j<arrSize;j++){
        minVal=arr[j];
        minIndex=j;
        for(int i=j+1;i<arrSize;i++){
                if(minVal>arr[i]){
                    minVal=arr[i];
                    minIndex=i;
                }

        }
        swap(arr[minIndex],arr[j]);

    }
}





int main(){
    int arrSize=5;
    int* arr= new int [arrSize]{ 40,30,20,10 };


    cout<<endl;

    selection_sort(arr,arrSize);

    cout<<endl;
    printArray(arr,arrSize);

delete [] arr;
}


void selectionSort(int array[], int n)
 {
    int select, minIndex, minValue;
    for (select = 0; select < (n - 1); select++)
    {
       minIndex = select;
       minValue = array[select];
       for(int i = select + 1; i < n; i++)
       {
            if (array[i] < minValue)   {
                 minValue = array[i];
                 minIndex = i;
            }
       }
       array[minIndex] = array[select];
       array[select] = minValue;
    }
 }44 54 34
