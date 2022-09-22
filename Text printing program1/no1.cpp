#include <iostream>
using namespace std;

int main()
{
    int a = 0 , b = 0 , c = 0;

    cin >> a >> b >> c;

    int sum = a + b + c;
    int average = (a+b+c)/3;
    int product = a*b*c;
    int S1 = a < b ? a : b;
    int S2 = S1 < c ? S1 : c;
    int L1 = a > b ? a : b;
    int L2 = L1 > c ? L1 : c;


    cout <<"Sum is " << sum <<endl;
    cout <<"Average is " << average <<endl;
    cout <<"Product is " << product <<endl;
    cout <<"Smallest is " << S2 <<endl;
    cout << "Largest is " << L2 <<endl;

    system("pause");

}