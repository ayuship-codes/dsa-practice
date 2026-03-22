#include <iostream>
using namespace std;

int reverse(int n)
{
    int rnum=0;
    while (n > 0)
    {
        int a = n % 10; // a=last digit
        rnum = (rnum * 10) + a;
        n = n / 10;
    }
    return rnum;
}
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    cout << "revese of number is:";
    cout << reverse(n);
    return 0;
}