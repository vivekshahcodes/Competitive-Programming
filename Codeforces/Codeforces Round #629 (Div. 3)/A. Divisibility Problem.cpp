#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n,k;

    cin>>n>>k;

    if(n%k==0){
        cout<<0<<endl;
    }else{
        cout<<k-(n%k)<<endl;
    }

  }

return 0;

}
