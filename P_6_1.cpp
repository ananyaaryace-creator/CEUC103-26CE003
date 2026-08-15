#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i;

    cout<<"****************************************\n";
    cout<<"SPORTS EVENT SCORE ANALYSIS\n";
    cout<<"****************************************\n";

    cout<<left<<setw(28)<<"Enter number of participants"<<right<<setw(2)<<":";
    cin>>n;

    string part_ID[n],part_Name[n];
    float part_score[n];

    for(i=0;i<n;i++)
    {
        cout<<left<<setw(25)<<"Enter Participant Id"<<right<<setw(2)<<":";
        cin>>part_ID[i];
        cout<<left<<setw(25)<<"Enter Participant Name"<<right<<setw(2)<<":";
        cin>>part_Name[i];
        cout<<left<<setw(25)<<"Enter Participant Score"<<right<<setw(2)<<":";
        cin>>part_score[i];
        cout<<endl;
    }

    float total_score=0,avg_score=0,lowest_score=part_score[0],highest_score=part_score[0];

    cout<<"--------------------------------------------------\n";
    cout<<"Participant Performance\n";
    cout<<"--------------------------------------------------\n";

    cout<<left<<setw(5)<<"ID";
    cout<<left<<setw(20)<<"Name";
    cout<<left<<setw(30)<<"Score"<<"\n";
    cout<<"--------------------------------------------------\n";

    for(i=0;i<n;i++)
    {
        cout<<left<<setw(5)<<part_ID[i]<<left<<setw(20)<<part_Name[i]<<left<<setw(30)<<part_score[i]<<endl;
        total_score= (total_score + part_score[i]);

        if(part_score[i]>highest_score)
        {
            highest_score = part_score[i];
        }
        if(part_score[i]<lowest_score)
        {
            lowest_score = part_score[i];
        }
    }
    cout<<"--------------------------------------------------\n";

    avg_score = (total_score/n);

    cout<<left<<setw(15)<<"Total Score"<<right<<setw(2)<<":"<<total_score<<endl;
    cout<<left<<setw(15)<<"Average Score"<<right<<setw(2)<<":"<<avg_score<<endl;
    cout<<left<<setw(15)<<"Highest Score"<<right<<setw(2)<<":"<<highest_score<<endl;
    cout<<left<<setw(15)<<"Lowest Score"<<right<<setw(2)<<":"<<lowest_score<<endl;

    cout<<"--------------------------------------------------\n";
}
