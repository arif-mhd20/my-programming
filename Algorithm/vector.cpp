#include<iostream>
#include"vector.h"


using namespace std;



int main(){

    vector myV(5);

    for(int i=0; i<5; i++){
        int a;
        cin>>a;
        myV.push_back(a);
    }
    //myV.print();
    myV.pop_back();
    //myV.print();


    cout<<myV[3];

    /*
    int arrSize=5;
    int * arr=new int[arrSize];


    for(int i=0;i<arrSize;i++){
              cin>>arr[i];
    }


    int arrSize1=arrSize*2;
    int * arr1 = new int [arrSize1];

    for(int j=0;j<arrSize;j++){
        arr1[j]=arr[j];
    }
    for(int k=arrSize;k<arrSize1;k++){
        cin>>arr1[k];
    }

    for(int i=0; i<arrSize1; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    */
}
