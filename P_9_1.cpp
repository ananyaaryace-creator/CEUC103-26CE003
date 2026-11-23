#include<iostream>
using namespace std;

int main()
{
    cout<<"**************************************"<<endl;
    cout<<"Memory Address Explorer"<<endl;
    cout<<"**************************************"<<endl;

    cout<<"---------Part A - Address And Value---------"<<endl;
    int age = 17;//declaring variables of different datatypes
    float height = 1.56;
    string unit = "m";

    cout<<"Age : "<<age<<endl<<"Memory Address : "<<&age<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Height : "<<height<<endl<<"Memory Address : "<<&height<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Unit : "<<unit<<endl<<"Memory Address : "<<&unit<<endl;
    cout<<"--------------------------------------"<<endl<<endl;

    cout<<"---------Part B - Indirect Referencing---------"<<endl;
    int *p=&age; //or we can write it is int *p and p=&age
    cout<<"Stored Value : "<<*p<<endl;
    *p = 20;/*if we change value of *p, the value of age changes itself as the pointer is pointing towards the age
                and contains the address of age.*/
    cout<<"Modified Value : "<<*p<<endl<<endl;

    cout<<"---------Part C - Sequential Data Collections---------"<<endl;
    int arr[5] = {2,4,6,8,10};

    cout<<"Array indexing"<<endl;
    for(int i=0;i<5;i++)
    {
       cout<<arr[i]<<" ";//priting direclty by using loops and index
    }
    cout<<endl;

    cout<<"--------------------------------------"<<endl;

    cout<<"Address-based access"<<endl;
    int *a= arr;

    for(int i=0;i<5;i++)
    {
        cout<<*(a+i)<<" ";//printing by pointing towards the next element everytime the loop runs
    }
    cout<<endl<<endl;

    cout<<"COMPARISON"<<endl;
    cout<<"In array indexing, the array elements are printed directly by using loop."<<endl;
    cout<<"In address based access a pointer a is declared which in pointing to the first element of the array.";
    cout<<"Inside the loop *(a+i) means that if i=1, now 'a' should point towards the next element(+1), +i means the element not the bytes.";
}

