#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j;
    char name[20],f_name[10],l_name[10],enr_no[10],branch[5],stu_ref[30];

    cout<<"STUDENT DETAILS"<<endl;
    cout<<"Enrollement Number : ";
    cin.getline(enr_no,10);
    cout<<"Name : ";
     cin.getline(name,20);
    cout<<"Branch : ";
    cin.getline(branch,5);

    cout<<"Student refrence id"<<endl;

    for(i=0;name[i]!='\0';i++)
    {
        stu_ref[i]=name[i];
    }
    stu_ref[i]='-';

    for(j=0;enr_no[j]!='\0';j++,i++)
    {
        stu_ref[i+1]=enr_no[j];
    }
    cout<<stu_ref<<endl;

    for(i=0;name[i]!=' ' && name[i]!='\0';i++)
    {
        f_name[i]=name[i];
    }
    cout<<f_name<<endl;


}
