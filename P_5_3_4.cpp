/*This practical prints a specific type of pattern i.e Bottom Right of numericals.
  Last updated on : 4 September 2026*/
#include<iostream>
using namespace std;
int main()
{
 int i,j,n;

 cout<<"Enter the value for n : ";
    cin>>n;

//This uses multiple loop one inside other//
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(j=(1);j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }

}
