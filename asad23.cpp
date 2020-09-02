#include<iostream>
#include<string>

using namespace std;

int main(){
    string basicUnit="-", fin="";
    for(int i=1; i<=5; i++) {
            fin+=basicUnit;
            cout<<fin<<endl;
    }

    cout<<fin<<endl;
    return 0;
}
