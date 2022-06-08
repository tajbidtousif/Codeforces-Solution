#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int tc;
    cin >> tc;

    while(tc--)
    {
    long long a,b;
    cin >> a >> b;
    if(a==0)
    {
        cout << 1 << endl;
        
    }
    else{

    a = a*1;
    b = b*2;
    long long s = a+b;
    cout << s+1 << endl;  
    
    }

    }    
}