#include<iostream>
using namespace std;
int main()
{
    int n=5, i;
    int count = 0;
    int a[n];
   int x;
    cout<<"entre values of array";
    cin>>x;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }

    if(a[i]!= x)
    {
        count = 1;
    }
    else{
        count = 0;
    }
    if(count == 0)
    {
        cout<<"yes";
    }
    return 0;
}
