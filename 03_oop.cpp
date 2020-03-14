/**
 * 3_oop.cpp: nevikw39 03/10, 2020
 * 物件導向說例
 */

#include <iostream>
#include <cmath>
using namespace std;

struct point
{
    int x, y;
    point(int _x, int _y)
    {
        // 建構式：物件被建立時所呼叫的函式
        x = _x;
        y = _y;
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
    point p(3, 4); // 建立物件並呼叫其建構式
    cout << p.length() << '\n';
    p.x = 69;
    cout << p.distance(point(87, 4)) << '\n';
    return 0;
}