#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		cin >> arr[i];// nhap gia tri pt trong mang
	}
	cout << " pt trong mang la : " << endl;
	for(int i : arr){
		cout << i << " ";
	}
	int sum =0;
	for(int i=0;i<n;i++){
		sum = arr[0]+arr[n-1] ;//  tinhs tong pt dau va cuoi
		cout << endl;
	}
	cout << sum ;
	
}