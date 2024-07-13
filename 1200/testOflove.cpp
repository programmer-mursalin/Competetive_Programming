#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes() cout << "YES" << endl
#define no() cout << "NO" << endl

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    string s;
    cin >> s;

    s.push_back('L'); // Ensure there is an extra 'L' at the end
    n++;              // Increase the length of the string

    int i = -1;
    while (i < n)
    {
        if (i + m >= n)
        {
            yes();
            return;
        }

        if (s[i + m] == 'W')
        {
            int flag = 0;
            for (int j = i + 1; j < i + m; j++)
            {
                if (s[j] == 'L')
                {
                    i = j;
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                if (k < 1)
                {
                    no();
                    return;
                }
                k--;
                for (int l = i + m + 1; l < n; l++)
                {
                    if (s[l] == 'W')
                    {

                        if (k < 1)
                        {
                            no();
                            return;
                        }
                        k--;
                    }
                    else if (s[l] == 'C')
                    {
                        no();
                        return;
                    }
                    else
                    {
                        i = l;
                        break;
                    }
                }
            }
        }
        else if (s[i + m] == 'C')
        {
            int flag = 0;
            for (int j = i + 1; j < i + m; j++)
            {
                if (s[j] == 'L')
                {
                    i = j;
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                no();
                return;
            }
        }
        else if (s[i + m] == 'L')
        {
            i += m; // Move to the next position
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
