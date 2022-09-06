#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int tc;
    cin >> tc;N

     while(tc --) {
        int n;
        cin >> n;
        int count = 0;
        while(n) {
            if (n < 10) {
                count += n;
                n = 0;
            } else {
                int s = n / 10;
                count += s * 10;
                n %= 10;
                n += s;
            }
        }
        cout << count << endl;
    }

    return 0;
}
