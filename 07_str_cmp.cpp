/**
 * 7_str_cmp.cpp: nevikw39 03/14, 2020
 * 字串順序比較說例
 */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str0 = "o'_'o", str1 = "o'_'o", str2 = "0'_'O";
    cout << (str0 == str1) << '\n'     // True
         << (str0 == str2) << '\n';    // False
    string circ = "circ", ddc = "Ddc";
    cout << (circ > ddc) << '\n';      // 依照字典順序比較
    return 0;
}