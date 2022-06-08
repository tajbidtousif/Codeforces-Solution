#include<bits/stdc++.h>
using namespace std;

int main(){

    int tc;
    cin>>tc;
    for(int x=0; x<tc; x++)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
                cin>>ar[i];
    }sort(ar,ar+n, greater<int>());
        if(ar[0]>ar[1]+1)
        cout<<"NO"<<endl;
        else if(n==1&&ar[0]>1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}