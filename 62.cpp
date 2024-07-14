#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n ;
	int arr[n];
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		cin >> arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			cout << arr[i] << " ";
		}
	}
	return 0;
}