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
       int n;
    cin >> n;
 
    vector<int> permutation;
    vector<bool> used(n + 1, false);
 
    int cur = 1;
    for (int i = 2; i <= n; i++) {
        if (!used[i]) {
            permutation.push_back(i);
            used[i] = true;
            cur = i;
            while (cur * 2 <= n) {
                permutation.push_back(cur * 2);
                used[cur * 2] = true;
                cur *= 2;
            }
        }
    }
    cout << 1 << " ";
    for (int num : permutation) {
        cout << num << " ";
    }
    cout << endl;
}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}