/****************Bis'Millah Hir Rah'Manir Rahim ***************
*                    Author: Morshed Alam                     *
*                       SyntaxSorcerer                        *
***************************************************************
problem link: 
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
//#define M_PI (2*acos(0))
#define MAX_N 10001
#define MOD 1000000007
#define apo(a,b) sqrtl( powl(a.x-b.x,2) + powl(a.y-b.y,2) )
#define ldeq(a,b) ( fabsl(a - b) < 0.00000000007 )
#define rep(a,b) for(int i=a; i<=b; i++)
#define repv(a,b,i) for(int i=a; i<=b; i++)
#define mmod(a,b) ( (a >= 0) ? ((a%b)%b) : ( ( ( a + ( ((abs(a)+b)/b) * b ) ) % b ) % b ) )
#define int ll
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
#define PB push_back
using namespace std;
int occ[26];
 
void doit(){
    ll n, mn2 = LONG_LONG_MAX, mn1 = LONG_LONG_MAX; cin >> n;
    vector<vector<ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            ll x; cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < n; i++) sort(v[i].begin(), v[i].end());
    for (int i = 0; i < n; i++)
    {
        mn2 = min(v[i][1], mn2);
        mn1 = min(v[i][0], mn1);
    }
    ll ans = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i][1] == mn2 and count == 0) count++;
        else {ans += v[i][1];} 
    }
    ans += mn1;
    cout << ans << endl;
}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}