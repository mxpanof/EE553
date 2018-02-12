#include <iostream>
#include <cmath>

using namespace std;

double fact (int n)
{
    double d = 1;
    for(int i = 1; i<=n; i++)
    {
        d=i*d;
    }
    return d;

}
double fact2 (int n)
{
    if (n==1)
    {
        return n;
    }
    n*=fact2(n-1);
}
double fibo(int n)
{
    double f1=1, f2=0, prev = 0;
    for(int i = 1; i<=n;i++)
    {

       prev = f1;
       f1+=f2;
       f2 = prev;

    }
}
double fibo2(int n)
{
    if(n==1)
    {
        return n;
    }
    else if(n ==2)
    {
        return 1;
    }
    n=fibo2(n-1)+fibo2(n-2);

}
double choose (int n , int r)
{
    return fact(n)/(fact(r)*fact(n-r));

}

int main()
{
    cout << fact(5) << ' ' << fact2(5) << '\n';
    cout << fact(15) << ' ' << fact2(15) << '\n';
    cout << fibo(5) << ' ' << fibo2(5) << '\n';
    cout << fibo(13) << ' ' << fibo2(13) << '\n';
    cout << choose(52,6) << '\n';
}

