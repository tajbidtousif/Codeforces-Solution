#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        int cd_min = abs(c-d);
        int cd_max = abs(c+d);

        int ab_min = abs(a-b);
        int ab_max = abs(a+b);
        int ab_finalmin = ab_min * n;
        int ab_finalmax = ab_max * n;

        if(ab_finalmin>cd_max || ab_finalmax<cd_min)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
