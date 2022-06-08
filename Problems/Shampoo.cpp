#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v, a, b, c, tousif=0;

    cin >> v >> a >> b >> c;

    while(v>=0)
    {
        if(tousif%3==0)
        {
            if(v<a)
            {
                cout << "F" << endl;
                return 0;
                
            }
            v-=a;
            tousif++;
        }
        else if(tousif%3==1)
        {
            if(v<b)
            {
                cout << "M" << endl;
                return 0;
                
                }
            v-=b;
            tousif++;
        }
        else{

            if(v<c)
            {
                cout << "T" << endl;
                return 0;
                
            }
            v -= c;
            tousif++;
        }
    }

}