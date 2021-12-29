#include <iostream>
using namespace std;

int addition(int x, int y)
{
    return x + y;
}
int substract(int x, int y)
{
    return x - y;
}
int multiply(int x, int y)
{
    return x * y;
}
int divide(int x, int y)
{
    return x / y;
}

int main()
{
    int a, b, x, ans;
    cin >> a;
    cin >> b;
    cout << "What would you like to do with " << a << " and " << b <<"?\n\n";
    cout << "1.Add\n2.Substract\n3.Multiply\n4.Divide\n9.Cancel\n";
    cin >> x;
    switch(x)
    {
        case 1:
            ans = addition(a, b);
            cout << "Answer : " << ans;
            return 0;

        case 2:
            ans = substract(a, b);
            cout << "Answer : " << ans;
            return 0;

        case 3:
            ans = multiply(a, b);
            cout << "Answer : " << ans;
            return 0;

        case 4: 
            ans = divide(a, b);
            cout << "Answer : " << ans;
            return 0;

        case 9:
            return 0;
            
        default:
            cout << "Unknown Input";
            return 0;
    } 
}
