#include<iostream>
using namespace std;
int main()
{
 int i,j,n;

 cout<<"Enter the value for n : ";
    cin>>n;

    for (char i='a';i<='a'+n;i++)
    {
        for(char j='a';j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}
