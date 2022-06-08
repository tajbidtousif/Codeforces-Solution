#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int tc,b;
    cin>>tc;
    while(tc--){

        cin>> b ;

        if(b%3==0)
        {
            cout<<(b/3)<<" "<<(b/3)+1<<" "<<(b/3)-1<<" "<<endl;
        }
        else if(b%3==1)
        {
            cout<<(b/3)<<" "<<(b/3)+2<<" "<<(b/3)-1<<" "<<endl;
        }
        else{
            cout<<(b/3)+1<<" "<<(b/3)+2<<" "<<(b/3)-1<<" "<<endl;
        }
    }
    return 0;
}