#include <iostream>
using namespace std;
void problem6()
 {
    int arr[]={25,10,35,40,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0],max=arr[0];
    for(int i=1;i<n;i++)
     {
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<"Minimum: "<<min<<endl;
    cout<<"Maximum: "<<max<<endl;
}
