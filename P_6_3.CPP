#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number of students you want to register : ";
    cin>>n;

    string enr_no[100],name[100],grade[100];
    float percentage[100];

    cout<<"Student Details"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the Enrollement Number of student: ";
        cin>>enr_no[i];
        cout<<"Enter the Name of student: ";
        cin>>name[i];
        cout<<"Enter percentage obtained by student: ";
        cin>>percentage[i];
        cout<<"Enter grade of student: ";
        cin>>grade[i];
    }
    cout<<"------------------------------------------------------"<<endl;

    cout<<"Current Student Records"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<left<<setw(8)<<enr_no[i]<<left<<setw(20)<<name[i]<<left<<setw(25)<<percentage[i]<<left<<setw(30)<<grade[i]<<endl;
    }
    cout<<"------------------------------------------------------"<<endl;

    //Insert a new student record at a specified position.
    int pos;
    cout<<"Enter the position you want to insert data :";
    cin>>pos;
    pos--;

    if(pos<0||pos>n||n>=100)
    {
        cout<<"Invalid Input";
    }
    else
        {
            for(i=n;i>pos;i--)
            {
                enr_no[i]=enr_no[i-1];
                name[i]=name[i-1];
                percentage[i]=percentage[i-1];
                grade[i]=grade[i-1];
            }
            cout<<"Enter the Enrollement Number : ";
            cin>>enr_no[pos];
            cout<<"Enter the Name of Student : ";
            cin>>name[pos];
            cout<<"Enter Percentage of student :";
            cin>>percentage[pos];
            cout<<"Enter the grade of student :";
            cin>>grade[pos];
            n++;
        }

    //Display the updated student records after every operation.
    cout<<"Current Student Records"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<left<<setw(8)<<enr_no[i]<<left<<setw(20)<<name[i]<<left<<setw(25)<<percentage[i]<<left<<setw(30)<<grade[i]<<endl;
    }

    //Update the percentage and grade of an existing student using the Enrollment Number.
    string update;

    cout<<"Enter the student enrollement id you want to update :";
    cin>>update;

    for(i=0;i<n;i++)
    {
        if(enr_no[i]=update)
        {
            cout<<"Enter the new Percentage :";
            cin>>percentage[i];
            cout<<"Enter the new Grade :";
            cin>>grade[i];
        }
        else
        {
            cout<<"Student not found";
        }
    }

    //Delete a student record from a specified position by shifting the remaining records.
    cout<<"Enter the position you want to delete record at :";
    cin>>pos;
    pos--;

    if(pos<0||pos>=n)
    {
        cout<<"Invalid Input";
    }
    else
    {
        for(i=pos;i<n-1;i++)
        {
            enr_no[i]=enr_no[i+1];
            name[i]=name[i+1];
            percentage[i]=percentage[i-+1];
            grade[i]=grade[i+1];
        }
        n++;
    }
    cout<<"Current Student Records"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<left<<setw(8)<<enr_no[i]<<left<<setw(20)<<name[i]<<left<<setw(25)<<percentage[i]<<left<<setw(30)<<grade[i]<<endl;
    }

}
