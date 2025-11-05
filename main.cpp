#include <iostream>
using namespace std;
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
int main()
{
    int choice;
    cout<<"----- Select a Problem -----"<<endl;
    cout<< "1. Numeric Constant or Not"<<endl;
    cout <<"2. Operators or Not" << endl;
    cout<<"3. Comment Line(s) or Not" << endl;
    cout << "4. Identifier or Not" << endl;
    cout << "5. Average of Array" << endl;
    cout<< "6. Minimum and Maximum of Array" << endl;
    cout<< "7. Concatenate First and Last Name" << endl;
    cout<< "--------------------------------------" << endl;
    cout<<"Enter problem number (1-7): ";
    cin>>choice;
    switch (choice) 
    {
        case 1:problem1(); break;
        case 2: problem2(); break;
        case 3:problem3(); break;
        case 4:problem4(); break;
        case 5:problem5();break;
        case 6:problem6();break;
        case 7:problem7(); break;
        default:cout<<"Invalid choice!"<<endl;
    }

    return 0;
}
