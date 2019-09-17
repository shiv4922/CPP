#include<iostream.h>
using namespace std;

int main()
{
    int n,i=2;
    cout<<"enter no";
    cin>>n;
    
    while(i<n)
 {       
        if(n%i==0)
    { break; }
        
        i++;
}
   if(n==i)
   {
       cout<<"prime";
   }
    else{cout<<"NOT prime";}
    }
   
