#include<bits/stdc++.h>
using namespace std;

#define sieveOf(n) (vector<bool> v(n+1); fill(v.begin(), v.end(), true); for(int i=2; i<sqrt(n); i++) if(v[i]) for(int j=i*i; j<=n; j+=i) v[j]= false; for(int i=2; i<=n; i++) if(v[i]) cout<<i<<"\n";)

void sieve(int n){
    vector<bool> v(n+1);
    fill(v.begin(), v.end(), true);
    for(int i=2; i<sqrt(n); i++)
        if(v[i])
            for(int j=i*i; j<=n; j+=i)
                v[j]= false;
    for(int i=2; i<=n; i++)
        if(v[i]) cout<<i<<"\n";
}

int main(){

    int n;
    cin>>n;
    sieve(n);
}