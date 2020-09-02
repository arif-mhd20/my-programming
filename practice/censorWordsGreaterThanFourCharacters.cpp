#include<iostream>
#include<string>

using namespace std;

std::string censor(std::string str) {
	int start=0;
	int finish ;
	//cout<<"Start is: "<<start<<endl;
	for(int i=0;i<=str.size();i++){
		if(str[i]==' '||i==str.size()){
			finish=i-1;
			//cout<<"New end is: "<<finish<<endl;
			if((finish-start)>=4){
				for(int j=start;j<=finish;j++){
					str[j]='*';

				}
			}
			start=i+1;
			//cout<<"New Start is: "<<start<<endl;
		}

	}
	return str;
}

int main(){


    cout<<endl;
    cout<<censor("aaaa aaaaa 1234 12345");
    /*cout<<endl;
    cout<<censor("The code is fourty");
    cout<<endl;
    cout<<censor("abcdefghijklmnop");
    */
    return 0;
}
