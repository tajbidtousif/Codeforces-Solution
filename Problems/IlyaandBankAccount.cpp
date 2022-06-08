#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,l,bl,ans;

    cin >> a;
    
    if(a>0)
    {
        cout << a << endl;
    }

    else
    {
        a = abs(a);

        l = a % 10;
        a /= 10;
        bl = a % 10;

        if(l<bl)
        {
            ans = (a / 10) * 10 + l;
        }
        
        else{
            ans = a;
            
        }

        cout << -ans << endl;

        

    }
}