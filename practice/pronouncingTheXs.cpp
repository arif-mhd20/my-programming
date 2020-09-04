#include<iostream>
#include<string>

using namespace std;

std::string xPronounce(std::string sentence) {
	std::string obj="";

	for(int i=0;i<sentence.size();i++){
		if(sentence[i]!='x'){
			obj+=sentence[i];
		}	else {
			if(i==0 || i==sentence.size()-1){
				if(i==0){
					if(sentence[i+1]==' '){
						obj+="ecks";
					}else obj+="cks";
				}else{
					if(sentence[i-1]==' '){
						obj+="ecks";
					}else obj+="cks";
				}
			}else{
				if(sentence[i-1]==' ' && sentence[i+1]==' '){
					obj+="ecks";
				}
				else if(sentence[i-1]==' ' && sentence[i+1]!=' '){
					obj+='z';
				}else{
					obj+="cks";
				}
			}

		}
			//sentence[i]=sentence[i]+"csk";
		}

return obj;
}






int main(){
}
