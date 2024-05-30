//#include <iostream>
//using namespace std;
//
//int main () {
//	
//	int tinggi;
//	
//	cout<<"Masukkan tinggi segitiga : ";
//	cin>>tinggi;
//	
//	for (int i = 1; i <= tinggi; i ++){
//		for (int a = 1; a <= i; a++) {
//			cout<<" *";
//		} cout << endl;
//	} 
//	for (int i = tinggi; i >= 1; i--) {
//		for (int j = i; j > 1; j--) {
//			cout<<" *";
//	}
//		cout<<endl;
//	}
//}


#include <iostream>
using namespace std;

int main () {
	
	int i, n, bil;
	
	cout<<"Berapa kali pengulangan : ";
	cin >> n;
	
	i = 1;
	
	while(i<=n){
		cout<<"Masukan bilangan ke " << i << " : ";
		cin>>bil;
		
		if(bil%2==0){
			cout<<"Bilangan adalah genap" << endl;
		} else {
			cout<<"Bilangan adalah ganjil" << endl;
		}
		i++;
	}
}
