#include<iostream>
using namespace std;
#include <string.h>
int main()
{
    char pwd[20];
    char repwd[20];
    cout<<"enter ur pwd\n";
    cin>>pwd;
    cout<<"re-enter ur pwd\n";
    cin>>repwd;
    if(stricmp(pwd,repwd)==0)
    {
        cout<<"password match\n";
    }
    else
    {
        cout<<"password does not match\n";
    }
}