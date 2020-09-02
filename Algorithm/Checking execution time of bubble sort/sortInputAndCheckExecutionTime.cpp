#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

char* fileN = "30000_rev_items.txt";
const int inputSize = 30000;

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

double sortTheReceivedArray(int* arr, int arrSize){

    clock_t begin = clock();


    int temp, countt=0;
    ///Sort the array here
    for(int i=0;i<arrSize;i++){
        for(int j=0;j<arrSize;j++){
            if(arr[j]>arr[j+1]){
                countt++;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }



    clock_t end = clock();
    cout<<"Total operations: "<<countt<<endl;

    double elapsed_milliseconds = double(end - begin) ;

    return elapsed_milliseconds;
}




int main(){
    cout<<"Time taken in milliseconds: "<<sortTheReceivedArray(returnDataFromFileAsArray(fileN),inputSize);

    return 0;
}
