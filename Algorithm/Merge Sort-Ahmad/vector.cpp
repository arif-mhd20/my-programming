#include<iostream>
#include<string>
#include"vector.h"

using namespace std;

/*
template<class dataType>
class vector{
    dataType * arr;
    int vectorSize;
    int lastIndex;


    void expand(){
        dataType * tempArr;
        int nLastIndex=0;
        vectorSize *= 2;

        tempArr= new dataType[vectorSize];

        for(int i=0; i<lastIndex; i++){
            tempArr[nLastIndex++]=arr[i];
        }

        delete[]arr;

        arr=tempArr;
        lastIndex=nLastIndex;
    }


public:
    vector(){
        vectorSize=5;
        arr=new dataType[vectorSize];
        lastIndex=0;
    };

    vector(int size):vectorSize(size){
        this->arr= new dataType[vectorSize];
    }

    void print(){
        for(int i=0; i<lastIndex; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    bool push_back(dataType val){
        try{
            if(lastIndex==vectorSize){
                expand();
            }
            arr[lastIndex++]=val;
            return true;
        }catch(const exception& e){
            cout<<e.what()<<endl;
            return false;
        }
    }

    dataType pop_back(){
        return arr[--lastIndex];
    }

    int size(){
        return lastIndex;
    }
};
*/



int main(){
    vector <string>myVec;
    myVec.push_back("Hello");
    myVec.push_back("World");
    myVec.print();
    myVec.pop_back();
    myVec.print();
    cout<<myVec[0]<<endl;;
}
