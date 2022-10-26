#include <bits/stdc++.h>
#define int long long
int nb, ns, nc, pb, ps, pc, r, ans = 0;
int b = 0, s = 0, c = 0;
void check(int left, int right) {
    int bb, ss, cc;
    if (ans != 0) return ;
    if (left < right) {
        int mid = (left + right + 1) >> 1;
        bb = mid * b - nb > 0 ? mid * b - nb : 0;
        ss = mid * s - ns > 0 ? mid * s - ns : 0;
        cc = mid * c - nc > 0 ? mid * c - nc : 0;
        if (bb * pb + ss * ps + cc * pc <= r) check(mid, right);
        else check(left, mid - 1);
    } else ans = left;
    return ;
}

void solve() {
    std::string str;
    std::cin >> str;
    std::cin >> nb >> ns >> nc;
    std::cin >> pb >> ps >> pc;
    std::cin >> r;
    for (int i = 0; i < (int)str.size(); i++)
        if (str[i] == 'B') b++;
        else if (str[i] == 'S') s++;
        else c++;
    int left = 0, right = 1e14;
    check(left, right);
    std::cout << ans << "\n";
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}