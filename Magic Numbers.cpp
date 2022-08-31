#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    string s;
    ll i;
    bool f = true;

    cin >> s;

    for( i=0; i<s.length();)
    {
        if(s[i] == '1' && s[i+1] == '4' && s[i+2] == '4')
        {
            i+=3;
        }
        else if(s[i] =='1' && s[i+1] == '4')
        {
            i += 2;
        }
        else if(s[i] == '1')
        {
            i+=1;
        }
        else
        {
            f = false;
            break;
        }
    }

    if(f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
   
    return 0;
}
