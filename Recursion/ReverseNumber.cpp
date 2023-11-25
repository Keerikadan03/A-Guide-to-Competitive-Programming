#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    if(n%10 == n){
        return n;
    }
    cout<<n%10;
    return reverse(n/10);
}

int main(){
    cout<<reverse(951357);
    return 0;
}