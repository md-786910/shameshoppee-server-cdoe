#include <bits/stdc++.h>
using namespace std;

int main()
{

    int mat[2][2] = {
        {1, 2},
        {3, 4}};
    vector<int> v;
    int mx = 0;
    int a = 0;
    int b = 0;
    for (int i = 0; i < 2; i++)
    {
        a = 0;
        b = 0;
        for (int j = 0; j < 2; j++)
        {
            a += mat[i][j];
            b += mat[j][i];
        }

        mx = max(mx, max(a, b));
    }

    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum += mat[i][j];
        }
        v.push_back(sum);
    }
    int op = 0;

    for (auto ans : v)
    {
        cout << ans << " ";
        op += (mx - ans);
    }

    return op;

    return 0;
}