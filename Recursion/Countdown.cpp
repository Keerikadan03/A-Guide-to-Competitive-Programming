#include <bits/stdc++.h>
using namespace std;

int cd(int n){
    if(n==1){
        cout<< n;
        return 1;
    }else{
        cout<< n<<"\n";
        return cd(n-1);
    }
}

int main(){
    int n = 10;
    cd(n);
    return 0;
}