//#include <iostream>
//using namespace std;
//
//int main() {
//	int suhu; //Buat sebuah variabel dengan tipe data integer dengan nama suhu
//	
//	cout<<"Masukkan suhu air: ";
//	cin>>suhu; //Minta input dari user kemudian masukkan ke dalam variabel suhu
//	
//	if(suhu<=0){
//		cout<<"Maka air dalam keadaaan padat"; //jika suhu kurang dari 0 maka ...
//	} else if(suhu <=100){
//		cout<<"Maka air dalam keadaan cair"; //Jika suhu kurang dari 100 maka...
//	}else if(suhu>=100){
//		cout<<"Maka air dalam keadaan gas"; // Jika suhu lebih dari 100 maka ...
//	}
//}

#include <iostream>
using namespace std;

int main () {
	int musim; //Buat sebuah variabel dengan tipe data integer dengan nama musim
	
	cout<<"Masukkan pilihan (1-4) untuk mengetahui musim bulan ini : ";
	cin>>musim; //Meminta input kepada user kemudian di masukkan ke dalam variabel musim
	
	switch(musim){ //switch case, dimana semua case dilakukan satu  tergantung kondisi
		case 1:
			cout<<"Hujan";
			break; //untuk menghentikan pengkondisian
			case 2:
				cout<<"Panas";
				break;
				case 3:
					cout<<"Semi";
					break;
					case 4:
						cout<<"Gugur";
						break;
						default: //apabila pilihan user tidak ada akan memunculkan pesan default
							cout<<"Tidak memilih musim";
	}
}
