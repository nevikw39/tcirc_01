/**
 * 5_str_io.cpp: nevikw39 03/14, 2020
 * 字串輸出入說例
 */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str; // 遇到空白字元即停止
    cout << str << '\n';
    getline(cin, str);
    cout << str << '\n'; // 遇到換行字元方停止
    return 0;
}