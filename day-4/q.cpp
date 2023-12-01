#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int res = 0;
        int res2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                res+=max(a[i],res2);
            }
            if (s[i] == '0' || a[i]<res2 )
            {
                res2=a[i];
            } 
        }
        cout<<res<<endl;
    }
      
    return 0;
}