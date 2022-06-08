#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int r, g, b, R, G, B;

        string s;
        cin >> s;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'r')
            {
                r = i;
            }
            
            else if(s[i] == 'g')
            {
                g = i;
            }

            else if(s[i] == 'b')
            {
                b = i;
            }
            
            else if(s[i] == 'R')
            {
                R = i;
            }
            
            else if(s[i] == 'G')
            {
                G = i;
            }
            
            else if(s[i] == 'B')
            {
                B = i;
            }
        }

        if(r<R && g<G && b<B)
        {
            cout << "YES" << endl; 
        }

        else{

            cout << "NO" << endl;
        }
        
    }
}