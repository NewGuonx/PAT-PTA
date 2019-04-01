// author - newguo@sonaspy.cn
// coding - utf_8

#include <bits/stdc++.h>

#define test() freopen("in", "r", stdin)

using namespace std;
int dp[10010], w[10010];
bool choice[10010][110];
int main(int argc, char const *argv[])
{
    /* code */
    //test();
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &w[i]);
    sort(w + 1, w + n + 1, greater<int>());
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j >= w[i]; j--)
        {
            if (dp[j] <= dp[j - w[i]] + w[i])
            {
                choice[i][j] = true;
                dp[j] = dp[j - w[i]] + w[i];
            }
        }
    }
    if (dp[m] != m)
        printf("No Solution");
    else
    {
        vector<int> arr;
        int v = m, index = n;
        while (v > 0)
        {
            if (choice[index][v] == true)
            {
                arr.push_back(w[index]);
                v -= w[index];
            }
            index--;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (i != 0)
                printf(" ");
            printf("%d", arr[i]);
        }
    }
    return 0;
}//attention