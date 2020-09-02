#include<iostream>
#include<string>
#include<vector>

using namespace std;

std::string check(std::vector<int> arr) {

	bool increasing=false;
	bool decreasing=false;
	bool neither=false;


	for(int i=0;i<arr.size()-1;i++){
		if(arr[i]>arr[i+1]){
            //cout<<"First number: "<<arr[i]<<" Second number: "<<arr[i+1]<<"  Decreasing is up\n";
			decreasing =true;
		}else if(arr[i]<arr[i+1]){
		    //cout<<"First number: "<<arr[i]<<" Second number: "<<arr[i+1]<<"  Increasing is up\n";
			increasing = true;
		}else{
		    //cout<<"First number: "<<arr[i]<<" Second number: "<<arr[i+1]<<"  Neither is up\n";
            //neither= true;
            increasing = true;
            decreasing =true;
		}
	}
	if(increasing && decreasing){
		return "neither";
	}else if(increasing){
		return "increasing";
	}else {
		return "decreasing";
	}


}

int main(){

    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    cout<<check(v1)<<endl;


    vector<int> v2;
    v2.push_back(3);
    v2.push_back(2);
    v2.push_back(1);
    cout<<check(v2)<<endl;

    vector<int> v3;
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(1);
    cout<<check(v3)<<endl;

    vector<int> v4;
    v4.push_back(1);
    v4.push_back(1);
    v4.push_back(2);
    cout<<check(v4)<<endl;
}
