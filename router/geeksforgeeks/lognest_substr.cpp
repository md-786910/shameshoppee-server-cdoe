#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "abcabcbb";
    stack<char> st;

    char ch = s[0];
    st.push(ch);
    int count = 1;
    int mx = 0;
    for (int i = 1; i < s.length(); i++)
    {
        char k = s[i];
        while (!st.empty())
        {
            if (st.top() == k)
            {
                cout << st.top() << " ";
                count = 1;
                break;
            }
            else
            {
                count++;
                mx = max(mx, count);
            }
            st.pop();
        }
        st.push(s[i]);
    }

    cout << count;
    cout << mx;

    return 0;
}