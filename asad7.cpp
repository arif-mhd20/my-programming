#include<iostream>
using namespace std;

int main(){
    int person[10]={0}, biggest=INT_MIN,lowest=INT_MAX;

     cout<<"enter the number of penccake ate"<<endl;
    for(int i=0; i<10; i++){

        cin>>person[i];
    }

     for(int i=0; i<10; i++){

        if(person[i]>biggest)
            biggest=person[i];
     }
     cout<<"so the person ate the most pencake is"<<endl<<biggest;


     for(int i=0;i<10;i++){

            if(person[i]<lowest)
                lowest=person[i];


     }
     cout<<"so the person ate the least pencake is"<<endl<<lowest;


return 0;



}
