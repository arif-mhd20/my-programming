#include<iostream>

using namespace std;

void printArry(int * arr, int arrSize){

for(int i=0;i<arrSize;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

class Circle {


	double internalRadius;

	public:

	Circle (double radius):internalRadius(radius){
	};
double	getArea(){
		return 1*internalRadius*internalRadius;
	}
	double getPerimeter(){
		return 2*1*internalRadius;
	}
  // Write your code here
  // Please use PI_F constant
}


void countingSort(int * arr ,int arrSize ){
    int index=0;

    int max=0;
///finding the max

    for(int i=0;i<arrSize;i++){
            if(max<arr[i]){
                max=arr[i];
            }

        }

        ///creating another array and initializing all the index with 0
    int * tempArr= new int [max+1];


    for(int j=0;j<max+1;j++){
        tempArr[j]=0;
    }

    ///placing the value accoring to the index
    for(int i=0;i<arrSize;i++){
        tempArr[arr[i]]++;
    }

    ///if value greate than 0 place it aCCORINGLY nd increasing the index
    for(int j=0;j<max+1;j++){
        if(tempArr[j]>0){
            for(int k=0;k<tempArr[j];k++){
                arr[index++]=j;
            }
        }
    }




}





int main(){


int arrSize=6;


int * arr=new int [arrSize]{70,1,2,55,32,1};

countingSort(arr ,arrSize );

printArry(arr,arrSize);

}
