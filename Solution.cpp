#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int a[n];
    int b[n]={0};
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int shoot[n]={0};
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        shoot[l]++;
        if(r<n-1){
            shoot[r+1]--;
        }
    }
    int temp=0;
    for(int i=0; i<n; i++){
        temp+=shoot[i];
        b[i]=temp;
    }
    sort(b,b+n);
    long long int ans=0;
    for(int i=0; i<n; i++){
        ans+=(a[i]*b[n-1-i]);
    }
    cout<<ans<<endl;
    return 0;
}