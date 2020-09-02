#include<iostream>

using namespace std;

struct element{
int weight;
int value;
};

int main(){

    int n=4;
    int w=5;
    int arrSize=n;

    element * arr = new element [arrSize]{
        {weight:2,value:3},
        {weight:3,value:4},
        {weight:4,value:5},
        {weight:5,value:6},

    };
    int  valueMatrix[w+1][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<(w+1);j++){
            if(i==0){
                if(arr[i].weight<=j){
                    valueMatrix[j][i]=arr[i].value;
                }else{valueMatrix[j][i]=0;
                }
            }else{
                if(arr[i].weight<=j){
                    int firstValue;
                    int secondValue= valueMatrix[j][i-1];

                    int indexToCheck = j-arr[i].weight;


                    firstValue=arr[i].value+(
                                               valueMatrix[indexToCheck][i]
                                             );
                    if(firstValue>=secondValue)valueMatrix[j][i]=firstValue;
                    else valueMatrix[j][i]=secondValue;

                }else{
                    valueMatrix[j][i]=valueMatrix[j][i-1];
                }
            }
        }
    }


for(int i=0; i<=w; i++){
    for(int j=0; j<n; j++){
        cout<<valueMatrix[i][j]<<" ";
    }
    cout<<endl;
}



}
