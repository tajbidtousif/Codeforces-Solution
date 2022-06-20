#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        int a[3];
        
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }

        int diff = (a[0]+a[2])/2;
        int m = diff/a[1];

        if(diff>0 && m!=0 && m*a[1]==diff && (a[0]+a[2])%2==0)
        {
            
            cout << "YES" << endl;
            continue;
        }

        diff = 2*a[1]-a[0];
        m = diff/a[2];

        if(diff>0 && m!=0 && m*a[2]==diff)
        {
            cout << "YES" << endl;
            continue;
        }

        diff = 2*a[1]-a[2];
        m = diff/a[0];

        if(diff>0 && m!=0 && m*a[0]==diff)
        {
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }

    return 0;
}