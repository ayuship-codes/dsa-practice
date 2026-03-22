#include <iostream>
using namespace std;

int palindrome(int n)
{
    int num=n,rnum=0;
    while (n > 0)
    {
        int a = n % 10; // a=last digit
        rnum = (rnum * 10) + a;
        n = n / 10;
    }
    if (rnum==num){
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";
    }
    return 0;
}
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    cout <<palindrome(n);
    return 0;
}