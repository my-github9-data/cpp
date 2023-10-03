#include <iostream>
using namespace std;
int factorial(int num)
{
    int count = 0;
    int fact = 1;

    if (num < 0)
        throw 1;

    if (num == 1 || num == 0)
    {
        return 1;
    }
    while (count < num)
    {
        count++;
        fact *= count;
    }
    return fact;
}
int main()
{
    int num;
    int fact;
    cout << "Enter num : ";
    cin >> num;
    try
    {
        fact = factorial(num);
        cout << "Factorial of " << num << " is " << fact << endl;
    }
    catch (int error)
    {
        cout << "Number is Negative" << endl;
    }
    return 0;
}