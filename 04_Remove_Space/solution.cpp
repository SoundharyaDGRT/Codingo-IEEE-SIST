#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[100], str_no_spc[100];
    int i = 0, j = 0;
    gets(str);

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {

            str_no_spc[j++] = str[i];
        }

        i++;
    }
    str_no_spc[j] = '\0';

    cout << str_no_spc;
    return 0;
}
