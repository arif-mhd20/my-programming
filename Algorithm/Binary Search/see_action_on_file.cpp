#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;



char* fileN = "10000_items.txt";
const int inputSize = 10000;

void printArray(int *arr){
    for(int i=0; i<inputSize; i++){
        cout<<arr[i]<<" ";
    }
}

int* returnDataFromFileAsArray(char* fileName){
    string line;
    int arrIndex=0;
    static int arr[inputSize]={0};

    ifstream myfile (fileName);
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {

            istringstream(line)>>arr[arrIndex++];
        }
        myfile.close();
    }else cout << "Unable to open file";

    return arr;

}

int binarySearch(int* sortedArr, int arrSize, int searchVal){
    int midVal;
    int first=0;
    int last=arrSize-1;
    int countt=0;

    ///printArray(sortedArr);
    cout<<"Array Size is: "<<arrSize<<endl;
    cout<<"Search Value is: "<<searchVal<<endl;

    for(;;countt++){

        midVal=(first+last)/2;
        //cout<<"First Value is: "<<first<<endl;
        //cout<<"Last Value is: "<<last<<endl;
        //cout<<"Mid Value is: "<<midVal<<endl;

        if(searchVal==sortedArr[first] ){
                cout<<"Found in first"<<endl;
                cout<<"Return value is: "<<first<<endl;
                cout<<"Total operations: "<<countt<<endl;
                return first;
        }
        else if(searchVal==sortedArr[last] ){
                cout<<"Found in last"<<endl;
                cout<<"Return value is: "<<last<<endl;
                cout<<"Total operations: "<<countt<<endl;
                return last;
        }
        else if(searchVal>sortedArr[midVal]){
            cout<<"Searching right array"<<endl;
            first=midVal;
            continue;
        }
        else if(searchVal<sortedArr[midVal]){
            cout<<"Searching left array"<<endl;
            last=midVal-1;
            continue;
        }
        break;

    }
}


int searchInReceivedArray(int* arr, int arrSize, int searchVal){

    clock_t begin = clock();

    int foundInIndex = binarySearch(arr,arrSize,searchVal);


    clock_t end = clock();


    double elapsed_milliseconds = double(end - begin) ;
    cout<<"Time taken: "<<elapsed_milliseconds<<endl;

    cout<<"FoundInIndex value is: "<< foundInIndex<<endl;

    return foundInIndex;
}




int main(){
    int searchVal;
    cin>>searchVal;
    cout<<"Found in index: "<<searchInReceivedArray(returnDataFromFileAsArray(fileN),inputSize,searchVal);

    return 0;
}
