#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int a, b, ans;
        cin >> a >> b; // 5 8

        int mid = (a+b)/2; //6
        if(a>b)
        {
             ans = abs((mid-b)-(a-mid)); //
        }
        else{
             ans = abs((mid-b)-(mid-a));
        }


        cout << ans << endl;
    }

    return 0;
}
