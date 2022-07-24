#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int q = n / 100;
    int rem = n % 100;
    q += rem / 20;
    rem = rem % 20;
    q += rem / 10;
    rem = rem % 10;
    q += rem / 5;
    rem = rem % 5;
    q += rem / 1;
    std::cout << q;
}