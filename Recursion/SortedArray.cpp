#include <bits/stdc++.h>
using namespace std;

int cs(vector <int> arr,int s){
    int e = arr.size()-1;
    if(s>=e){
        cout<<"sorted array";
        return 1;
    }
    if(arr[s]> arr[s+1]){
        cout<<"the array is unsorted at the index: ";
        return s;
    }
    return cs(arr,s+1);
}

bool sorted(vector <int> arr, int index){
    if(index == arr.size()-1){
        return true;
    }
    return arr[index] < arr[index+1] && sorted(arr, index+1);
}

int main(){
    vector<int> arr= {1,2,3,4};
    int e = arr.size();
    cout<< cs(arr, 0)<<endl;
    cout<<sorted(arr, 0);
    return 0;
}