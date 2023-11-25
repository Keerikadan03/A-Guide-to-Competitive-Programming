#include <bits/stdc++.h>
using namespace std;

void cd(int n){
    if(n==0){
        return;
    }
    cout<< n<<"\n";
    cd(n-1);        //if this line is swapped with line 8 it will do count up instead of countdown
            //this is because the print is given after all the recursions are called while exiting the function calls.
}

int main(){
    int n = 10;
    cd(n);
    return 0;
}