#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int mang2c[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> mang2c[i][j];
		}
	}
	int sum = 0;
	for(int i=0;i<n;i++){
		for(int j =0;j<m;j++){
		 sum =sum+ mang2c[i][j];
		}
	}
	cout << sum ;
	return 0;
}