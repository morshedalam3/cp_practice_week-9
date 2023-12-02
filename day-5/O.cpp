#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
       int n, m, sx, sy, d;
        cin >> n >> m >> sx >> sy >> d;
        if ((sy - d <= 1 || sx + d >= n) && (sy + d >= m || sx - d <= 1))
        {
            cout<<-1<<endl;
        }
        else{
            cout<<n+m-2<<endl;
        }
    }
      
    return 0;
}