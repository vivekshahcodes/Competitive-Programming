#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int a,b,c,d,e;

    cin>>a>>b>>c>>d>>e;

    int ans = 0;

    for(int i=1;i<=e;i++){
        if(i%a==0||i%b==0||i%c==0||i%d==0){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
