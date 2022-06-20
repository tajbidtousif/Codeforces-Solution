#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    { 
        long long int k, n;
        cin >> k >> n;
        
        string st;
        cin >> st;

        int cnt = 0, ans=0;

        for(int i=0; i<k; i++)
        {
            if(st[i]=='W')
            {
                cnt++;
            }
        }
        ans = cnt;
        
        
        for(int i=k; i<n; i++)
        {
            if(st[i]=='W') cnt++;
            if(st[i-k]=='W') cnt--;
             ans = min(ans, cnt);
        }
       
       cout << ans << endl;

    }
    return 0;
}
