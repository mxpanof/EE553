#include <iostream>
#include<cmath>
#include<limits>

using namespace std;
bool IsPrime (unsigned long long p)
{
    bool isprime = true;
    for (int i =3; i<p;i++)
    {
        if(p%i==0 || p%2==0)
        {
            isprime=false;
            break;
        }
    }
   return isprime;
}
int countPrimes (unsigned long long a, unsigned long long b)
{
    int count = 0;
    for(int i = a; i<=b; i++)
    {
        if(IsPrime(i))
        {
           count++;
        }
    }
    return count;
}

int main()
{
    unsigned long long passa = 0;
    unsigned long long passb = 0;
    while(true)
    {
    cout << "Please enter a lower bound \n";
    cin >> passa;
    cout << "Please enter a upper bound \n";
    cin >> passb;
    cout << "There are " << countPrimes(passa, passb) << " primes in range\n";
    }
}

