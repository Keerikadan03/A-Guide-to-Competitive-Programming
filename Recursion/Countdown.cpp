#include <bits/stdc++.h>
using namespace std;

void cd(int n){
    if(n==0){
        return;
    }
    cout<< n<<"\n";
    cd(n-1);
}

int main(){
    int n = 10;
    cd(n);
    return 0;
}