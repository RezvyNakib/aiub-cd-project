#include <iostream>
#include <string>
using namespace std;
void problem3()
 {
    string s;
    cout<<"Enter a line: ";
    getline(cin>>ws,s);
   if(s.rfind("//",0)==0)
        cout<<"Single line comment"<<endl;
    else if(s.rfind("/*",0)==0 && s.find("*/")!=string::npos)
        cout <<"Multiple line comment"<<endl;
    else
        cout<<"Not a comment"<<endl;
}
