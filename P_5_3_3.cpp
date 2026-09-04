/*This practical prints a specific type of pattern i.e Bottom left of Uppercase Alphabet.
  Last updated on : 4 September 2026*/
#include<iostream>
using namespace std;
int main()
{
 int i,j,n;

 cout<<"Enter the value for n : ";
    cin>>n;

//This uses multiple loop one inside other//
    for (char i='A';i<='A'+n;i++)
    {
        for(char j='A';j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}
