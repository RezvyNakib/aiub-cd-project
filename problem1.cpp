#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void problem1()
{
    string s;
    cout<<"Enter input: ";
    cin>>s;
    bool isNumeric=true;
    for(char c : s)
     {
        if(!isdigit(c))
       {
            isNumeric =false;
            break;
        }
    }
    if(isNumeric)
        cout<<"Numeric constant"<<endl;
    else
        cout<< "Not numeric"<<endl;
}
