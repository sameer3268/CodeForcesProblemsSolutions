#include<bits/stdc++.h>
 
using namespace std;
 
long long getOne(long long a, long long m)
{
    return m / a;
}
 
long long getTwo(long long a, long long b, long long m)
{
    return m / lcm(a, b);    
}
 
long long getThree(long long a, long long b, long long c, long long m)
{
    return m / lcm(lcm(a, b), c);
}
 
long long get(long long a, long long b, long long c, long long m)
{
    long long c1 = getOne(a, m);
    long long c2 = getTwo(a, b, m) + getTwo(a, c, m);
    long long c3 = getThree(a, b, c, m);
    return (c1 - c2 + c3) * 6 + (c2 - 2 * c3) * 3 + c3 * 2;
}
 
void solve()
{
    long long a, b, c, m;
    cin >> a >> b >> c >> m;                                                                      
    cout << get(a, b, c, m) << " " << get(b, a, c, m) << " " << get(c, a, b, m) << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
        solve();
    return 0;
}