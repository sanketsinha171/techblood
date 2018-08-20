#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;
int m=0,m2=0,m3=0;
class Doner
{
private:
    string name,email,blood,sex;
    int age;
    char mob[10],add[1000];
public:
    void getdata()
    {
       cout<<"Enter Name: ";
       cin>>this->name;
       cout<<"Enter Age: ";
       cin>>this->age;
       cout<<"Enter Address: ";
       //scanf("%[^\n]s",this->add);
       //cin.getline(this->add,1000);
       cin>>this->add;
       cout<<"Enter Email: ";
       cin>>this->email;
       cout<<"Enter Mobile Number: ";
       cin>>this->mob;
       cout<<"Enter Blood Group: ";
       cin>>this->blood;
       cout<<"Enter Sex: ";
       cin>>this->sex;
       cout<<"\t \t \t \t Data Entered Successfully!!"<<endl;
    }
    void putdata()
    {
        cout<<"Name: "<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
        cout<<"Address: "<<this->add<<endl;
        cout<<"Email: "<<this->email<<endl;
        cout<<"Mobile: "<<this->mob<<endl;
        cout<<"Blood Group: "<<this->blood<<endl;
        cout<<"Sex: "<<this->sex<<endl;
    }
    void fil1(string s)
    {

        if(this->blood==s)
        {
        m=1;
        cout<<endl<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
        cout<<"Address: "<<this->add<<endl;
        cout<<"Email: "<<this->email<<endl;
        cout<<"Mobile: "<<this->mob<<endl;
        cout<<"Blood Group: "<<this->blood<<endl;
        cout<<"Sex: "<<this->sex<<endl;
        }
    }
    void fil2(string s)
    {

        if(this->mob==s)
        {
        m2=1;
        cout<<endl<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
        cout<<"Address: "<<this->add<<endl;
        cout<<"Email: "<<this->email<<endl;
        cout<<"Mobile: "<<this->mob<<endl;
        cout<<"Blood Group: "<<this->blood<<endl;
        cout<<"Sex: "<<this->sex<<endl;
        }
    }

    void fil3(string s)
    {

        if(this->email==s)
        {
        m3=1;
        cout<<endl<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
        cout<<"Address: "<<this->add<<endl;
        cout<<"Email: "<<this->email<<endl;
        cout<<"Mobile: "<<this->mob<<endl;
        cout<<"Blood Group: "<<this->blood<<endl;
        cout<<"Sex: "<<this->sex<<endl;
        }
    }
}d[1000];
int main()
{
    cout<<"\t \t \t \t \t !!Welcome to blood bank!!"<< endl;
    cout<<"\t \t \t \t \t \t!!!!Menu!!!!"<<endl<<"\t \t \t \t 1.Insert New Doner"<<endl<<"\t \t \t \t 2.Fetch all doners"<<endl<<"\t \t \t \t 3.Filter by Blood Group"<<endl<<"\t \t \t \t 4.Filter by Mobile number"<<endl<<"\t \t \t \t 5.Filter by Email"<<endl<<"\t \t \t \t 0.Exit"<<endl;
    int n,x=0,f=1;
    cout<<"Enter Selection(0-5): ";
    cin>>n;
    while(f==1)
        {
        if(n==1)
        {
            d[x].getdata();
            x++;
        }
        else if(n==2)
        {
            cout<<endl<<"Information about Doner: "<<endl;
            for(int i=0;i<x;i++)
               {
                   cout<<endl;
                   cout<<i+1<<endl;
                   d[i].putdata();
               }
        }
        else if(n==4)
        {
            char b[10];
            cout<<"Enter the Mobile Number: ";
            cin>>b;
            for(int i=0;i<x;i++)
                {
                    d[i].fil2(b);
                }
                if(m2==0)
                    cout<<"No data found"<<endl;
        }
        else if(n==3)
        {
            string b;
            cout<<"Enter the blood group: ";
            cin>>b;
            for(int i=0;i<x;i++)
                {
                    d[i].fil1(b);
                }
                if(m==0)
                    cout<<"No data found"<<endl;
        }

        else if(n==5)
        {
            string b;
            cout<<"Enter the email address: ";
            cin>>b;
            for(int i=0;i<x;i++)
                {
                    d[i].fil3(b);
                }
                if(m3==0)
                    cout<<endl<<"No data found"<<endl;
        }
        else if(n==0)
        {
            cout<<endl<<"\t \t \t \t!!Thanks for using blood bank!!"<<endl;
            return 0;
        }
        else
        {
                cout<<"Incorrect option"<<endl;
        }
        char o;
        do{
        cout<<endl<<endl<<"Do you want another operation(y/n): ";

        //int f=0;
        cin>>o;
        if(o=='y')
            {
                f==1;
                cout<<"\t \t \t \t \t !!Welcome to blood bank!!"<< endl;
                cout<<"\t \t \t \t \t \t!!!!Menu!!!!"<<endl<<"\t \t \t \t 1.Insert New Doner"<<endl<<"\t \t \t \t 2.Fetch all doners"<<endl<<"\t \t \t \t 3.Filter by Blood Group"<<endl<<"\t \t \t \t 4.Filter by Mobile number"<<endl<<"\t \t \t \t 5.Filter by Email"<<endl<<"\t \t \t \t 0.Exit"<<endl;
                cout<<"Enter Selection(0-5): ";
                cin>>n;
            }
        else if(o=='n')
            {
                cout<<endl<<"\t \t \t \t Thanks for using blood bank!!"<<endl;
                f=0;
            }
        else
        {
            cout<<"Incorrect selection"<<endl;
        }
        }while(o!='y'&&o!='n');
        }


    return 0;
}
