#include<iostream>
#include<string>

using namespace std;

string numType(int num) {
	int sum=0;
	int divisorSum=0;

	for(int i=0;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(sum==num){
		return "Perfect";
	}
	for(int i=0;i<sum;i++){
		if(num%i==0){
			divisorSum=divisorSum+i;
		}
	}
	if(divisorSum==num){
        cout<<num<<" , "<<sum<<endl;
		return "Amicable";
	}

	return "Neither";


}

int main(){
    numType(28);
}
