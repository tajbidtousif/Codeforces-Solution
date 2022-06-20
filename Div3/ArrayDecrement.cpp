#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n+7], b[n+7];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];

        if(n==1)
        {
            if(a[0]>=b[0])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }

        bool tamp = true;
        int c = 0;
        int tmp = 0;

        for(int i = 0; i < n; i++)
        {
            if(b[i]!=0)
            {
                c = a[i]-b[i],tmp = 1;
                break;
            }
        }

        for(int i =0; i < n; i++)
        {
            if((tmp && b[i]==0 && a[i]>c) || c<0)
            {
                tamp = false;
                break;
            }
            else if((tmp && b[i]==0) && a[i]<=c)
                continue;
            else if(a[i]-b[i]!=c)
            {
                tamp = false;
                break;
            }

        }
        if(tamp || tmp == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
