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
	// cách 2 : không sử dùng hàm 
	int n;
	cin >>n;
	int arr[n];
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		cin >> arr[i];
	}
     for(int i=0 ;i<n;i++){
     	for(int j=i+1;j<n;j++){
     	int temp; // day la bien trung gian de hoan doi gia tri
     	if(arr[i]>arr[j]){
     		// neu nhu arr[i] > arr[j] thi hoan doi gia tri cua arr[i] va arr[j]
     		temp = arr[i];
     		arr[i] = arr[j];
     		arr[j] = temp;
		                }
		                  }
	                           }	
	 for(int i=0; i<n;i++){
	 	cout << arr[i] << " ";
	 }
	 return 0;
}
	
}
