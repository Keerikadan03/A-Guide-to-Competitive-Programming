#include <bits/stdc++.h>
using namespace std;

int cd(int n){
    if(n==1){
        return 1;
    }else{
        cout<< n<<"\n";
        return cd(n-1);
    }
}

int main(){
    int n = 10;
    cout<<cd(n);
    return 0;
}