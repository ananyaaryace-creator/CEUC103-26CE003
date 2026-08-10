#include<iostream>
using namespace std;
int main()
{
 int i,j,n;

 cout<<"Enter the value for n : ";
    cin>>n;

    for (char i='A';i<='A'+n;i++)
    {
        for(char j='A';j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}
