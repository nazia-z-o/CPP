#include <iostream>
using namespace std;
const int N = 1e5+10;
int arr[N];
long long tree[4 * N];
void build(int node, int st, int en)
{
    if (st == en)
    {
        tree[node] = arr[st];
        return;
    }
    int mid = (st + en) / 2;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}
 
void update(int node, int st, int en, int ix, int val)
{
    if (st == en)
    {
        tree[node] = val;
        return;
    }
    if (ix > en || ix < st) return;
    int mid = (st + en) / 2;
    if (ix <= mid)
    {
        update(2 * node, st, mid, ix, val);
    }
    else
    {
        update(2 * node + 1, mid + 1, en, ix, val);
    }
 
    tree[node] = tree[2 * node] + tree[2 * node + 1];
    return;
}
 
long long query(int node, int st, int en, int l, int r)
{
    if (st > r || en < l)
    {
        return 0;
    }
    else if (st >= l && r >= en)
    {
        return tree[node];
    }
 
    int mid = (st + en) / 2;
    long long q1 = query(2 * node, st, mid, l, r);
    long long q2 = query(2 * node + 1, mid + 1, en, l, r);
 
    return q1 + q2;
}
int main() {
    int n,m;
    cin >>n >> m;
    //if (t > 1e9 || n > 1e9) return 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    build(1, 0, n - 1);
    int type;
    while (m--)
    {
        cin >> type;
        if (type == 1)
        {
            int ix, val;
            cin >> ix >> val;
            //if (ix >= n||val>1e9) continue;
            update(1, 0, n - 1, ix, val);
        }
        else if(type==2)
        {
            int l, r;
            cin >> l >> r;
            //if (l >= n || r > n) continue;
            long long ans = query(1, 0, n - 1, l, r - 1);
            cout << ans << endl;
        }
    }
    return 0;
}
