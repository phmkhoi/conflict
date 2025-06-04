#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool isPrime(int x)
{
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}

void build(int id, int l, int r, vector<int> &a, vector<int> &t)
{
    if (l == r) return void(t[id] = a[l]);
    int mid = (l + r) / 2;
    build(id*2, l, mid, a, t);
    build(id*2 + 1, mid + 1, r, a, t);
    t[id] = t[id*2] + t[id*2 + 1];
}

int main()
{
    cout << isPrime(7) << '\n';
}
