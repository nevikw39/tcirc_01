/**
 * 4_a_overloading.cpp: nevikw39 03/10, 2020
 * 函式多載說例
 */

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cerr << "Calling sum function in int.\n";
    return a + b;
}
long sum(long a, long b)
{
    cerr << "Calling sum function in long.\n";
    return a + b;
}
double sum(double a, double b)
{
    cerr << "Calling sum function in double.\n";
    return a + b;
}

int main()
{
    cout << sum(78, 69) << '\n'
         << sum(9487947894879478, 526952695269) << '\n'
         << sum(9.2, 6.4) << '\n';
    return 0;
}