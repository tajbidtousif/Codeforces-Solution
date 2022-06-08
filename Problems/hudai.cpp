#include <bits/stdc++.h> 
using namespace std;

int main() {

  int n;
  cin>>n;
  string a;
  cin>>a;

  int newton = 0,tesla = 0;

  for(int i=0;i<n;i++){
    if(a[i]=='N'){
      newton++;
    }
    else if(a[i] == 'T'){
      tesla++;
    }
  }
  
  if(newton < tesla){
    cout<<"Tusla";
  }
  else{
    cout<<"Nutan";
  }
  return 0;
}