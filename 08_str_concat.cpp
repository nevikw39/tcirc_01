/**
 * 8_str_concat.cpp: nevikw39 03/14, 2020
 * 字串相接說例
 */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello,";
    cout << str + " world\n"; // hello, world
    cin >> str;
    str = '"' + str + "\", said you.\n"; // “${輸入}”, said you.
    cout << str;
    return 0;
}