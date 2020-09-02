#include <iostream>
#include <vector>

using namespace std;

std::vector<int> countPosSumNeg(std::vector<int> arr) {
	std::vector<int> vect;
	int countt=0;
	int sum=0;
	for(int i=0;i<arr.size();i++){
        cout<<"Number is: "<<arr[i]<<endl;
		if(arr[i]>0){
			countt=countt+1;
			cout<<"count++ and result: "<<countt<<endl;

		}else{
			sum=sum+arr[i];
			cout<<"sum increased to: "<<sum<<endl;
		}
	}

	cout<<"Final sum: "<<sum<<endl;
	cout<<"Final count: "<<countt<<endl;
	vect.push_back(countt);
   vect.push_back(sum);

	return vect;

}

int main(){
    vector<int> input;
    input.push_back(92);
    input.push_back(6);
    input.push_back(73);
    input.push_back(-77);
    input.push_back(81);
    input.push_back(-90);
    input.push_back(99);
    input.push_back(8);
    input.push_back(-85);
    input.push_back(34);
    countPosSumNeg(input);
}
