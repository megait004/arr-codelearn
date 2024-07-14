#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin >> n;
	int arr[n];
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		cin >> arr[i];
		
	}
	cin >> k;
	int dem =0;
	for(int i=0;i<n;i++){
		if(arr[i]==k){
			dem =dem+1;
		}
	}
	cout << dem;
	return 0;
}