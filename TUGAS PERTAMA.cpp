#include <iostream>   
using namespace std; 
	
int main(){	
	string tugas1diana= "Tugas Pertama";
	cout<<"1. "<<tugas1diana<<endl;
	string nama_mahasiswa;
	cout<<"NAMA MAHASISWA     :";
	getline(cin>>ws, nama_mahasiswa);
	cout<<"========================================"<<endl;
	int nilai_basis_data;
	cout<<"NILAI BASIS DATA   :";
	cin>>nilai_basis_data;
	int nilai_aljabar;
	cout<<"NILAI ALJABAR      :";
	cin>>nilai_aljabar;
	int nilai_pai;
	cout<<"NILAI PAI          :";
	cin>>nilai_pai;
	int nilai_struktur_data;
	cout<<"NILAI STRUKTUR DATA:";
	cin>>nilai_struktur_data;
	int nilai_pemrograman;
	cout<<"NILAI PEMROGRAMAN  :";
	cin>>nilai_pemrograman;
	cout<<"========================================"<<endl;
	int rata_rata;
	rata_rata =(nilai_basis_data+nilai_aljabar+nilai_pai+nilai_struktur_data+nilai_pemrograman)/5;
	if(rata_rata>=86){
		cout<<"PREDIKAT \t   :'A' "<<endl;
	}else if(rata_rata>=80){
		cout<<"PREDIKAT \t   :'B' "<<endl;
	}else if(rata_rata>=70){
		cout<<"PREDIKAT \t   :'C'"<<endl;
	}else if(rata_rata>=60){
		cout<<"PREDIKAT \t   :'D'"<<endl;
	}else{
		cout<<"PREDIKAT \t   :'E'"<<endl;	
	}
	cout<<"RATA RATA NILAI    :"<<rata_rata<<endl;
	cout<<"========================================"<<endl;
}
