#include<iostream>
using namespace std;

    void memroy()
    {
        //Declare local variables inside a user-defined function.
        //Local Variables
        int a=10;
        float b=15.7;
        //Dynamically Allocated Variables
        int *p = new int(45);
        float *q = new float(34.8);

        //displaying the value and memory address
        cout<<"-----Local Variables-----"<<endl;
        cout<<"a : Value "<<a<<" "<<"Address : "<<&a<<endl;
        cout<<"b : Value "<<b<<" "<<"Address : "<<&b<<endl;

        cout<<"-----Dynamically Allocated Variables---"<<endl;
        cout<<"*p : Value "<<*p<<" "<<"Address : "<<p<<endl;
        cout<<"*q : Value "<<*q<<" "<<"Address : "<<q<<endl;

        // Identification summary
        cout << "-----Identification-----" << endl;
        cout << "Stack memory : a, b, and the pointers p, q" << endl;
        cout << "Heap memory  : the values *p, *q created using new" << endl;
        cout << endl;

        delete p;
        delete q;
        p = nullptr;
        q = nullptr;
    }

    void mulLevelPtr()
    {
        int x=10;
        int *p1=&x,**p2=&p1,***p3=&p2;

        cout<<"Value stored"<<endl;
        cout<<"x Value : "<<x<<endl;
        cout<<"p1 Value : "<<p1<<endl;
        cout<<"p2 Value : "<<p2<<endl;
        cout<<"p3 Value : "<<p3<<endl<<endl;

        cout<<"Address Stored at each level"<<endl;
        cout<<"Address of x  : "<<&x<<endl;
        cout<<"Address of p1 : "<<&p1<<endl;
        cout<<"Address of p2 : "<<&p2<<endl;
        cout<<"Address of p3 : "<<&p3<<endl<<endl;

        cout<<"-----Final Accessed Value-----"<<endl;
        cout << "Using *p1   : " << *p1 << endl;
        cout << "Using **p2  : " << **p2 << endl;
        cout << "Using ***p3 : " << ***p3 << endl;
        cout << endl;
    }

    int main()
    {
        cout<<"Part A – Stack and Heap Memory"<<endl<<endl;
        memroy();
        cout<<"--------------------------------------"<<endl<<endl;

        cout<<"Part B – Multi-level Referencing "<<endl<<endl;
        mulLevelPtr();
        cout<<"--------------------------------------"<<endl<<endl;

        //Memory Safety
        cout<<"Part C - Memory Safety"<<endl<<endl;
        cout<<"-----------------------------------------"<<endl<<endl;

        //1. Null Reference
        cout<<"1. Null Reference"<<endl;
        int *nullPtr = nullptr;
        cout<<"Address stored : "<<nullPtr<<endl;
        if(nullPtr == nullptr)
        {
            cout<<"Status : UNSAFE - Pointer is null, cannot be dereferenced"<<endl;
        }
        else
        {
            cout<<"Status : SAFE - Value = "<<*nullPtr<<endl;
        }
        cout<<"-------------------------------"<<endl<<endl;

        //2. Invalid Reference (after releasing dynamic memory)
        cout<<"2. Invalid Reference"<<endl;
        int *heapPtr = new int(100);
        cout<<"Before delete : Address = "<<heapPtr<<" , Value = "<<*heapPtr<<endl;
        cout<<"Status : SAFE - Memory is allocated"<<endl;

        delete heapPtr;

        cout<<"After delete  : Address = "<<heapPtr<<endl;
        cout<<"Status : UNSAFE - Dangling pointer, memory is already released"<<endl;

        heapPtr = nullptr;

        cout<<"After reset   : Address = "<<heapPtr<<endl;
        cout<<"Status : SAFE - Pointer reset to nullptr (still cannot be dereferenced)"<<endl;
        cout<<"-------------------------------"<<endl<<endl;

        //3. Uninitialized Address Variable (observation only)
        cout<<"3. Uninitialized Address Variable"<<endl;
        int *wildPtr;
        cout<<"Address stored : "<<wildPtr<<endl;
        cout<<"Status : UNSAFE - Pointer is not initialized, points to unknown location"<<endl;
        cout<<"-------------------------------"<<endl<<endl;

        //Safe reference for comparison
        cout<<"Safe Reference"<<endl;
        int value = 25;
        int *safePtr = &value;
        if(safePtr != nullptr)
        {
            cout<<"Address stored : "<<safePtr<<endl;
            cout<<"Value : "<<*safePtr<<endl;
            cout<<"Status : SAFE - Pointer points to valid memory"<<endl;
        }
        cout<<"-------------------------------"<<endl<<endl;

        return 0;
    }
