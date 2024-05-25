#include<iostream>
#include<math.h>
#include<algorithm> 
using namespace std;
int main (){
	 int n;
	 cin >> n;
	 int mang[n];
	 for(int i=0;i<sizeof(mang)/sizeof(int);i++){
	 	cin >> mang[i];
	 
	 }

	 cout << endl;
	 int max = mang[0];
	 for(int i=0; i<sizeof(mang)/sizeof(int);i++){
	    if ( mang[i]>max){
	       max = mang[i];
		}
}
	 cout << max;
		 

 return 0; 
}