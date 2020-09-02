
#include<iostream>

using namespace std;

int main(){
    int Arow=3,Acoloum=3,Brow=3,Bcoloum=3;

    int A[Arow][Acoloum]={{4,-4,0},{-2,-3,-1},{2,1,3}};
    int B[Brow][Bcoloum]={{4,5,6},{0,7,-4},{2,-3,8}};
    int C[Acoloum][Brow]={{0,0,0},{0,0,0},{0,0,0}};

    if(Acoloum!=Brow){
        cout<<"incompatible dimensions";
    }else{
        for(int i=0;i<Arow;i++){
            for(int j=0;j<Bcoloum;j++){
                    for(int k=0;k<Acoloum;k++){
                        C[i][j]+=A[i][k]*B[k][j];

                    }

            }
        }

        for(int i=0;i<Acoloum;i++){
            for(int j=0;j<Brow;j++){
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}
