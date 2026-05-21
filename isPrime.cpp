#include <iostream>
using namespace std;
// 1-> is prime no
// 0 -> not prime
bool isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        // divide hogya h, not a prime num
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "is prime no" << endl;
    }
    else
    {
        cout << "not prime no" << endl;
    }
}