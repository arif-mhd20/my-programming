#include<iostream>
#include<cmath>

using namespace std;

int quadraticEquation(int a, int b, int c) {
    int numerator=((b*-1) + sqrt(pow(b,2)-4*a*c));
    int denominator=2*a;
	return numerator/denominator;
}

int main(){
cout<<quadraticEquation(2,-7,3);
}
