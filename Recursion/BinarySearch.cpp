#include <bits/stdc++.h>
using namespace std;

int bs(int arr[], int target, int s, int e){
    if(s>e){
        return -1;
    }
    int m = s + (e-s)/2;

    if(arr[m] == target){
        return m;
    }
    if(target > arr[m]){
        return bs(arr, target, m+1, e);
    }else{
        return bs(arr, target, s, m-1);
    }
}

int main(){
    int arr[] = {0,2,4,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    cout<<bs(arr, target, 0, n-1);
}