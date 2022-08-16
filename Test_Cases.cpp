#include<bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    int n=rand()%200000 +1;
    int q=rand()%200000 +1;
    cout<<n<<" "<<q<<endl;
    for(int i=0; i<n; i++){
        cout<<rand()%1000<<" ";
    }
    cout<<endl;
    for(int i=0; i<q; i++){
        int r=rand()%n+1;
        int l=rand()%r+1;
        cout<<l<<" "<<r<<endl;
    }
    return 0;
}