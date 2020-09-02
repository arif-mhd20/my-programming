#include<iostream>

using namespace std;
template <class datatype>


int binarySearch(datatype* sortedArr, int arrSize, datatype searchVal){
    int midVal;
    int first=0;
    int last=arrSize-1;

    for(int i=0;i<arrSize;i++){

        midVal=(first+last)/2;
        /*
        cout<<"First Value is: "<<first<<endl;
        cout<<"Last Value is: "<<last<<endl;
        cout<<"Mid Value is: "<<midVal<<endl;
        */

        if(searchVal==sortedArr[first] ){
                return first;
        }
        else if(searchVal==sortedArr[last] ){
                return last;
        }
        else if(searchVal>sortedArr[midVal]){
            first=midVal;
            continue;
        }
        else if(searchVal<sortedArr[midVal]){
            last=midVal-1;
            continue;
        }

    }
}

int main(){

const int arrSize=10;
int searchVal=6;
int * sortedArr=new int[arrSize]{1,2,3,4,5,6,7,8,9,10};

cin>>searchVal;

cout<<binarySearch(sortedArr,arrSize,searchVal)<<endl;

delete[] sortedArr;


}




