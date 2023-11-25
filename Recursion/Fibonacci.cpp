#include <bits/stdc++.h>
using namespace std;

int fs(int n){
	if(n<2){
		return n;
	}
	return fs(n-1) + fs(n-2);
}

int main(){
	int n = 7;
	cout<<fs(n);
	return 0;
}