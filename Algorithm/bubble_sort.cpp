#include<iostream>
#include<string>

using namespace std;

void  bubble_sort(string arr){
char temp;
cout<<arr<<endl;
int strSize = arr.size();
    for(int i=0;i<strSize-1;i++){
        for(int j=0;j<strSize-1\;j++){

            if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j+1]);

            /*
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                */
            }
        }
    }
    cout<<arr<<endl;
}

int main (){
    string hello="hello";
    bubble_sort(hello);
    return 0;

}
