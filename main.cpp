#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int x)
{
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}

bool isOdd(int x)
{
    return x % 2;
}

int main()
{
    cout << isPrime(7) << '\n';
}
