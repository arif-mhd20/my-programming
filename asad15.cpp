#include <iostream>

using namespace std;

int main(){


/*
int val1,val2,val3;

int *mypointer;

mypointer = &val1;

*mypointer=65;

mypointer = &val2;

*mypointer=45;

mypointer = &val3;

*mypointer=55;


cout<<"value 1 is"<<val1<<endl;
cout<<"value 2 is"<<val2<<endl;
cout<<"value 3 is"<<val3<<endl;
*/

    int firstvalue = 5, secondvalue = 15;
    int * p1, * p2;

    p1 = &firstvalue;  // p1 = address of firstvalue
    p2 = &secondvalue; // p2 = address of secondvalue

    cout<<"After assigning addresses, firstvalue is: "<<firstvalue<<" *p1 is "<<*p1<<"  :: second value is "<<secondvalue<<"  *p2 is "<< *p2<<endl;

    *p1 = 10;          // value pointed to by p1 = 10

    cout<<"After assigning 10 to *p1, firstvalue is: "<<firstvalue<<" *p1 is "<<*p1<<"  :: second value is "<<secondvalue<<"  *p2 is "<< *p2<<endl;

    *p2 = *p1;         // value pointed to by p2 = value pointed to by p1

    cout<<"After assigning *p1 to *p2, firstvalue is: "<<firstvalue<<" *p1 is "<<*p1<<"  :: second value is "<<secondvalue<<"  *p2 is "<< *p2<<endl;
    firstvalue = 5;
    secondvalue = 15;
    cout<<"first value is now 5 and second value is now 15"<<endl;

    p1 = p2;           // p1 = p2 (value of pointer is copied)

    cout<<"After assigning p2 to p1, firstvalue is: "<<firstvalue<<" *p1 is "<<*p1<<"  :: second value is "<<secondvalue<<"  *p2 is "<< *p2<<endl;
    *p1 = 20;          // value pointed to by p1 = 20

    cout<<"After assigning 20 to *p1, firstvalue is: "<<firstvalue<<" *p1 is "<<*p1<<"  :: second value is "<<secondvalue<<"  *p2 is "<< *p2<<endl;

    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';



return 0;



}



