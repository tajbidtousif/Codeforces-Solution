#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        long long int n;
        cin >> n;
        if(n%2!=0)
        {
        cout << (n/2)-1 <<" " << n/2 <<" " << 2 << endl;
        }
        
        else{
            cout << (n/2)-1 <<" " << n/2 <<" " << 1 << endl;
        }

    }

}