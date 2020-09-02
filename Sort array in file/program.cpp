#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;

const int inputSize = 10;



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

int* sortTheReceivedArray(int* arr, int arrSize){

    ///Sort the array here
    int temp;

    for(int i=0;i<arrSize;i++){
        for(int j=arrSize-1;j>i;j--){


            if(arr[j]>arr[j-1]){

                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }




    return arr;
}

void writeArrayDataToFile(int* arr, int arrSize, char* fileName){
    ofstream myfile (fileName);
    if (myfile.is_open())
    {
        for(int i=0; i<arrSize; i++){
            myfile<<arr[i]<<" ";
        }
        myfile.close();
    }
}


int main(){
    writeArrayDataToFile(sortTheReceivedArray(returnDataFromFileAsArray("toBeSorted.txt"),inputSize),inputSize,"sorted.txt");

    cout<<"Success";

    return 0;
}
