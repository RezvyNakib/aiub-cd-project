#include <iostream>
#include <string>
using namespace std;
void problem2() 
{
    string s;
    cout<<"Enter an expression: ";
    cin>>s;
    bool found=false;
for (char c : s) 
{
        if(c=='+'||c=='-'|| c=='*'||c =='/'|| c =='%'||c =='=')
       {
            cout<<"operator: "<<c<<endl;
            found=true;
        }
    }

    if(!found)
        cout<<"No arithmetic operator found"<< endl;
}
