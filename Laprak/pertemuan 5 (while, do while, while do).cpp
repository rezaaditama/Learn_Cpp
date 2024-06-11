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

#include <iostream>
using namespace std;

int main (){
	
	int i;
	
	i= 10;
	
	while(i<5){
		
		cout<<i<<" ini adalah pengulangan while"<<endl;
		i++;
		
	}
}

#include <iostream>
using namespace std;

int main(){
	
	//program untuk menentukan bilangan genap atau ganjil
	
	int i,n,bil;
	
	cout<<"berapa kali pengulangan? : ";
	cin>>n;
	
	i= 1;
	
	while(i<=n){
		cout<<"Masukan bilangan ke "<<i<<" : ";
		cin>>bil;
		
		if(bil%2==0){
			cout<<"Bilangan adalah genap"<<endl;
		}else{	
			cout<<"Bilagan adalah ganjil"<<endl;
		}
		i++;
	}
}

#include <iostream>
using namespace std;

int main(){
	
	int i;
	
	i= 10;
	do{
		cout<<i<<"."<<" ini adalah do while"<<endl;
		i++;
	}
	
	while(i<5);
}



