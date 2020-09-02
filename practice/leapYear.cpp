#include<iostream>

using namespace std;

bool isLeap(int year) {
	if(year%400==0 || year%4==0){
		if(!year%100==0){

		}
		return true;
	}
	return false;

}

int main(){
    cout<<isLeap(2100);
}
