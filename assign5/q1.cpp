#include<iostream>
#include<string.h>
#include<algorithm>
#include<cctype>

int n;
using namespace std;
class Student
{
private:
    int rollno;
    string name;
    string gender;
    int marks[3];
public:
    Student()
    {}
    Student(int rollno,string name,string gender)
    {
        this->rollno=rollno;
        this->name=name;
        this->gender=gender;
        for(int i=0;i<3;i++)
        {
            this->marks[i]=0;
        }
    }
    void accept()
    {
        cout<<"Enter Student Roll no.=";
        cin>>this->rollno;

        cout<<"Enter Student Name =";
        cin.ignore();
        getline(cin,this->name);

        cout<<"Enter Gender as M or F= ";
        cin>>this->gender;

        cout<<"Enter Marks for 3 Subs"<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"Subject"<<i+1<<":";
            cin>>this->marks[i];
        }
    }
    void print()
    {
        int total=0;
        cout<<"Student RollNo is= "<<this->rollno<<endl;
        cout<<"Student Name is= "<<this->name<<endl;
        cout<<"Gender is= "<<this->gender<<endl;

        cout<<"Marks of 3 Subjects are"<<endl;
        for (int i=0;i<3;i++)
        {
            cout<<"Subject "<<i+1<<"= "<<this->marks[i]<<"\t";
            total+=this->marks[i];
        }
        cout<<"Percentage is= "<< static_cast<double>(total) / 3.0 << "%" << endl;
        cout<<"***********************************"<<endl;
    }
    friend int SearchRecords(Student arr[]);
    friend void SortRecords(Student arr[]);
};
int SearchRecords(Student arr[])
{
    string name;
    cout<<"Enter name to Search"<<endl;
    getline(cin,name);
    for (int i=0;i<n;i++)
    {
        string lowerStr1=name;
        string lowerStr2= arr[i].name;
        transform(lowerStr1.begin(), lowerStr1.end(), lowerStr1.begin(), ::tolower);
        transform(lowerStr2.begin(), lowerStr2.end(), lowerStr2.begin(), ::tolower);

        if (lowerStr1 == lowerStr2)
            return i;
    }
    return -1;
}
void SortRecords(Student arr[])
{
    Student temp;

    for (int pass = 0; pass < n - 1; pass++)
    {
        for (int j = 0; j < n - pass - 1; j++)
        {
            if (arr[j].rollno > arr[j + 1].rollno)
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int menu()
{
    int choice;
    cout<<"\n-----------------------------------"<<endl;
    cout << "\n0. EXIT\n1. Accept\n2. Print\n3. Search\n4. Sort\n";
    cout << "Enter Your choice : ";
    cin >> choice;
    cout<<"\n-----------------------------------"<<endl;
    return choice;
}
int main()
{
    int n;
    int choice,index;
    cout << "Enter no of students records you want to enter : ";
    cin >> n;
    Student *s;
    s = new Student[n];

    while((choice=menu())!=0)
    {
        switch (choice)
        {
        case 1:
            for (int i = 0; i < n; i++)
                s[i].accept();
            break;

        case 2:
            for (int i = 0; i < n; i++)
                s[i].print();
            break;

        case 3:
            index = SearchRecords(s);
            if (index != -1)
            {
                cout << "Student Record found";
                s[index].print();
            }
            else
                cout << "Student Record Not found";
            break;

        case 4:
            SortRecords(s);
            for (int i = 0; i < n; i++)
                s[i].print();
            break;

        default:
            cout << "Enter a valid option."<<endl;
            break;
        }
    }
    delete[] s;
    return 0;
}

