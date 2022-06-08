#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        
    int n;
    cin >> n;

    int mod = n%2020;
    int div = n/2020;

    if(mod<=div)
    {
        cout << "YES" << endl;
    }

    else {
        cout << "NO" << endl;
    }

 }

}