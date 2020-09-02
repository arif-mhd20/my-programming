#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cstdlib>

using namespace std;




void createSortedInput(char* fileName, int inputSize){
    ofstream myfile (fileName);
    if (myfile.is_open())
    {
        for(int i=1; i<=inputSize; i++){
            myfile<<i<<endl;
        }
        myfile.close();
    }
}

void createReverseSortedInput(char* fileName, int inputSize){
    ofstream myfile (fileName);
    if (myfile.is_open())
    {
        for(int i=inputSize; i>0; i--){
            myfile<<i<<endl;
        }
        myfile.close();
    }
}

void createRandomizedInputs(char* fileName, const int inputSize){
    ///Seed the random function
    srand(time(NULL));

    ///Create the array
    int arr[inputSize]={};
    for(int i=0; i<inputSize; i++){
        arr[i]=i+1;
    }

    ///Change the numbers at random
    for(int i=0; i<inputSize; i++){
        int swapIndex = rand() % inputSize;
        int temp;

        temp=arr[i];
        arr[i]=arr[swapIndex];
        arr[swapIndex]=temp;
    }

    ofstream myfile (fileName);
    if (myfile.is_open())
    {
        for(int i=0; i<inputSize; i++){
            myfile<<arr[i]<<endl;
        }
        myfile.close();
    }
}


int main(){

/*
    createSortedInput("10000_items.txt", 10000);
    createSortedInput("20000_items.txt", 20000);

    createReverseSortedInput("10000_rev_items.txt", 10000);
    createReverseSortedInput("20000_rev_items.txt", 20000);

    createRandomizedInputs("10000_rand_items1.txt", 10000);
    createRandomizedInputs("10000_rand_items2.txt", 10000);
    createRandomizedInputs("10000_rand_items3.txt", 10000);
    createRandomizedInputs("10000_rand_items4.txt", 10000);
    createRandomizedInputs("10000_rand_items5.txt", 10000);
    createRandomizedInputs("10000_rand_items6.txt", 10000);
    createRandomizedInputs("10000_rand_items7.txt", 10000);
    createRandomizedInputs("10000_rand_items8.txt", 10000);
    createRandomizedInputs("10000_rand_items9.txt", 10000);

    */

    createSortedInput("10000_items.txt", 10000);




    cout<<"Success";

    return 0;
}
