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

int Primes(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i++)
        if (isPrime(i))
            sum += i;
    return sum;
}

int main()
{
    cout << isPrime(7) << '\n';
}
