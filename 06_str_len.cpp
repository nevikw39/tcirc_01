/**
 * 6_str_len.cpp: nevikw39 03/14, 2020
 * 取得長度字串說例
 */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str.length() << '\n';
    return 0;
}