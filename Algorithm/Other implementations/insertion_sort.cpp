#include<iostream>

using namespace std;

void printArray(int *arr, int inpSize){
    for(int i=0; i<inpSize; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

const int inSize=5;
int inputArr[inSize]={1,5,3,2,4};

int outputArr[inSize]={0,0,0,0,0};
int outSize=0;
printArray(outputArr,inSize);


for(int i=0;i<inSize;i++ ){
        cout<<"######PROCESSING "<<inputArr[i]<<" ##########"<<endl;
        for(int j=0;j<inSize;j++){
            if(outputArr[j]==0){
                outputArr[j]=inputArr[i];
                printArray(outputArr,inSize);
                outSize++;
                break;
            }
            else if(inputArr[i]>outputArr[j]){
                cout<<inputArr[i]<<" is bigger than "<<outputArr[j]<<" so continue"<<endl;
                continue;
            }
            else if(inputArr[i]<outputArr[j]){
                cout<<"Shifting for "<<inputArr[i]<<endl;
                cout<<"Because "<<inputArr[i]<<"<"<<outputArr[j]<<endl;
                for(int k=outSize;k>j;k--){
                    outputArr[k]=outputArr[k-1];
                    outputArr[k-1]=0;
                    printArray(outputArr,inSize);
                    cout<<endl;
                }
                //cout<<"i j: "<<i<<" "<<j<<"  ###   Element of input[i] was placed in element of output[j]";
                outputArr[j]=inputArr[i];
                outSize++;
                printArray(outputArr,inSize);
                break;
            }
        }

}

for(int i=0;i<inSize;i++){
    cout<<outputArr[i]<<endl;
}









}
