#include <iostream>
using namespace std;
int main () {
	string hujan;
	string cuaca; //hujan
	
	cout<<"Apakah hari ini hujan?" <<endl;
	cin>>hujan;
	
	if (hujan == "iya") {
		cout<< "Maka sediakan lah payung" <<endl <<endl;
	} else {
		cout<< "Maka tidak usah sediakan payung" <<endl <<endl;
	}


//if bersarang

	cout<<"Hari ini hujannya gimana?" <<endl;
	cin>>cuaca;
	
	if (cuaca == "deras") {
		cout<<"Berarti jangan keluar dulu";
	} else if (cuaca == "biasa"){
		cout<<"Maka bawalah jas hujan";
	} else {
		cout<<"Oh yaudah";
	}
}

#include <iostream>
using namespace std;

int main() {
	int suhu; //Buat sebuah variabel dengan tipe data integer dengan nama suhu
	
	cout<<"Masukkan suhu air: ";
	cin>>suhu; //Minta input dari user kemudian masukkan ke dalam variabel suhu
	
	if(suhu<=0){
		cout<<"Maka air dalam keadaaan padat"; //jika suhu kurang dari 0 maka ...
	} else if(suhu <=100){
		cout<<"Maka air dalam keadaan cair"; //Jika suhu kurang dari 100 maka...
	}else if(suhu>=100){
		cout<<"Maka air dalam keadaan gas"; // Jika suhu lebih dari 100 maka ...
	}
