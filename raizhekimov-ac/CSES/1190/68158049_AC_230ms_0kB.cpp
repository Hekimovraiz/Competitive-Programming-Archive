#include <bits/stdc++.h>
using namespace std;

struct Node {
    long long sum, pref, suff, best;
    Node(long long v = 0) {
        sum = v;
        pref = suff = best = max(0LL, v);
    }
};

Node merge(Node a, Node b) {
    Node r;
    r.sum = a.sum + b.sum;
    r.pref = max(a.pref, a.sum + b.pref);
    r.suff = max(b.suff, b.sum + a.suff);
    r.best = max({a.best, b.best, a.suff + b.pref});
    return r;
}

int n, m;
vector<Node> seg;

void build(int idx, int l, int r, vector<long long>& a) {
    if (l == r) {
        seg[idx] = Node(a[l]);
        return;
    }
    int mid = (l + r) >> 1;
    build(idx<<1, l, mid, a);
    build(idx<<1|1, mid+1, r, a);
    seg[idx] = merge(seg[idx<<1], seg[idx<<1|1]);
}

void update(int idx, int l, int r, int pos, long long val) {
    if (l == r) {
        seg[idx] = Node(val);
        return;
    }
    int mid = (l + r) >> 1;
    if (pos <= mid) update(idx<<1, l, mid, pos, val);
    else update(idx<<1|1, mid+1, r, pos, val);
    seg[idx] = merge(seg[idx<<1], seg[idx<<1|1]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    seg.assign(4 * n, Node());
    build(1, 0, n - 1, a);

    while (m--) {
        int k;
        long long x;
        cin >> k >> x;
        update(1, 0, n - 1, k - 1, x);
        cout << seg[1].best << '\n';
    }
}