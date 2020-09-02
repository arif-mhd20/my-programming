
#include <iostream>
using namespace std;

void increment_all (int* start, int* stop)
{
  int * current = start;
  while (current != stop) {
    *current = (*current)+2;  // increment value pointed
    current=current+2;     // increment pointer
  }
}

void print_all (const int* start, const int* stop)
{
  const int * current = start;
  while (current != stop) {
    cout << *current << '\n';
    ++current;     // increment pointer
  }
}

int main ()
{
  int pntr[] = {40,50,60};
 // cout<<pntr<<endl;
  //cout<<pntr+6<<endl;


  increment_all (pntr,pntr+3);
  print_all (pntr,pntr+3);
  return 0;
}
