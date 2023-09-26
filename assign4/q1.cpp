#include<iostream>
using namespace std;
class Time
{
private:
    int h;
    int m;
    int s;

public:
    Time()
    {
        this->h=0;
        this->m=0;
        this->s=0;
    }
    Time(int h,int m,int s)
    {
        this->h=h;
        this->m=m;
        this->s=s;
    }
    int getHour()
    {
        return this->h;
    }
    int getMinute()
    {
        return this->m;
    }
    int getSeconds()
    {
        return this->s;
    }

    void setHour()
    {
        this->h=h;
    }
    void setMinute()
    {
        this->m=m;
    }
    void setSeconds()
    {
        this->s=s;
    }
    void printTime()
    {
        cout<<this->h<<":"<<this->m<<":"<<this->s<<endl;
    }
};
int main()
{   

     Time **T = new Time *[2]; // Dynamic Array of pointers   1st dim

    T[0] = new Time(0, 0, 0); // Allocate Dynamic Objects 2nd dimension
    T[1] = new Time(10, 10, 10);

    // Display Default time in objects
    for (int i = 0; i < 2; i++)
    {
        cout << "Default Times in object : " << i << endl;
        cout << T[i]->getHour() << " : " << T[i]->getMinute() << " : " << T[i]->getSeconds() << endl;
    }

    // Accept time in objects
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter Time for object : " << i << endl;
        T[i]->setHour();
        T[i]->setMinute();
        T[i]->setSeconds();
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "Times in object : " << i << endl;
        cout << T[i]->getHour() << " : " << T[i]->getMinute() << " : " << T[i]->getSeconds() << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        delete T[i];
    }

    delete[] T;
    return 0;
}