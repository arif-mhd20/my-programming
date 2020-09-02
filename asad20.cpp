
#include<iostream>
using namespace std;



/*
struct book1_t {
  char title;
  char author;
  union {
    float dollars;
    int yen;
  } price;
} ;
*/

struct book1_t {
  char title;
  char author;
  union {
    float dollars;
    int yen;
  };
} ;
int main(){

/*
char c;
c='t';
cout<<c;
*/
  book1_t p;

  p.title='t';

  p.dollars = 23;
  p.yen =60;


  cout<<"p.title: "<<p.title<<endl;

  cout<<"p.dollars: "<<p.dollars<<endl;
  cout<<"p.yen: "<<p.yen<<endl;

return 0;

}
