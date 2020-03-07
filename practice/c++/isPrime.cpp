#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    
    if(n < 2) return false;
    for(auto j=2; j<n; j++){
        
        if(n%j == 0)
        return false;
    }
    return true;
}


int main(){
    int n;
    cin>>n;
    cout<<isPrime(n)<<"\n";
    

}