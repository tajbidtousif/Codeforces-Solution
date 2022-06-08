#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,i,a[12];
    int sum=0,cnt=0;

    cin >> k;

    for(i=0; i<12; i++)
    {
        cin >> a[i];
    }

    sort(a,a+12);

    if(k==0)
    {
        cout << "0" << endl;
    }
    else
    {
        for(i=11; i>=0; i--)
        {
            sum+=a[i];

            if(sum>=k)
                break;
        }
        if(sum<k)
        {
            cout << "-1" << endl;
        }
        else
            cout << 12-i << endl;
    }

    return 0;
}
