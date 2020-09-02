#ifndef asad
#define asad

class vector{
int * arr ;
int arrSize;
int index;
public:
///Empty constructor
/*
vector(){
    arrSize=5;
    arr =new int[arrSize] ;
}
*/

///Parameterized constructor
vector(int clientSize){
    arrSize=clientSize;
    arr = new int [clientSize];
    index=0;
}
void expand(){
    arrSize*=2;
    int * arr1=new int[arrSize];
    for(int i=0;i<index;i++){
        arr1[i]=arr[i];

    }

    delete [] arr;

    arr=arr1;
}
void push_back(int a){
    if(arrSize==index){
        expand();
    }
    arr[index++]=a;
}

void print(){
    for(int i=0; i<index; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

int pop_back(){
    index--;
    return arr[index];
}

int size(){
return index;
}

int operator[] (int i){
    return arr[i];


}

};



#endif
