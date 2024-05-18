#include<iostream>
using namespace std;
int main(){
	int mang[10];// khai báo mang có độ rộng là 10 phần tử index từ 0 -> 9;
	int sum =0;
	cout << "Hay nhap gia tri cua mang :" << endl;
	for(int i =0; i<sizeof(mang)/sizeof(int);i++){ // duyệt thứ tự i nhỏ hơn số phần tử trong mảng 
		cin >> mang[i]; // nhập giá trị cho mảng lần lượt từ thứ tự i trong mảng 
		sum =sum+mang[i];// tính tổng 
		
	}
	cout << " Tong cua cac gia tri trong mang la: ";
	cout << sum ;
	return 0;
}