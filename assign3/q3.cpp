#include<iostream>
using namespace std;
class cylinder
{
private:
    double radius;
    double height;
    
public:
cylinder():radius(radius=0),height(height=0)
{
    
}
cylinder(double radius, double height)
{
    this->radius=radius;
    this->height=height;
}
int getRadius()
{
    return this->radius;
}
void setRadius(double radius)
{
    this->radius=radius;
}
int getHeight()
{
    return this->height;
}
void setHeight(double height)
{
    this->height=height;
}
int getVolume()
{
    // int volume=0;
    return 3.14*radius*radius*height;
    
}
void printVolume(){
    cout<<"Volume of a cylinder ="<<this->getVolume()<<endl;
}
};
int menu()
{
    int choice;
    cout<<"--------------------------------"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"1.Set Radius "<<endl;
    cout<<"2.Get Radius "<<endl;
    cout<<"3.Set Height "<<endl;
    cout<<"4.Get Height "<<endl;
    cout<<"5.Get Volume of Cylinder "<<endl;
    cout<<"Enter Your Choice = ";
    cin>>choice;
    cout<<"--------------------------------"<<endl;
    return choice;
}
int main()
{
    cylinder c;
    int choice;
    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case 1: double radius;
                    cout << "Enter Radius: ";
                    cin>> radius;
                    c.setRadius(radius);
                    break;
            case 2: cout<<"Radius is= "<<c.getRadius()<<endl;
                    break;
            case 3: double height;
                    cout << "Enter Height: ";
                    cin >> height;
                    c.setHeight(height);
                    break;
            case 4: cout << "Height is= " << c.getHeight()<<endl;
                    break;
            case 5: cout<< "Volume is= "<< c.getVolume()<<endl;
                    break;
            default:cout<<"Invalid choice..."<<endl;
                    break;
        }
    }
    return 0;
}