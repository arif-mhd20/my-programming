#include<iostream>
#include<string>

using namespace std;


struct matrix{
int no;
int row;
int coloum;

matrix(int i, int j, int k){
    no=i;
    row=j;
    coloum=k;
}

};

const int inputs=4;
int m[inputs][inputs];

int minVal(matrix a,matrix b){
    if((b.no-a.no)>1){

        int val1,val2;
        val1=m[a.no-1][b.no-2]+ (b.row*b.coloum*a.row);
        val2=m[a.no][b.no-1]+ (a.row*a.coloum*b.coloum);
        if(val1<val2){
            return val1;
        }else
        return val2;
    }else{
        return a.row*a.coloum*b.coloum;
    }
}



int main(){

    /*
    matrix one;
    one.row=3;
    one.coloum=2;
    */


 matrix arr[inputs] ={
     matrix(1,3,2),
     matrix(2,2,4),
     matrix(3,4,2),
     matrix(4,2,5),
 };

 int increment=1;


     for(int i=0;i<inputs;i++){
        m[i][i]=0;
     }

     for(int j=inputs-1;j>=1; j--){
        for(int i=0;i<j;i++){
            m[i][i+increment]=minVal(arr[i],arr[i+increment]);
         }
         increment++;
     }
     /*
     for(int i=0;i<inputs-1;i++){
        m[i][i+1]=minVal(arr[i],arr[i+1]);
     }

      for(int i=0;i<inputs-2;i++){
        m[i][i+2]=minVal(arr[i],arr[i+2]);
      }

      for(int i=0;i<inputs-3;i++){
         m[i][i+3]=minVal(arr[i],arr[i+3]);
      }
      */

      for(int i=0; i<inputs; i++){
        for(int j=0;j<inputs;j++){
            if(m[i][j]==0){
                cout<<"   ";
            }else{
                cout<<m[i][j]<<" ";
            }
        }
        cout<<endl;
      }


}
