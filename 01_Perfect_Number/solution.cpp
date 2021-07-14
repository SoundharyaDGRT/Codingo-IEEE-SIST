#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i, result = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (n * 2 == sum)
        cout << n * n;
    else if (n * 2 == sum)
    {
        for (int i = 0; i < n; i++)
        {
            result = result + i;
        }

        cout << result;
    }
    else
        cout << "Invalid Number";

    return 0;
}
