#include<iostream>

using namespace std;

int main(){
    int arrsize=10,pancakeArray[arrsize];
    int personArray[arrsize];

    /*
    cout<<"Person Array Values"<<endl;
    for(int i=arrsize;i>0;i--)cout<<personArray[i]<<" ";
    cout<<endl;
    */

    cout<<"enter pancake eaten by 10 differnt person\n";

    ///Take pancakes input
    for(int i=0;i<arrsize;i++){
        cin>>pancakeArray[i];
        personArray[i]=i+1;
    }


    //cout<<" person ate the most number of pencake";

    ///Sort the pancakes and persons
    for(int i=arrsize;i>0;i--){
        for(int j=1;j<i;j++){

            if(pancakeArray[j-1]<pancakeArray[j]){
                int temp;

                temp=pancakeArray[j];
                pancakeArray[j]=pancakeArray[j-1];
                pancakeArray[j-1]=temp;

                ///Sort persons together with pancakes
                temp=personArray[j];
                personArray[j]=personArray[j-1];
                personArray[j-1]=temp;

            }
        }
    }



/*
        cout<<endl;

        cout<<endl<<"most number of pencake is"<<pancakeArray[0];


        cout<<endl<<"person ate the most no of pencake is"<<endl<<"person"<<personArray[0]<<endl;
        */
///Output the person array
for(int  i=0;i<arrsize;i++){
        cout<<"Person "<<personArray[i]<<": ate " <<pancakeArray[i]<<" pancakes"<<endl;

   }

    return 0;


}
