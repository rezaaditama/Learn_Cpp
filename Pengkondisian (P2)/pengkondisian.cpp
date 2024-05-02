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
