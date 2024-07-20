#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	
	// dùng hàm sort cách không hữu dụng khi học 
	int n;
	cin >>n;
	int arr[n];
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		cin >> arr[i];
	}
	sort(arr,arr+sizeof(arr)/sizeof(int));
	cout << " mang sau khi sap xep la :";	
	for(int i:arr){
		cout <<i << " " ;
	}	
}