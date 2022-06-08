#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n,r,b;
        string str[105],str2[105];
        cin >> n >> r >> b;

        for(int i=0; i<r; i++)
        {
           str[i] = 'R';
           
        }
        
        for(int i=0; i<b; i++)
        {
            str2[i] = 'B';
        }
        
        for(int i=0; i<n; i++)
        {
           cout << str[i] << str2[i];
        }

    }

    return 0;
}