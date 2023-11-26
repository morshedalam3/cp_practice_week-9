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
 int mask(int x) {
    int msk = 0;
    while(x) {
        msk++;
        x = (x >> 1);
    }
    return msk;
}

void doit(){
    int n;cin>>n;
    int a[n];
    unordered_map<int,int> m;
        for(int i=0; i<n; i++) cin>>a[i];

        for(int i=n-1; i>=0; i--)
            a[i] = mask(a[i]);
        
        for(int i=n-1; i>=0; i--) m[a[i]]++;
        
        ll ans = 0;
        for(int i=0; i<n; i++) {
            m[a[i]]--;

            ans += (ll)m[a[i]];
        }
        cout<<ans<<endl;
}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}