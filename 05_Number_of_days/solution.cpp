#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int m, y;

    cin >> m >> y;

    if (m == 0 && y == 0)
        cout << "Invalid" << endl;
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        cout << "31";
    else
        cout << "30";

    return 0;
}
