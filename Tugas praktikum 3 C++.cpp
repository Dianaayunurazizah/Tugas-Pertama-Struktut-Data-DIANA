#include <iostream>
using namespace std;
int main(){
	//no 1
	cout<<"====================SOAL KESATU===================="<<endl;
	int a=20,n=0; /* n adalah total hitung */
	for(int i=2; i<=a; i+=2){
			cout<<i;
	        n +=i;
			if(i<20)
				cout<<" + ";	
			}
	cout<<" = "<<n<<endl;
	
	//no 2
	cout<<"====================SOAL KEDUA===================="<<endl;
	int b=20,p=0; /* p adalah total hitung */
	for(int d=1; d<=b; d+=2){
		cout<<d;
		p +=d;
		if(d<20)
			cout<<" + ";
	}
	cout<<" = "<<p<<endl;
	//no 3
	cout<<"====================SOAL KETIGA===================="<<endl;
	int z=5;
	for(int Angka=1; Angka<=z; Angka++){
		int tambah=0;
		for(int tri=1; tri<=Angka; tri++){
		int rumus1=tri*2;
		tambah = tambah + rumus1;
		cout<<rumus1;
		if(tri<Angka){
			cout<<" + ";
		}
		}
		cout<<" = "<<tambah<<endl;
	}
	//no 4
	cout<<"====================SOAL KEEMPAT===================="<<endl;
	int w=5;
	for(int Angka2=1; Angka2<=w; Angka2++){
		int plus=1;
		for(int r=1; r<=Angka2; r++){
		int rumus2=(r*2)-1;
		plus = plus * rumus2;
		cout<<rumus2;
		if(r<Angka2){
			cout<<" + ";
		}
		}
		cout<<" = "<<plus<<endl;
	}
	//no 5
	cout<<"====================SOAL KELIMA===================="<<endl;
	int h=5;
	int totalSemua=0;
	for(int Angka3=5; Angka3>=1; Angka3--){
		int plus2=0;
		for(int pro=5; pro>(5-Angka3); pro--){
		int hitung=pro*2;
		plus2 = plus2 + hitung;
		cout<<hitung;
		if(pro>(5-Angka3+1)){
			cout<<" + ";
		}else{
			cout<<" = ";
		}	
		}
		cout<<plus2<<endl;
		totalSemua =totalSemua+ plus2; 
	}
	cout<<"----------- +"<<endl;
	cout<<totalSemua<<endl;
	return 0;
}
