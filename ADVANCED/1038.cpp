// author -sonaspy@outlook.com
// coding - utf_8

#include <bits/stdc++.h>

#define test() freopen("in", "r", stdin)

using namespace std;

bool cmp(string s1, string s2) { return s1 + s2 < s2 + s1; }
int main(int argc, char const *argv[])
{
    /* code */
    //test();
    int n, j = -1;
    cin >> n;
    string s, res;
    vector<string> lis(n);
    for (int i = 0; i < n; i++)
        cin >> lis[i];
    sort(lis.begin(), lis.end(), cmp);
    for (auto i : lis)
        res += i;
    while (res[++j] == '0')
        ;
    if (j == res.size())
        cout << 0;
    else
        cout << res.substr(j, res.size() - j);
    return 0;
} //attention