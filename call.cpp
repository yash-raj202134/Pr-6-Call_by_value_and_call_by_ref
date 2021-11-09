/// Swaping 2 numbers by call by value and call by refrence strategies...
#include <iostream>
using namespace std;
void swapbyref(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapbyval(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "\nValue of x is " << a << " and y is " << b;
}
int main()
{
    int x, y;
    cout << "Enter value of x : ";
    cin >> x;
    cout << "Enter value of y : ";
    cin >> y;
    swapbyref(&x, &y); // call by refrence strategy..
    cout << "\nValue of x after swapping is " << x << " and y is " << y;

    swapbyval(x, y); // call by value strategy..

    return 0;
}