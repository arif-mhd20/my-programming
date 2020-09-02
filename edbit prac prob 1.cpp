#include<iostream>
#include<string>

using namespace std;

int getLastItem(int arr[], int length) {

return arr[length-1];

}

int main(){
    int arr[3]={0,1,2}, arr2[2]={0,1}, arr3[1]={0};

    cout<<getLastItem(arr,3)<<endl; /// Expected answer is 2
    cout<<getLastItem(arr2,2)<<endl; /// Expected answer is 1
    cout<<getLastItem(arr3,1)<<endl; /// Expected answer is 0

    return 0;
}
