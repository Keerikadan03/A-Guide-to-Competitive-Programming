#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n%10 == n){
        return n;
    }
    return (n%10) + sum(n/10);
}

int main(){
    int n = 9;
    cout<<sum(n);
    return 0;
}