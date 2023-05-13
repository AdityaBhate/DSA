#include <iostream>
using namespace std;

// factorial calc - normal/recursion
// fibonacci - normal/recursion
// magic number

void normal_factorial(int x)
{
    int fac = 1;
    for (int i = 1; i <= x; i++)
    {
        fac *= i;
    }
    cout << fac;
}

int fac = 1;
void recursion_factorial(int x)
{

    if (x <= 0)
    {
        cout << fac;
    }
    else
    {
        fac *= x;
        x = x - 1;
        recursion_factorial(x);
    }
}

void normal_fibonnaci(int x)
{
    int num1 = 0;
    int num2 = 1;
    int num3;

    if (x == 1)
    {
        cout << num1;
    }
    else if (x == 2)
    {
        cout << num1 << endl;
        cout << num2 << endl;
    }
    else
    {
        cout << num1 << endl;
        cout << num2 << endl;
        for (int i = 2; i < x; i++)
        {
            num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
            cout << num3 << endl;
        }
    }
}

int main()
{
    int x;
    cin >> x;
    // normal_factorial(x);
    // recursion_factorial(x);
    normal_fibonnaci(x);
}