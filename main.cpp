#include <iostream>

using namespace std;

int main()
{
cout << "Enter A and B: ";
int a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n';
cout <<  "A - B = " << a - b << '\n';
cout << "A * B = " << a * b <<'\n';
cout << "A / B = " << a / b <<'\n';
cout<<'Min = ';
if (a > b)
    cout << b;
else
    cout << a;
cout<<'Max = ';
if (a > b)
    cout << a;
else
    cout << b;
return 0;
}
