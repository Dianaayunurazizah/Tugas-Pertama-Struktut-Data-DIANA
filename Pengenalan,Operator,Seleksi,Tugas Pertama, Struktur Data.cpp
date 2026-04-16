#include <iostream>
using namespace std;

int main(){
	/* pengenalan */
	string kata1= "Pengenalan";
	cout<<"1. "<<kata1<<endl;
	int a=10;
	char b='B';
	string  nama_aku= "Diana";
	float c=1.5;
	bool d=0;
	cout<<"TAMPILKAN VARIABEL a \t\t: "<<a<<endl;
	cout<<"TAMPILKAN VARIABEL b \t\t: "<<b<<endl;
	cout<<"TAMPILKAN VARIABEL nama \t: "<<nama_aku<<endl;
	cout<<"TAMPILKAN VARIABEL c \t\t: "<<c<<endl;
	cout<<"TAMPILKAN VARIABEL d \t\t: "<<d<<endl;
	
	/* operator */
	string kata2= "Operator";
	cout<<"2. "<<kata2<<endl;
	int A;
	int B;
	int hasil_PERHITUNGAN;
	cout<<"BERAPA NILAI A\t:";
	cin>>A;
	cout<<"BERAPA NILAI B\t:";
	cin>>B;
	hasil_PERHITUNGAN =(A*B)/A;
	cout<<"HASIL PERHITUNGAN (A*B)/A ADALAH = "<<hasil_PERHITUNGAN<<endl;

	/* seleksi */
	string kata3= "Seleksi";
	cout<<"3. "<<kata3<<endl;
	int nilai_siswa;
	cout<<"BERAPA NILAINYA\t :";
	cin>>nilai_siswa;
	if(nilai_siswa>=80){
		cout<<"BAIK SEKALI"<<endl;
	}else if(nilai_siswa>=70){
		cout<<"BAIK \t"<<endl;
	}else {
		cout<<"KURANG BAIK"<<endl;
	}

	/* tugas pertama */
	string kata4= "Tugas Pertama";
	cout<<"4. "<<kata4<<endl;
	string nama_mahasiswa;
	cout<<"NAMA MAHASISWA\t\t:";
	cin>>nama_mahasiswa;
	int nilai_basis_data;
	cout<<"NILAI BASIS DATA\t:";
	cin>>nilai_basis_data;
	int nilai_aljabar;
	cout<<"NILAI ALJABAR\t\t:";
	cin>>nilai_aljabar;
	int nilai_pai;
	cout<<"NILAI PAI\t\t:";
	cin>>nilai_pai;
	int nilai_struktur_data;
	cout<<"NILAI STRUKTUR DATA\t:";
	cin>>nilai_struktur_data;
	int nilai_pemrograman;
	cout<<"NILAI PEMROGRAMAN\t:";
	cin>>nilai_pemrograman;
	int rata_rata;
	rata_rata =(nilai_basis_data+nilai_aljabar+nilai_pai+nilai_struktur_data+nilai_pemrograman)/5;
	if(rata_rata>=86){
		cout<<"PREDIKAT 'A' "<<endl;
	}else if(rata_rata>=80){
		cout<<"PREDIKAT 'B' "<<endl;
	}else if(rata_rata>=70){
		cout<<"PREDIKAT 'C'"<<endl;
	}else if(rata_rata>=60){
		cout<<"PREDIKAT 'D'"<<endl;
	}else{
		cout<<"PREDIKAT 'E'"<<endl;	
	}
	cout<<"RATA RATA NILAI ADALAH\t:"<<rata_rata<<endl;
}
