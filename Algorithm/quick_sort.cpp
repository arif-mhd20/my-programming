#include<iostream>

using namespace std;

template <class datatype>
void printArr(datatype *arr, int arrSize ){
for(int i=0; i<arrSize ;i++){
cout<<arr[i]<<" ";
}
cout<<endl;//<<endl;
}
template <class datatype>
void quick_sort(datatype * inputArr, int arrSize, int start,  int end){
     int l=start, r=end, p=(start+end)/2;

     if((r-l)<=1){
        if(inputArr[l]>inputArr[r])
            swap(inputArr[l],inputArr[r]);
        cout<<"2 elements only. Swapping and returning\n";
        printArr(inputArr, arrSize);
        return;
     }
     while(true){
            if(inputArr[l]>inputArr[r]){
                //cout<<"L: "<<l<<" ## P: "<<p<<" ## R: "<<r<<endl;
                swap(inputArr[l],inputArr[r]);
                //cout<<"left index element larger than right index element. Swapping and returning\n";
                //printArr(inputArr, arrSize);
                //cout<<"After swapping    ########       L: "<<l<<" ## P: "<<p<<" ## R: "<<r<<endl<<endl;
                //continue;
            }else if(inputArr[p]<inputArr[l]){
                 //cout<<"L: "<<l<<" ## P: "<<p<<" ## R: "<<r<<endl;
                 swap(inputArr[p],inputArr[l]);
                 //cout<<"pivot index element smaller than left index element. Swapping and returning\n";
                 //printArr(inputArr, arrSize);
                 p=l;
                 //cout<<"After swapping    ########       L: "<<l<<" ## P: "<<p<<" ## R: "<<r<<endl<<endl;
                 //continue;
            }else if(l==p){

                    if(inputArr[p]>inputArr[r]){  ///Changed < to >
                        //cout<<"L: "<<l<<" ## P: "<<p<<" ## R: "<<r<<endl;
                        swap(inputArr[p],inputArr[r]);
                        //cout<<"pivot index element greater than right index element Swapping and returning\n";
                        //printArr(inputArr, arrSize);
                        p=r;
                        //cout<<"After swapping    ########       L: "<<l<<" ## P: "<<p<<" ## R: "<<r<<endl<<endl;
                        //continue;
                    }else if(r==p){
                        break;
                    }else  ///NEW
                    r--;

            }else ///NEW
                l++;

     }
     quick_sort(inputArr,arrSize,start,p);
     quick_sort(inputArr,arrSize,p+1,end);



}



int main(){


int arrSize=5;
//int * inputArr= new int [arrSize]  {5,1,2,4,3};
string * inputArr= new string [arrSize]{"s5", "s4", "s1", "s2", "s3"};

printArr(inputArr, arrSize);

quick_sort(inputArr, arrSize, 0 ,arrSize-1 );

printArr(inputArr, arrSize);




delete [] inputArr;









 }
