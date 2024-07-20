#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	int sum =0;
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		cin >> arr[i];
	}
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
	 	if(arr[i]>0&&arr[i]%2!=0){
	 		sum +=arr[i];
		 }
	
	}
		cout << sum; 
	return 0;
}