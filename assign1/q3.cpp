#include<iostream>
using namespace std;
class Student{
private: 
    int rollno;
    string name;
    int marks;
public:
    void initStudent(){
            cout<<"Roll no = 1"<<endl;
            cout<<"Name = ABC"<<endl;
            cout<<"Marks = 90"<<endl;
    }

    void printStudentOnConsole(){
            cout<<"\nRollNo. "<<this->rollno<<endl;
            cout<<"Name. "<<this->name<<endl;
            cout<<"marks. "<<this->marks<<endl;

    }
    void acceptStudentFromConsole(){
            cout<<"Enter Student rollno. ";
            cin>>this->rollno;
            cout<<"Enter Name of Student ";
            cin>>this->name;
            cout<<"Enter marks ";
            cin>>this->marks;
    }

};
int menu()
{
    int choice;
    cout<<"*************************"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. initial Student"<<endl;
    cout<<"2. accept Student"<<endl;
    cout<<"Enter your choice= ";
    cin>>choice;
    cout<<"*************************"<<endl;
    return choice;
}

int main(){
    Student b1;
    int choice;
    while((choice=menu())!=0)
        switch(choice)
        {
            case 1: b1.initStudent();
                    break;
            case 2: b1.acceptStudentFromConsole();
                    b1.printStudentOnConsole();
                    break;
            default: cout<<"Invalid Choice...";
                    break;
        }
    return 0;
}