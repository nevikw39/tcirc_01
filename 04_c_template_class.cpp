/**
 * 4_c_template_class.cpp: nevikw39 03/10, 2020
 * 函式模板推廣
 */

#include <cmath>
#include <iostream>
using namespace std;

template <typename T>
struct point
{
    T x, y;
    point(T _x, T _y)
    {
        x = _x, y = _y;
    }
    double distance(const point &r)
    {
        return sqrt((x - r.x) * (x - r.x) + (y - r.y) * (y - r.y));
    }
    double length()
    {
        return distance(point(0, 0));
    }
};

int main()
{
    point<int> p(3, 4);
    cout << p.length() << '\n';
    p.x = 69;
    cout << p.distance(point<int>(87, 4));

    point<double> q(9.2, 42.6);
    cout << q.length() << '\n';
    return 0;
}