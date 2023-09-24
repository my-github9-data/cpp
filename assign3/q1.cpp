//Write a menu driven program to calculate volume of the box(length * width * height).
//Provide necessary constructors

#include<iostream>
using namespace std;
class volume{
private:
    int length;
    int width;
    int height;
public:
    volume()
    {
    }
    volume(int length, int width, int height)
    {
        this->length=length;
        this->width=width;
        this->height=height;
    }
    void acceptlwh()
    {
        cout<<"Enter Length of Box =";
        cin>>length;
        cout<<"Enter Width of Box =";
        cin>>width;
        cout<<"Enter height of Box =";
        cin>>height;
    }
    void displayvol()
    {
        cout<<"Volume of the Box is ="<<length*width*height<<endl;
    }

};
int menu()
{   int choice;
    cout<<"******************"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"1.Accept values"<<endl;
    cout<<"2.Display answer"<<endl;
    cout<<"Enter your Choice- "<<endl;
    cin>>choice;
    cout<<"******************"<<endl;
    return choice;

}
int main()
{
    
    volume v;
    int choice;
    while((choice=menu())!=0)
    {
        switch(choice)
        {
        case 1 : v.acceptlwh();
                break;
        case 2 : v.displayvol();
                break;
        default : cout<<"Invalid Option..."<<endl;
                break;
        }
    }
    cout<<"Thanks for Using Our App"<<endl;

    return 0;
}