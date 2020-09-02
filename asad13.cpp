#include<iostream>

using namespace std;

int main(){

char question1[]="whats ur name";

string question2 ="how old ar you";

string question3 ="where do u live ";


string question4="relationship status";


char answer1[100];

string answer2;

string answer3;

string answer4;


cout<<question1<<endl;

cin>>answer1;

cout<<question2<<endl;

cin>>answer2;

cout<<question3<<endl;

cin>>answer3;

cout<<question4<<endl;

cin>>answer4;

cout<<" hello your name is   "<<answer1<<"your age is  "<<answer2<<"   you live in  "<<answer3<<"  and you ar "<<answer4;

return 0;

}
