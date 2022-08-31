#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int s, ans = 0, temp = 0;
        cin >> s;

        while(s>=0)
        {
            if(s>9)
            {
                temp = (s-10) + 1;
                ans+=10;
            }

            if(s<=9)
            {
                ans += s;
                cout << ans << endl;
                break;
            }
        }

    }


    return 0;
}
