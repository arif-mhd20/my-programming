#include<iostream>

using namespace std;

namespace asad{
    int a=56;
    int abs(){
        cout<<"6 pack\n";
    }
}

namespace arif{
    int a=75;
    int abs(){
        cout<<"4 pack\n";
    }

}

int main(){
    int a=10;

    asad::abs();
    arif::abs();

    return 0;
}
