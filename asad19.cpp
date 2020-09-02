/*#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
  string title;
  int year;
} mine, yours;

void printmovie (movies_t movie){

cout << movie.title;
  cout << " (" << movie.year << ")\n";}

int main ()
{
  string mystr;

  mine.title = "2001 A Space Odyssey";
  mine.year = 1968;

  cout << "Enter title: ";
  getline (cin,yours.title);
  cout << "Enter year: ";
  cin>>yours.year;
  //getline (cin,yours.year);


  cout << "My favorite movie is:\n ";
  printmovie (mine);
  cout << "And yours is:\n ";
  printmovie (yours);
  return 0;
}*/


#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
  string title;
  int year;
} films [10];

void printmovie (movies_t movie);

int main ()
{
  string mystr;
  int n;
  movies_t *myPtr=films;


  for (n=0; n<5; n++)
  {
    cout << "Enter title: ";
    getline (cin,myPtr->title);
    cout << "Enter year: ";
    getline (cin,mystr);
    stringstream(mystr) >> myPtr->year;
    myPtr++;
  }

  myPtr=films;
  cout << "\nYou have entered these movies:\n";
  for (n=0; n<5; n++){
    printmovie(myPtr);
    myPtr++;
  }
  return 0;
}

void printmovie (movies_t *movie)
{
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}

