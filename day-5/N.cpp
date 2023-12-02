#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
         int n;
    cin>>n;
    vector<vector<char>> v(2,vector<char>(n));
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    bool row1=true,row2=true;
    for(int i=0;i<n;i++){
        if(v[0][i]=='B' && v[1][i]=='B'){
            swap(row1,row2);
        }
        else if(v[0][i]=='B'){
            row2=false;
        }
        else if(v[1][i]=='B'){
            row1=false;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(row1 || row2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
      
    return 0;
}