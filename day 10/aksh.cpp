#include <iostream>
using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
            continue;
        }
    }
    return true;
}

int main()
{
    for (int i = 1; i < 100; i++)
    {
        if (isPrime(i) == 1)
        {
            cout << i << " ";
        }
    }

    return 0;
}
