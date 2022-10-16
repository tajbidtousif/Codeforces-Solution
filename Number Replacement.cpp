#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;

        int a[n];
        string s;

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        cin >> s;


        int no = 0;

        for(int i=0; i<n; i++)
        {

            int temparrayvalue = a[i];
            int tempstringvalue = s[i]; // 2 3 2 4 1   cacta

            for(int j=0; j<n; j++)
            {

                if(temparrayvalue == a[j] && tempstringvalue != s[j])
                {

                    //cout << temparrayvalue << "   " << tempstringvalue << "  " << endl;
                    no++;
                    break;
                }

            }

            if(no != 0)
            {
            cout << "NO" << endl;
            break;
            }

        }

        if(no == 0)
        {
            cout << "YES" << endl;
        }

    }

    return 0;

}
