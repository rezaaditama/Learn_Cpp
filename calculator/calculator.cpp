#include <iostream> //perintah wajib untuk memanggil library
using namespace std;  

int main() { 
 int tambah,kali,kurang;  //Membuat variabel dengan tipe intenger (angka) yang bernama tambah, kali, kurang
 double bagi, a,b; //Membuat variabel dengan tipe double (angka dan koma) yang bernama a, b, bagi
 
 cout<<"=========================="<<endl; //cout<< untuk mengeluarkan output, cin>> untuk memasukkan input 
 cout<<"|KALKULATOR SEDERHANA C++|"<<endl; //endl berfungsi untuk menambahkan enter
 cout<<"=========================="<<endl<<endl; // << mengeluarkan nilai yang ada pada variabel, >> memasukkan nilai ke variabel
 
 cout<<"Masukkan Nilai Pertama = ";cin>>a; //cin>> a (masukkan nilai dan simpan di variabel a) 
 cout<<"Masukkan Nilai Kedua = ";cin>>b;  //cin>> b (masukkan nilai dan simpan di variabel b)
 
 tambah = a + b; //membuat variabel tambah (menjumlahkan variabel a dan variabel b)
 kurang = a - b; //membuat variabel kurang (mengurangi variabel a dan variabel b)
 kali   = a * b; //membuat variabel kali (mengalikan variabel a dan variabel b)
 bagi   = a / b; //membuat variabel bagi (membagi variabel a dan variabel b)
 
 
 
 cout<<"====================="<<endl;
 cout<<"Hasil dari penjumlahan    : "<<tambah<<endl; //mengeluarkan nilai dari variabel tambah
 cout<<"Hasil dari pengurangan    : "<<kurang<<endl; //mengeluarkan nilai dari variabel kurang
 cout<<"Hasil dari perkalian      : "<<kali<<endl; //mengeluarkan nilai dari variabel kali
 cout<<"Hasil dari Pembagian      : "<<bagi<<endl; //mengeluarkan nilai dari variabel bagi
 return 0; //untuk mengembalikan nilai (default)
}

//cin = memasukkan input (masukan)
//cout = mengeluarkan output
//>>a = masukkan ke dalam variabel a
//<<a = keluarkan isi dari variabel a
//endl = menambahkan garis baru atau enter (endline)
//int = intenger (angka)
//double = pecahan atau desimal


