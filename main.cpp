#include <iostream>
#include<string>
using namespace std;

void printDitle(string fname, string lname, int age);

int main(){

    string FirstName;
    string LastName;
    int age;

    cout<<"Pleas enter your First name:";
    cin>> FirstName;
    cout<<"Pleas enter your last name:";
    cin>> LastName;
    cout<<"Pleas enter your age:";
    cin>> age;

    printDitle(FirstName, LastName, age);


    return 0;
}

void printDitle(string fname, string lname, int age) {
    cout<<"Hello "<< fname<<" \""<<lname<<"\""<<endl;
    cout<<"Your Age is "<< age<<endl;

}





