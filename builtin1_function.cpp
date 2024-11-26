#include<iostream>
using namespace std;
#include <string.h>
int main()
{
    char name[20],surname[20];
    cout << "enter ur name\n";
    cin>>name;

    cout << "enter ur surname\n";
    cin>>surname;
    cout<<"\n";
    cout<<strlen(name)<<"\t";
    cout<<"\nuppercase="<<strupr(name)<<"\n";
    cout<<"\nlowercase="<<strlwr(surname)<<"\n";
    cout<<strcat(name,surname)<<"\n";
    cout<<"\nname=" <<name<<"\n";
    cout<<"\nsurname="<<surname<<"\n";
    cout<<strcpy(name,surname)<<"\n";
    cout<<"\n name=" <<name<<"\n";
    cout<<"\n surname="<<surname<<"\n";

}