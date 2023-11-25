#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n%10 == n){
        return n;
    }
    return (n%10) + sum(n/10);
}

int prod(int n){
    if(n%10 == n){
        return n;
    }
    return (n%10) * prod(n/10);
}

int main(){
    int n = 0;
    cout<<prod(n)<<"\n";
    cout<<sum(n)<<"\n";
    return 0;
}