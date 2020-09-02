#include<iostream>
using namespace std;


    struct item{

    int k_weight;
    int i_number;
    int itemList;

    } ;
 int knapSackFun(struct item itemList[] ,int k_weight ,  int i_number){
     int benefit,weight;

    int b[k_weight+1][i_number+1];

    int ben,wet;


    for(int w=0;w<=k_weight;w++)
        b[w][0]=0;



    for(int i=0;i<=i_number;i++)
        b[0][i]=0;

    for(int itm=1;itm<=i_number;itm++){
        ben=itemList[itm].benefit;
        wet=itemList[itm].weight;

        for(int w=1;w<=k_weight;w++){
            if(wet<=w)
                if((ben+b[w-wet][item-1])>b[w][item-1])

                b[w][item]=(ben + b[w-wet][item-1]);

            else
                b[w][item]=b[w][itm-1];
            else
                b[w][itm]=b[w][itm-1];
        }
    }
 }
 int main(){

int itno ,kWeight,maxBenefit;

cout<<"how may item to be inputed;"<<endl;

cin>>itno;


struct item I[itno+1];
for(int i=1;i<=itno;i++){

I[i].number=i;

cout<<"weight of item number "<<i<<endl;

cin>>I[i].weight;

cout<<"benefit of item number"<<i<<endl;

cin>>I[i].benefit;

}

cout<<"knapsack size";



cin>>kWeight;


maxBenefit=knapsack(I,kWeight,itno);

cout<<"max benefit wil be "<<maxBenefit;
return 0;
}


