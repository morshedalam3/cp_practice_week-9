#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+3];
        ll sum=0;
        vector<ll>v1,v2;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        v1.push_back(ar[0]);
        v2.push_back(ar[0]);
        for(int i=1;i<n;i++)
        {
            int x=v1.size()-1;
            v1.push_back(v1[x]+ar[i]);
            if(v2[x]>=ar[i])v2.push_back(v2[x]-ar[i]);
            else v2.push_back(v2[x]+ar[i]);
        }
        if(v1!=v2)cout<<-1<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                cout<<v1[i]<<" ";
            }
            cout<<endl;
        }
    }  
    return 0;
}