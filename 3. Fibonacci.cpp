#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n==0 || n==1)
        return n;
    return fibo(n-1) + fibo(n-2);
}
int main()
{
    int n=10;
    int result = fibo(n);
    cout << "Fibonacci Series of " << n << " =";
    for(int i=0; i<n; i++){
        cout << " " << fibo(i);
    }
    cout << endl;
}
