#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string operators ="+-*/%=";
    string input;
    // cout<<"Enter the expression: ";
    getline(cin,input);
    int count=1;
    for (char ch : input) 
    {
        if (operators.find(ch) !=string::npos) {
            cout <<"operator"<<count <<":  "<< ch << endl;
            count++;
        }
    }

    return 0;
}

