#include <iostream>

using namespace std;

void printArray(int *arr, int arrSize){
    for (int i=0; i<arrSize; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int *arr, int start, int mid, int end);

void mergeSort(int *arr, int arrSize){
    int lastIndex=arrSize-1;
    //outer loop consisting of selection sizes
    for(int subArrayMainSize=1; subArrayMainSize<=lastIndex; subArrayMainSize*=2){
        //inner loop to run the merge function on subArraySize
        for(int subArraySize=0; subArraySize<=lastIndex; subArraySize+=subArrayMainSize*2){
            //Define the start, end and midpoints for the subarrays
            int start=subArraySize;
            int end=subArraySize+(subArrayMainSize*2)-1;
            if(end>lastIndex) end=lastIndex;

            int mid=(subArraySize+subArrayMainSize)-1;


            //cout<<"Start index is: "<<start<<endl;
            //cout<<"End index is: "<<end<<endl;

            if(end!=start){
                merge(arr,start,mid,end);
                /*
                cout<<"subArrays placed in main Array and the final result is: "<<endl;
                printArray(arr,arrSize);
                cout<<endl;
                */
            }

        }
    }
}

void merge(int *arr, int start, int mid, int end){
    if((end-start)>1){
        //Do the complicated merge procedure here
        //Start by separating out the elements into 2 distinct subArrays
        int leftArraySize = mid-start+1;
        int rightArraySize = end-(mid+1)+1;
        /*
        cout<<"Start index is: "<<start<<endl;
        cout<<"Mid index is "<<mid<<endl;
        cout<<"End index is "<<end<<endl;
        cout<<"Left Array Size is: "<<leftArraySize<<endl;
        cout<<"Right Array Size is: "<<rightArraySize<<endl;
        */

        int *leftArrayElements=new int[leftArraySize];
        int *rightArrayElements=new int[rightArraySize];
        int leftArrayCurrentIndex=0;
        int rightArrayCurrentIndex=0;
        int placementIndexForMainArray=start;




        for(int i=0; i<leftArraySize; i++){
            /*
            cout<<"Placing for left array "<<endl;
            cout<<"Placing "<<arr[start+i]<<" in left array "<<endl;
            */
            leftArrayElements[i]=arr[start+i];
        }
        for(int i=0; i<rightArraySize; i++){
            /*
            cout<<"Placing for right array "<<endl;
            cout<<"Placing "<<arr[(mid+1)+i]<<" in right array "<<endl;
            */
            rightArrayElements[i]=arr[(mid+1)+i];
        }
        /*
        cout<<"2 subArrays created which are: "<<endl;
        printArray(leftArrayElements, leftArraySize);
        printArray(rightArrayElements, rightArraySize);
        cout<<endl;
        */

        //Then iterate through the subArrays and place the smaller element into the main array directly

        for(;;){
            if(leftArrayCurrentIndex==leftArraySize && rightArrayCurrentIndex==rightArraySize) break;
            else{
                if(leftArrayCurrentIndex>=leftArraySize){
                    arr[placementIndexForMainArray++]=rightArrayElements[rightArrayCurrentIndex++];
                }
                else if(rightArrayCurrentIndex>=rightArraySize){
                    arr[placementIndexForMainArray++]=leftArrayElements[leftArrayCurrentIndex++];
                }
                else{
                    if(leftArrayElements[leftArrayCurrentIndex]<rightArrayElements[rightArrayCurrentIndex]){
                        arr[placementIndexForMainArray++]=leftArrayElements[leftArrayCurrentIndex++];
                    }
                    else{
                        arr[placementIndexForMainArray++]=rightArrayElements[rightArrayCurrentIndex++];
                    }
                }
            }
        }

        delete[] leftArrayElements;
        delete[] rightArrayElements;
    }else{
        //The difference between the indices is 1 or less. So just swap directly if needed
        //if start index array value is smaller than end index array value, swap the elements
        if(arr[start]>arr[end]){
            int temp = arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
}

int main()
{
    const int arrSize = 5;
    int *arr = new int[arrSize]{1,3,4,5,2};

    mergeSort(arr, arrSize);

    printArray(arr, arrSize);

    delete[] arr;

    return 0;
}

