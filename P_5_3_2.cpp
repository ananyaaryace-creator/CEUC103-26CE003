/*This practical prints a specific type of pattern i.e Bottom left of Lowercase Alphabet.
  Last updated on : 4 September 2026*/
#include<iostream>
using namespace std;
int main()
{
 int i,j,n;

 cout<<"Enter the value for n : ";
    cin>>n;

//This uses multiple loop one inside other//
    for (char i='a';i<='a'+n;i++)
    {
        for(char j='a';j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}
