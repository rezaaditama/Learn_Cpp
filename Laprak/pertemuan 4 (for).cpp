//segitiga siku-siku terbalik
#include <iostream>
using namespace std;

int main(){
	int tinggi;
	cout<<"masukan tinggi segitiga: ";
	cin>> tinggi;

	for (int i= tinggi; i>= 1; i--) {
		for (int j= i; j>=1; j--) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;

}

//segitiga sama kaki
#include <iostream>
using namespace std;

int main(){
	int batas;
	
	cout<<"membuat pola segitiga sama kaki \n\n";
	cout<<"inputan batas segitiga :";
	cin>> batas;
	cout<<endl;
	
	for(int i = 1; i<= batas; i++){
		for (int j = batas; j > i; j--){
			cout<<" ";
		}
		
		for (int k= 1; k <= (2 * i - 1); k++){
			cout<<"*";
		}
		cout<<endl;
	}
	
}
		
		
#include <iostream>
using namespace std;

int main () {
	
	int tinggi;
	
	cout<<"Masukkan tinggi segitiga : ";
	cin>>tinggi;
	
	for (int i = 1; i <= tinggi; i ++){
		for (int a = 1; a <= i; a++) {
			cout<<" *";
		} cout << endl;
	} 
	for (int i = tinggi; i >= 1; i--) {
		for (int j = i; j > 1; j--) {
			cout<<" *";
	}
		cout<<endl;
	}
}


