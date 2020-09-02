#include<iostream>
#include<string>

using namespace std;


template<class dataType>
void printArray(dataType * arr, int arrSize){
    for(int i=0; i<arrSize; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arrSize=5;
    int *intArr=new int[arrSize]{1,2,3,4,5};
    double *doubleArr=new double[arrSize]{1.1, 2.2, 3.3, 4.4, 5.5};
    string *stringArr=new string[arrSize]{"s1","s2","s3","s4","s5"};

    printArray(intArr,arrSize);
    printArray(doubleArr,arrSize);
    printArray(stringArr,arrSize);

    delete [] intArr;
    delete [] doubleArr;
    delete [] stringArr;
    return 0;
}
