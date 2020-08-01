//Author : Kishore

#include <iostream>

using namespace std;

//using class
class marks
    {
    private://private 
            int roll;
            string name;

            int math_mark;
            int chem_mark;
            int phy_mark;
    public://using constructor and this pointer
        marks(int r ,string s, int m, int p,int c)
        {
            this->roll=r;
             this->name=s;
            this->math_mark=m;
            this->phy_mark=p;
            this->chem_mark=c;
           
        }
        int total()//Function to retutn total
        {
            return math_mark+chem_mark+phy_mark;
        }
        
        char grade()//Funtion to return grade
        {
            float avg=total()/3;
            if(avg>=60 && avg<=70)
            {
                return 'C';
            }
            else if(avg>=71 && avg<=80)
            {
                return 'B';
            }
            
            else if(avg>=81 && avg<=90)
            {
                return 'A';
            }
            
            else if(avg>=91 && avg<=100)
            {
                return 'O';
            }
            
            else{
                return 'F';
            }
        }
        
        
    };

int main()
{
    
    int roll;// initializing 
    string name;
    int mat,p,c;
    cout<<"WELCOME TO STUDENT MARK GRADING SYSTEM"<<endl;
        cout<<"-----------------------------------------------"<<"\n";

     cout<<"Please Enter Student Roll Number "<<endl;
    cin>>roll;
    cout<<"Please Enter Student name"<<endl;
    cin>>name;
    cout<<"Please Enter Maths mark"<<endl;
    cin>>mat;
    cout<<"Please Enter Physics mark"<<endl;
    cin>>p;
    cout<<"Please Enter Chemistry mark"<<endl;
    cin>>c;
    marks m(roll,name,mat,p,c);
    cout<<"-----------------------------------------------"<<"\n";
    cout<<"STUDENT REPORT CARD "<<"\n";
    cout<<"-----------------------------------------------"<<"\n";
    cout<<"\n";
    cout<<"ROLL NUMBER "<<roll<<"\n";
    cout<<"\n";
     cout<<"NAME "<<name<<"\n";
     cout<<"\n";
    cout<<"MATHS MARK "<<mat<<"\n";
cout<<"\n";
cout<<"PHYSICS MARK "<<p<<"\n";
cout<<"\n";
    cout<<"CHEMISTRY MARK "<<c<<"\n";
    cout<<"\n";
        cout<<"-----------------------------------------------"<<"\n";

    cout<<"Totals Marks Obtained is "<<m.total()<<endl;
    cout<<"\n";
        cout<<"-----------------------------------------------"<<"\n";

    cout<<"Grades Obtained is "<<m.grade()<<endl;
    cout<<"\n";
    cout<<"-----------------------------------------------"<<"\n";


    
    
    
    

    return 0;
}
