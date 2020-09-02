#include<iostream>
#include<string>

using namespace std;


class employee{

public:

    ///Properties
    string name;
    int age;
    double salary;

    ///Empty constructor
    employee(){
    }

    ///Parameterized contructor
    employee( string name,int age,double salary){
        this->name=name;
        this->age=age;
        this->salary=salary;

    }

    bool operator< (employee &secondEmployee){
        if(salary<secondEmployee.salary)return true;

        return false;
    }
    bool operator>(employee &secEmp){
    if(salary>secEmp.salary)
        return true;
    else
        return false;
    }

    employee operator+(employee &nVar){
        employee temp;
        temp.name=name+nVar.name;
        temp.age=age+nVar.age;
        temp.salary=salary+nVar.salary;
        return temp;
    }

};


template <class datatype>
 void printArr(datatype * arr, int arrSize){
 for(int i=0;i<arrSize;i++){

    cout<<arr[i].name<<" "<<arr[i].salary<<endl;

 }
 cout<<endl;
 }

 template <class datatype>
void merge( datatype * inputArr , int start, int end,int mid ){
    int A1Size = (mid-start)   +1;
    int B1Size= end-(mid+1)  +1;
    datatype * A=new datatype[A1Size];
    datatype * B=new datatype[B1Size];

    int A1=0,B1=0;

    for(int i=start;i<=mid;i++){
        A[A1++]=inputArr[i];
    }
    for(int i=mid+1;i<=end;i++){
        B[B1++]=inputArr[i];
    }

     A1=0;
     B1=0;

    for(int i=start;i<=end;i++){

            if(A1>=A1Size){
                 inputArr[i]=B[B1++];


            }else if(B1>=B1Size){
                inputArr[i]=A[A1++];
            }
            else if(A[A1]<B[B1]){
                inputArr[i]=A[A1++];


            }else
            inputArr[i]=B[B1++];

    }




}
template <class datatype>
void mergeSort(datatype * inputArr, int start, int end){

    int mid=(start+end)/2;
    int sizeOfArray=(end-start)+1;

    if(sizeOfArray>2){
        mergeSort( inputArr ,start, mid);
        mergeSort( inputArr ,mid+1,end);
    }

    merge(inputArr   ,start,end, mid);


}




int main(){

    employee one("Masud", 23, 15000);
    employee two("Shohan", 21, 21000);
    employee three("Shihab", 22, 10000);
    employee four("Shanto", 25, 16000);
    employee five("Nabil", 20, 14000);

    cout<<(one+two).salary<<endl;

    /*
    const int inputSize=5;
    employee * inputArr = new employee [inputSize]{one,two,three,four,five};
    mergeSort(inputArr, 0, inputSize-1);
    printArr(inputArr,inputSize);
    delete [] inputArr;
    */





    //if(one<two)cout<<"One is smaller"<<endl;


}
