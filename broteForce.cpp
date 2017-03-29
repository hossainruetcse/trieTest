#include<bits/stdc++.h>

using namespace std;


int main(){

    int n;
    long long a[5005];
    long long pre[5005];
    long long post[5005];
    freopen("a.txt","r",stdin);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    pre[0]=0;
    post[n+1]=0;
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]^a[i];
    }
    for(int i=n;i>0;i--){
        post[i]=post[i+1]^a[i];
    }
    long long ans=0ll;
    for(int i=1;i<=n+1;i++){
        for(int j=0;j<i;j++){
            ans=max(ans,pre[j]^post[i]);
        }
    }
    cout<<ans<<endl;

}
