#pragma warning(disable:4996)
#include<iostream>
#include <algorithm>
using namespace std;

void main()
{
    int n,flag=1;
    cin >> n;
    char a[1000][10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i][0] == 'O'&&a[i][1] == 'O'&&flag)
        {
            flag = 0;
            a[i][0] = '+';
            a[i][1] = '+';
        }
        if (a[i][3] == 'O'&&a[i][4] == 'O'&&flag)
        {
            flag = 0;
            a[i][3] = '+';
            a[i][4] = '+';
        }
    }
    if (!flag)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << endl;
        }
    }
    else
        cout << "NO" << endl;
}