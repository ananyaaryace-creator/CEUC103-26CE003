#include<iostream>
#include<iomanip>
using namespace std;

    int g = 100;

    //PART A - FUNCTION DESIGN
    void print()
    {
        cout<<"This is function without parameters"<<endl<<endl;
    }
    int add()
    {
        //function without parameters but with return
        int a;
        a=10;
        return a;//returning the value fo a to main
    }
    void stu_name(string name)
    {
        //function with parameter but without return
        cout<<"Student Name : "<<name<<endl<<endl;
    }
    int addTwoNum(int a,int b)
    {
        //function with both paramtere and return
        return a+b;
    }

    //PART B - PARAMETER PASSING
    void modifyByValue(int a)
        {
            a=50;/*value of 'a' changes but value of x remains same as a is just copy of x
                   with different address created bcoz of call by value*/
            cout<<"Value of a is : "<<a;
        }
        void modifyByRef(int &p)
        {
            p=50;//if value of p changes,values of x also changes as both have same address
            cout<<"Value of p is : "<<p;
        }

        //Part C - SCOPE AND VISIBILITY
        void localVariable()
        {
            int q = 10;
            cout<<left<<setw(25)<<"Value of local inside the user defined function is "<<right<<setw(2)<<":"<<q<<endl;
            cout<<left<<setw(25)<<"Value of global inside the function is "<<right<<setw(2)<<":"<<g<<endl;
        }

        //PART D - FUNCTION OVERLOADING
        void studentDetails(string id, string name, string branch, int sem)
        {
            cout<<left<<setw(25)<<"Enrollement number of student  "<<right<<setw(2)<<":"<<id<<endl;
            cout<<left<<setw(25)<<"Name of Student : "<<right<<setw(2)<<":"<<name<<endl;
            cout<<left<<setw(25)<<"Branch"<<right<<setw(2)<<":"<<branch<<endl;
            cout<<left<<setw(25)<<"Semester"<<right<<setw(2)<<":"<<sem<<endl;
        }
        void academicInfo(int total,int per, string grade)
        {
            cout<<left<<setw(25)<<"Total Marks"<<right<<setw(2)<<":"<<total<<endl;
            cout<<left<<setw(25)<<"Percentage"<<right<<setw(2)<<":"<<per<<endl;
            cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<grade<<endl;
        }
        void contactDetails(long long int ph,long long int f_ph,long long int m_ph)
        {
            cout<<left<<setw(25)<<"Student's Phone number"<<right<<setw(2)<<":"<<ph<<endl;
            cout<<left<<setw(25)<<"Father's Phone Number"<<right<<setw(2)<<":"<<f_ph<<endl;
            cout<<left<<setw(25)<<"Mother's Phone Number"<<right<<setw(2)<<":"<<m_ph<<endl;
        }
    int main()
    {
        cout<<"-------------------------------------------"<<endl;
        cout<<"Part A – Function Design "<<endl;
        cout<<"-------------------------------------------"<<endl;

        cout<<"Function without Parameters and without Return Value."<<endl;
        print();
        cout<<"Function without Parameters and with Return Value."<<endl;
        cout<<add()<<endl<<endl;
        cout<<"Function with Parameters and without Return Value."<<endl;
        stu_name("Ananya");//giving input of name
        cout<<"Function with Parameters and with Return Value."<<endl;
        cout<<"add"<<":"<<addTwoNum(5,10);

        cout<<endl;
        cout<<"-------------------------------------------"<<endl;
        cout<<"Part B – Parameter Passing "<<endl;
        cout<<"-------------------------------------------"<<endl;

        int x=10;//original value of x beore calling the function

            modifyByValue(x);
            cout<<"Value of x is :"<<x<<endl;/*value will remain same i.e 10 as the changed value (50) ends after the function
                                                is executed*/

            modifyByRef(x);
            cout<<"Value of x is : "<<x<<endl;//value changes for x//

        cout<<endl;
        cout<<"-------------------------------------------"<<endl;
        cout<<"PART C - SCOPE AND VISIBILITY"<<endl;
        cout<<"-------------------------------------------"<<endl;

        int q=45;

        cout<<left<<setw(25)<<"Value of local outside the user defined function is (before call)"<<right<<setw(2)<<":"<<q<<endl;
        cout<<left<<setw(25)<<"Value of global inside the function is"<<right<<setw(2)<<":"<<g<<endl;

        cout<<endl;
        cout<<"-------------------------------------------"<<endl;
        cout<<"PART D - Function Overloading "<<endl;
        cout<<"-------------------------------------------"<<endl<<endl;

        cout<<endl;
        cout<<"Displaying student details"<<endl;
        studentDetails("26CE003","Ananya","CE",1);

        cout<<endl;
        cout<<"Display Student Details with Academic Information"<<endl;
        studentDetails("26CE003","Ananya","CE",1);
        academicInfo(450,90,"A");

        cout<<endl;
        cout<<"Display Student Details with Academic Information and Contact Details "<<endl;
        studentDetails("26CE003","Ananya","CE",1);
        academicInfo(450,90,"A");
        contactDetails(9601186972,9812086972,9992505300);
    }





