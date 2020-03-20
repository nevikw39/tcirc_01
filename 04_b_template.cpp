/**
 * 4_b_template.cpp: nevikw39 03/10, 2020
 * 函式模板說例
 */

#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b)
{
    puts(typeid(T).name());
    return a + b;
}

int main()
{
    cout << sum(78, 69) << '\n'
         << sum(9487947894879478, 526952695269) << '\n'
         << sum(9.2, 6.4) << '\n';
    return 0;
}