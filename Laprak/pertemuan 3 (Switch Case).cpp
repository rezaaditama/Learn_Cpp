//#include <iostream>
//using namespace std;
//
//int main () {
//	int musim; //Buat sebuah variabel dengan tipe data integer dengan nama musim
//	
//	cout<<"Masukkan pilihan (1-4) untuk mengetahui musim bulan ini : ";
//	cin>>musim; //Meminta input kepada user kemudian di masukkan ke dalam variabel musim
//	
//	switch(musim){ //switch case, dimana semua case dilakukan satu  tergantung kondisi
//		case 1:
//			cout<<"Hujan";
//			break; //untuk menghentikan pengkondisian
//			case 2:
//				cout<<"Panas";
//				break;
//				case 3:
//					cout<<"Semi";
//					break;
//					case 4:
//						cout<<"Gugur";
//						break;
//						default: //apabila pilihan user tidak ada akan memunculkan pesan default
//							cout<<"Tidak memilih musim";
//	}
//}

//#include <iostream>
//using namespace std;
//
//int main () {
//	int musim; //Buat sebuah variabel dengan tipe data integer dengan nama musim
//	int a;
//	int b;
//	
//	cout<<"Masukkan pilihan (1-4) untuk mengetahui musim bulan ini : ";
//	cin>>musim; //Meminta input kepada user kemudian di masukkan ke dalam variabel musim
//	
//	switch(musim){ //switch case, dimana semua case dilakukan satu  tergantung kondisi
//		case 1:
//			cout<<"Hujan";
//			break; //untuk menghentikan pengkondisian
//			case 2:
//				cout<<"Panas";
//				break;
//				case 3:
//					cout<<"Semi";
//					break;
//					case 4:
//						cout<<"Gugur";
//						break;
//						default: //apabila pilihan user tidak ada akan memunculkan pesan default
//							cout<<"Tidak memilih musim";
//	}
//}

//#include <iostream>
//using namespace std;
//
//int main () {
//	int a; 
//	int b;
//	int hasil;
//	int aritmatika;
//	
//	cout<<"Masukkan angka pertama : ";
//	cin>>a;
//	cout<<"Masukkan angka kedua : ";
//	cin>>b;
//	cout<<"Masukkan operasi aritmatika (1-4) : ";
//	cin>>aritmatika;
//	
//	switch(aritmatika){
//		case 1:
//			hasil = a + b;
//			cout<<hasil;
//			break;
//			case 2:
//				hasil = a - b;
//				cout<<hasil;
//				break;
//				case 3:
//					hasil = a * b;
//					cout<<hasil;
//					break;
//					case 4:
//						hasil = a / b;
//						cout<<hasil;
//						break;
//						default :
//							cout<<"Input yang dimasukkan salah";
//				
//	}
//}



#include <iostream>
using namespace std;

int main () {

	int makanan;
	
	cout<<"Masukkan angka (6-9) untuk memilih makanan : ";
	cin>>makanan;
	
	switch(makanan){
		case 6:
			cout<<"Bebek Goreng";
			break;
			case 7:
				cout<<"Lele Bakar";
				break;
				case 8:
					cout<<"Salmon Panggang";
					break;
					case 9:
						cout<<"Kambing Guling";
						break;
						default :
							cout<<"Input yang dimasukkan salah";
				
	}
}

