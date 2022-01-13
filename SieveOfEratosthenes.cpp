// Sieve of eratosthenes
#include <iostream>
#include <cmath>
using namespace std;

// Q1. Prime numbers in a given range
/*void printPrime(int n)
{
    int isPrime[n+1];
    for (int i = 2; i < n; i++)
        isPrime[i] = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i] == 0)
            for (int j = pow(i, 2); j <= n; j += i)
                isPrime[j] = 1;
    }

    cout<<"The prime numbers in the given range is ";
    for (int i = 0; i <= n; i++)
        if (isPrime[i] == 0)
            cout << i << " ";
    return;
}

int main()
{
    int n;
    cout << "Enter the last number for the range ";
    cin >> n;
    printPrime(n);
    return 0;
}*/

// Q2. Prime factorisation
/*void primeFactors(int n)
{
    int spf[n + 1];
    for (int i = 2; i <= n; i++)
        spf[i] = i;

    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
            for (int j = pow(i, 2); j <= n; j += i)
                if (spf[j] == j)
                    spf[j] = i;
    }

    cout << "The prime factors of the given number is ";
    while (n > 1)
    {
        cout << spf[n] << " ";
        n /= spf[n];
    }
    return;
}

int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    primeFactors(n);
    return 0;
}*/