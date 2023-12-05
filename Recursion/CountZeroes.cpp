#include <bits/stdc++.h>
using namespace std;

int count(int n, int sum){
    
    if(n == 0){
        return sum;
    }
    if(n%10 == 0){
        return count(n/10, sum+1);
    }
    return count(n/10,sum);
    
}

int main(){
    int sum = 0;
    int n = 50301;
    cout<<count(n, sum);
    return 0;
}