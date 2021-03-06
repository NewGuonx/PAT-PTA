// author -sonaspy@outlook.com
// coding - utf_8

#include <bits/stdc++.h>

using namespace std;
#define test() freopen("in", "r", stdin)
int tmp, n, colorn, colorRank[201] = {0};
vector<int> strip;
static int length = 0, maxlen = 0;
void DFS(int start, int curRank)
{
    for (int i = start; i < n; i++)
    {
        if (curRank <= colorRank[strip[i]])
        {
            length++;
            DFS(i + 1, colorRank[strip[i]]);
        }
    }
    maxlen = max(length, maxlen);
    length--;
}
int main(int argc, char const *argv[])
{
    /* code */
    //test();
    cin >> colorn >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        colorRank[tmp] = i + 1;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        if (colorRank[tmp])
            strip.push_back(tmp);
    }
    n = strip.size();
    DFS(0, 1);
    cout << maxlen;
    return 0;
}