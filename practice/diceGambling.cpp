#include<iostream>
#include<vector>
using namespace std;







enum luck {bad,good,normal};


int rolls(std::vector<int> arr) {
	int sum=0;
	luck arif= normal;
	for(int i=0;i<arr.size();i++){
		if(arif==normal){
			sum=sum+arr[i];
			//cout<<sum<<endl;
		}else if(arif==good){
		sum=sum+(arr[i]*2);
		//cout<<sum<<endl;
			}else if(arif==bad){
			}

		if(arr[i]==1){
			arif=bad;

		}else if(arr[i]==6){
			arif=good;

		}else arif=normal;

        //cout<<arif<<endl;
        //cout<<endl;
	}return sum;

}

int main(){
    vector<int> v{1,2,3};
    cout<<rolls(v)<<endl;
}
