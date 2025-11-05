#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void problem4()
 {
    string s;
    cout<<"Enter input: ";
    cin>>s;
   if(isalpha(s[0]) || s[0] =='_')
    {
        bool valid=true;
        for(int i=1;i<s.size();i++) 
        {
            if(!isalnum(s[i]) && s[i]!='_')
             {
              valid=false;
                break;
            }
        }
        if(valid)
            cout<<"Valid Identifier"<<endl;
        else
            cout<<"Invalid Identifier"<<endl;
    } 
    else
     {
        cout<<"Invalid Identifier" <<endl;
    }
}
