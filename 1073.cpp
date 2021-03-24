#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define str string
#define fo freopen
#define ii pair<int, int>
#define iii pair<int, ii >
#define ff first
#define ss second
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define sci(a) scanf("%d", &a)
#define scii(a, b) scanf("%d %d", &a, &b)
#define sciii(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define fto(i, l, r) for (int i = l; i <= r; ++i)
#define fdto(i, r, l) for (int i = r; i >= l; --i)
#define fto1(i, l, r) for (int i = l; i < r; ++i)
#define fdto1(i, r, l) for (int i = r; i > l; --i)
#define all(a) (a).begin(), (a).end()
#define bug(a) cout << #a << " = " << a << endl;
#define bug2(a, b) cout << #a << "=" << a << " " << #b << "=" << b <<endl;
#define vii vector<ii>
#define pf push_front
#define glen(a) (a).size()

#define oo 20122007
#define eps 1e18
#define name "a."
#define maxn 105

int n, tt[200005];
deque<int> a;

int main() {
    #ifndef ONLINE_JUDGE
    fo(name"inp", "r", stdin);
    fo(name"out", "w", stdout);
    #endif // ONLINE_JUDGE
    sci(n);
    fto(i, 1, n) {
        int x; sci(x);
        a.push_back(x);
    }
    fto(i, 1, n) {
        int x; sci(x);
        int ans = 0;
        if (tt[x] != 0) {
            printf("0 ");
            continue;
        }
        while (a.front() != x) ++tt[a.front()], a.pop_front(), ++ans;
        a.pop_front();
        ++ans;
        printf("%d ", ans);
    }
    return 0;
    }
