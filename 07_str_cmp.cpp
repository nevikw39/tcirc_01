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
    cout << (str0 == str1) << '\n'  // True
         << (str0 == str2) << '\n'; // False
    string circ = "circ", ddc = "Ddc";
    if (circ > ddc) // 依照字典順序比較
        cout << "circ is greater than ddc.\n";
    else
        cout << "circ is not greater than ddc.\n";
    return 0;
}