#include<iostream>
using namespace std;

    //Part A – Recursive Traversal
    int display(int n)
    {
        if(n==1)
        {
            return 1;
        }
            return n;//If n!=1 then it will directly return n
    }

    int revNo(int n,int rev_n=0)
    {
        if(n==0)
        {
            return rev_n;
        }
        return revNo(n/10,rev_n*10 + n%10);
    }

    int sumDigits(int n,int rev_sum=0)
    {
        if(n==0)
        {
            return rev_sum;
        }
        return sumDigits(n/10,rev_sum + n%10);
    }

    void binary(int n)
    {
        if (n==0)
        {
            return;
        }
        binary(n/2);
        cout<<n%2;
    }

    int main()
    {
        int n,i,N;

        cout<<"Part A – Recursive Traversal "<<endl;
        //Display numbers from 1 to N using recursion.

        N: cout<<"Enter the value of n : ";
        cin>>n;
        if(n<1)
        {
            goto N;//defensive coding
        }

        for(i=1;i<=n;i++)
        {
            cout<<display(i)<<" ";
        }
        cout<<endl;

        //Display numbers from N to 1 using recursion.
        for(i=0;i<n;i++)
        {
            cout<<display(n-i)<<" ";//changing the argument
        }
        cout<<endl<<endl;

        cout<<"Part B – Recursive Number Processing"<<endl;
        int a,rev_a;
        cout<<"Enter the number you want to reverse : ";
        cin>>a;

        //Reverse the entered number using recursion.
        cout<<"The reversed number is : "<<revNo(a)<<endl;;

        //Calculate the sum of digits of the entered number using recursion.
        cout<<"Sum of the entered digits : "<<sumDigits(a)<<endl<<endl;

        cout<<"Part C – Recursive Number Conversion"<<endl;

        int p;

        cout<<"Enter a decimal number : ";
        cin>>p;

        cout<<"Binary Representation : ";

        if(p==0)
        {
            cout<<0;
        }
        else
        {
            binary(p);
        }

        return 0;
    }
