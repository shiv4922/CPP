#include<iostream.h>
using namspace std;

int main()
{
    int n,r,s=0,k=0;
    cin>>n;
    while(n)
    {
        r=n%10;
        s=(s*10)+r;
        k=k+r;
        n=n/10;
    }
    cout<<"Reverse no is"<<s<<endl;
    cout<<"Sum of digit"<<k;
}