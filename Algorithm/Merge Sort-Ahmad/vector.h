//#include<iostream>
#ifndef mv
#define mv

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
            std::cout<<arr[i]<<" ";
        }
        std::cout<<std::endl;
    }

    bool push_back(dataType val){
        try{
            if(lastIndex==vectorSize){
                expand();
            }
            arr[lastIndex++]=val;
            return true;
        }catch(const std::exception& e){
            std::cout<<e.what()<<std::endl;
            return false;
        }
    }

    dataType pop_back(){
        return arr[--lastIndex];
    }

    int size(){
        return lastIndex;
    }

    dataType operator[](int index){
        return arr[index];
    }
};


#endif
