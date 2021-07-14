#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    if (m > 0 && n > 0)
    {
        while (m != n)
        {
            if (m > n)
                m = m - n;
            else if (n > m)
                n = n - m;
        }

        cout << m;
    }
    else
        cout << "Not Valid" << endl;

    return 0;
}
