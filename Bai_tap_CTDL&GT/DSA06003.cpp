#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        a.assign(n, 0);
        for(auto &i : a)
        {
            cin >> i;
        }
        int ans = 0;
        for(int i=0; i<n-1; ++i)
        {
            int pos = i;
            for(int j=i+1; j<n; ++j)
            {
                if(a[pos] > a[j])
                {
                    pos = j;
                }
            }
            if(pos != i)
            {
                swap(a[pos], a[i]);
                ++ans;
            }
        }
        cout << ans << endl;
    }
    return 0;
}