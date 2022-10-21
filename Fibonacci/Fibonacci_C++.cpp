/*Fibonacci Implementado en C++*/
#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>

using namespace std;
long long int fibonacci(int x)
{
    long long int n1 = 1;
    long long int n2 = 0;
    long long int n = 0;
    for (int i = 1;i < x; i += 1)
    {
        n = n1 + n2;
        n2 = n1;
        n1 = n;
    }
    return n;
}

int main()
{
    cout << fibonacci(19);
    return 0;
}
// Complejidad temporal O(n)
