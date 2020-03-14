/**
 * 10_vec_traversal.cpp: nevikw39 03/14, 2020
 * vector 的遍歷
 */

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {0, 1, 2, 3, 4};
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << '\n';
    // 欲知以下為何，且待下回分解
    // for (auto itr = v.begin(); itr < v.end(); itr++)
    //     cout << *itr << '\n';
    // for (int i : v)
    //     cout << i << '\n';
    return 0;
}