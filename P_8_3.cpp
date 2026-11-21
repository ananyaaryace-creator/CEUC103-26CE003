#include<iostream>
using namespace std;

    int funCall=0;
    //Part A – Factorial
    int intFact(int n)
    {
        int fac=1,i;
        for(i=2;i<=n;i++)
        {
            funCall++;//for the count of how many times function is called
            fac = fac*i;
        }
        return fac;
    }
    int recFact(int n)
    {
        funCall++;
        if (n==0 || n==1)
        {
            return 1;
        }
        else{
            return n*recFact(n-1);//again calls the function
        }
    }

    //Part B – Fibonacci Series
    int fibInt(int n)
    {
        /*It is the series in which the number n is the sum of numbers (n-1) and (n-2)*/
        int next=1,i,a=0,b=1;
        for(i=0;i<n;i++)
        {
            funCall++;
            cout<<a<<" ";//prints the number in the series everytime the loop repeats
            next=a+b;
            a=b;
            b=next;
        }
    }

    int fibRec(int n)
    {
        funCall++;
        if (n<=1)
        {
            return n;
        }
        else{
            return fibRec(n-1)+fibRec(n-2);//calls the function again until n=0 or 1
        }
    }

    int main()
    {
        int p,q,i;

        cout<<"Part A – Factorial"<<endl<<endl;
        cout<<"Enter number you want factorial of : ";
        cin>>p;
        cout<<"Iterative approach"<<endl;
        funCall=0;
        cout<<intFact(p)<<endl;
        cout<<"Number of Function Calls : "<<funCall<<endl;
        cout<<"Recursive Approach"<<endl;
        funCall=0;
        cout<<recFact(p)<<endl;
        cout<<"Number of Function Calls : "<<funCall<<endl<<endl;

        cout<<"Part B – Fibonacci Series "<<endl;
        cout<<"Enter number you want Fibonacci Series of : ";
        cin>>q;
        cout<<endl;
        cout<<"Iterative approach"<<endl;
        funCall=0;
        fibInt(q);
        cout<<endl;
        cout<<"Number of Function Calls : "<<funCall<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Recursive Approach"<<endl;
        funCall=0;
        for(i=0;i<q;i++)
        {
        cout<<fibRec(i)<<" ";
        }
        cout<<endl;
        cout<<"Number of Function Calls : "<<funCall<<endl;


        /*Program readability: Say which version is easier to follow and why.
                               For example: the iterative version uses a simple loop you can trace line by line,
                               while the recursive version is shorter and matches the mathematical definition
                               but takes more effort to trace.




    }
