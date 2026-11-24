#include<iostream>
using namespace std;

    struct stuDetails//Dynamically allocate memory to store student records
    {
        string id;
        string name;
        string branch;
        int sem;
        float per;
        string grade;
    };

    //Develop user-defined functions that receive the address of the student data collection.
    void address(stuDetails *s,int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"Address : "<<(s+i)<<endl;
            cout<<(s+i)->id<<" ";//-> means for the variable inside the struct(s) we used, as s is a ptr we use it or we can write (*s).per
            cout<<(s+i)->name<<" ";
            cout<<(s+i)->branch<<" ";
            cout<<(s+i)->sem<<" ";
            cout<<(s+i)->per<<" ";
            cout<<(s+i)->grade<<" "<<endl;
            cout<<"-------------------------------"<<endl<<endl;
        }
    }

    void avgPer(stuDetails *s,int n)//assigning a new ptr s to attain the values inside the struct
    {
        if(n==0)
        {
            return;
        }
        float sum=0;
        for(int i=0;i<n;i++)
        {
            sum += (s+i)->per;/*this points to the variable per inside the struct, and everytime the loop runs its points the the next element*/
        }
        cout<<"Class Average Percentage : "<< (sum/n)<<endl;
    }

    void highPer(stuDetails *s,int n)
    {
       if(n==0)
       {
           return;//we cant write return 0 as it is a void func
       }
       float high=s->per;

       for(int i=1;i<n;i++)
       {
           if((s+i)->per > high)
           {
               high = (s+i)->per;
           }
       }
       cout<<"Highest Percentage : "<<high<<endl;
    }

    void lowPer(stuDetails *s,int n)
    {
       if(n==0)
       {
           return;
       }
       float low=s->per;

       for(int i=1;i<n;i++)
       {
           if((s+i)->per < low)
           {
               low = (s+i)->per;
           }
       }
       cout<<"Lowest Percentage : "<<low<<endl;
    }

        int main()
        {
            //Dynamic Memory Allocation
            int n;
            cout<<"Enter the number of students you want to enter : ";
            cin>>n;
            cin.ignore();
            cout<<"Dynamic memory allocated successfully"<<endl<<endl;

            cout<<"------------------------------------------"<<endl<<endl;

            stuDetails *student = new stuDetails[n];//creating a new ptr student of dataype struct which will point to the arr of struct"s first element

            cout<<"Enter Student details"<<endl<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<"Student"<<i+1<<endl;

                cout<<"Enrollement Number : ";
                getline(cin,student[i].id);

                cout<<"Student Name : ";
                getline(cin,student[i].name);

                cout<<"Branch : ";
                getline(cin,student[i].branch);

                cout<<"Semester : ";
                cin>>student[i].sem;

                cout<<"Percentage : ";
                cin>>student[i].per;
                cin.ignore();

                cout<<"Grade : ";
                getline(cin,student[i].grade);

                cout<<endl<<"-----------------------------------"<<endl<<endl;
            }

            cout<<"Part B -  Offset-based Memory Access"<<endl<<endl;

            cout<<"Address arithmetic (offset-based traversal) "<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<"Address : "<<&student[i]<<endl;
                cout<<student[i].id<<" ";//at i=0; it is the first element of the arr
                cout<<student[i].name<<" ";
                cout<<student[i].branch<<" ";
                cout<<student[i].sem<<" ";
                cout<<student[i].per<<" ";
                cout<<student[i].grade<<" "<<endl;
                cout<<"-------------------------------"<<endl;
            }
            cout<<endl;

            cout<<"Part C – Address-based Function Access"<<endl<<endl;
            cout<<"-----------------------------------------"<<endl<<endl;
            address(student,n);

            cout<<"Academic Summary"<<endl;
            avgPer(student,n);
            highPer(student,n);
            lowPer(student,n);
            cout<<endl<<"---------------------------------"<<endl<<endl;

            cout<<"Part D – Dynamic Memory Deallocation"<<endl;
            delete[] student;
            student =  nullptr;

            if(student==nullptr)
            {
                cout<<"Dynamic Memory Released Successfully"<<endl<<"Address Variable Reset Successfully"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Program executed Successfully";
            }
        }
