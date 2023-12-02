#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
      while (t--)
      {
        int n;
        cin >> n;
        int ar[n];
        map<int, int> mpp;
       for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mpp[ar[i]] = i;
        }
        int mid1 = ((n + 1) / 2), mid2 = (n + 2) / 2;
        int ind1 = (mpp[mid1]), ind2 = mpp[mid2];
        int op = (n / 2);
        if (is_sorted(ar, ar + n))
        {
            cout << 0 << endl;
        }
        else
        {
            if (n % 2)
            {
                if (((mpp[mid1 - 1] < ind1) && (ind1 < mpp[mid1 + 1])))
                {
                    mid1--;
                    mid2++;
                    ind1 = mpp[mid1];
                    ind2 = mpp[mid2];
                }
                else
                {
                    cout << op << endl;
                    continue;
                }
            }
 
            {
                int prev1 = ind1, prev2 = ind2;
                while ((ind1 <= prev1) && (prev2 <= ind2) && (prev1 < prev2))
                {
                    prev1 = ind1;
                    prev2 = ind2;
                    op--;
                    mid1--;
                    mid2++;
                    ind1 = mpp[mid1];
                    ind2 = mpp[mid2];
                    if (mid1 == 0)
                    {
                        break;
                    }
                }
                cout << op << endl;
            }
        }
      }
      
    return 0;
}