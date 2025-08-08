#include <bits/stdc++.h>
using namespace std;
#define ll long long

int ans(string s, int x) {
    int p1 = x - 1;
    while(p1 >= 0 && s[p1] == '.') {
        p1--;
    }
    int an = p1 + 2;
    p1 = x + 1;
    while(p1 < s.size() && s[p1] == '.') {
        p1++;
    }
    an = min(an, (int)s.size() - p1 + 1);
    return an;
}
 
void solve()
{
    ll n,x;
    cin >> n >> x;
    x--;
    string s;
    cin >> s;
    int ans1 = 0, ans2 = 0;
    {
        string t = s;
        int p1 = x + 1;
        while(p1 < n && s[p1] == '#') {
            p1++;
        }
        if(p1 != n) {
            t[p1] = '#';
            ans1 = ans(t,x);
        }
    }
    {
        string t = s;
        int p1 = x-1;
        while(p1 >= 0 && s[p1] == '#') p1--;
        if(p1 != -1) {
            t[p1] = '#';
            ans2 = ans(t,x);
        }
    }
 
    cout << max(ans1,ans2) <<endl;
}
 
int main()
{

 
    long long t = 1;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
 

    return 0;
}