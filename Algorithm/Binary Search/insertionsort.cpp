#include<iostream>

using namespace std;

void insertionSort(){
void const int inSize=5;
int inputArr[inSize]={10,50,20,30,40};

int outputArr[inSize]={0,0,0,0,0};
int outSize=0;

for(int i=0;i<inSize;i++ ){
        for(int j=0;j<inSize;j++){
            if(outputArr[j]==0){
                outputArr[j]=inputArr[i];

                outSize++;
                break;
            }
            else if(inputArr[i]>outputArr[j]){
                continue;
            }
            else if(inputArr[i]<outputArr[j]){
                for(int k=outSize;k>j;k--){
                    outputArr[k]=outputArr[k-1];
                    outputArr[k-1]=0;

                    cout<<endl;
                }

                outputArr[j]=inputArr[i];
                outSize++;
                break;
            }
        }
}for(int i=0;i<inSize;i++){
    cout<<outputArr[i]<<endl;
}
{
 const int inSize=5;
int inputArr[inSize]={10,50,20,30,40};

int outputArr[inSize]={0,0,0,0,0};
int outSize=0;

cin>>inSize;

for(int i=0;i<inSize;i++ ){
        for(int j=0;j<inSize;j++){
            if(outputArr[j]==0){
                outputArr[j]=inputArr[i];

                outSize++;
                break;
            }
            else if(inputArr[i]>outputArr[j]){
                continue;
            }
            else if(inputArr[i]<outputArr[j]){
                for(int k=outSize;k>j;k--){
                    outputArr[k]=outputArr[k-1];
                    outputArr[k-1]=0;

                    cout<<endl;
                }

                outputArr[j]=inputArr[i];
                outSize++;
                break;
            }
        }

}

for(int i=0;i<inSize;i++){
    cout<<outputArr[i]<<endl;
}



 }


}





int main(){

const int inSize=5;
int inputArr[inSize]={10,50,20,30,40};

int outputArr[inSize]={0,0,0,0,0};
int outSize=0;





}
