#include <iostream>
#include <string>

using namespace std;

string yeahNope(bool b) {
	return b?"yeah":"nope" ;


}

int main(){
    cout<<yeahNope(true);
}
