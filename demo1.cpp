// author - newguo@sonaspy.cn
// coding - utf_8

#include <bits/stdc++.h>

#define test() freopen("in", "r", stdin)

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;
};
void SWAP(int &a, int &b)
{
    a ^= b ^= a ^= b;
}
int main(int argc, char const *argv[])
{
    /* code */
    //test();
    int a = 10, b = 100;
    SWAP(a, b);
    cout << a << b;
    return 0;
}