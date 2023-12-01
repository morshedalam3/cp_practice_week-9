#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
         int n;
        cin >>n ;
        vector<int> v(n);
        for(int i =0;i <n;i++)
            cin >> v[i];
        if(n == 1)
        {
            cout << 1 <<endl;
            continue;
        }
        vector<int> temp = {v[0]};
        for(int i = 1;i < n - 1;i++)
        {
            if(temp.back() <= v[i] && v[i] <= v[i + 1] || temp.back() >= v[i] && v[i] >= v[i + 1])
                continue;
            temp.push_back(v[i]);
        }
        temp.push_back(v[n - 1]);
        if(temp.size() == 2 && temp[0] == temp[1])
        {
            cout << 1<<endl;
        }
        else cout << temp.size() <<endl;
    }
      
    return 0;
}