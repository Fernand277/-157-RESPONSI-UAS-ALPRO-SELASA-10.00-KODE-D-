#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;


void inputFile(){
	string nama,rute;
	int kode;
	long long int tanggal,jam,harga;
	cout<<"Masukan nama:";
	cin>>nama;
	cout<<"Masukan kode:";
	cin>>kode;
	cout<<"Masukan Rute:";
	cin>>rute;
	cout<<"Masukan Tanggal Saja:";
	cin>>tanggal;
	cout<<"Masukan Jam:";
	cin>>jam;
	cout<<"Masukan Harga:";
	cin>>harga;
	
	ofstream file("pesawat.txt");
	file<<"Nama:"<<nama<<endl;
	file<<"Kode:"<<kode<<endl;
	file<<"Rute:"<<rute<<endl;
	file<<"Tanggal:"<<tanggal<<endl;
	file<<"Jam:"<<jam<<endl;
	file<<"Harga:"<<harga<<endl;
	
	file.close();
	
}
void bacaFile(){
	
	ifstream file("pesawat.txt");

	
	file.close();
}
void urut_mahal(){
int arr[5]={700000,400000,1000000,800000,750000};
int temp;
for(int i=0;i<5;i++){
	for(int j=0;j<5-1-i;j++){
		if(arr[j]<arr[j+1]){
			
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
for(int i=0;i<5;i++){
	cout<<arr[i]<<" "<<endl;
}
}
void urut_murah(){
	int arr[5]={700000,400000,1000000,800000,750000};
int temp;
for(int i=0;i<5;i++){
	for(int j=0;j<5-1-i;j++){
		if(arr[j]>arr[j+1]){
			
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
for(int i=0;i<5;i++){
	cout<<arr[i]<<" "<<endl;
}
}

void cari_maska(){
	int pil;
	cout<<"Cari Pesawat"<<endl;
	cout<<"Klik Lanjut buat cari"<<endl;
	system("pause");
	cout<<"1.Pesawat Garuda"<<endl;
	cout<<"2.Pesawat Lion"<<endl;
	cout<<"3.Pesawat Sitiling"<<endl;
	cout<<"4.Pesawat Nando"<<endl;
	cout<<"5.Pesawat Garda"<<endl;
	cout<<"pilihan pesawat:";
	cin>>pil;
	switch(pil){
		case 1:
			cout<<"Pesawat garuda masih dalam perjalanan dari Jogja"<<endl;
			break;
		case 2:
			cout<<"Pesawat Lion masih dalam perjalanan dari Jakarta"<<endl;
			break;
		case 3:
			cout<<"Pesawat Sitiling masih dalam perjalanan dari Bekasi"<<endl;
			break;
		case 4:
			cout<<"Pesawat Nando masih dalam perjalanan dari Jogja"<<endl;
			break;
		case 5:
			cout<<"Pesawat Garda masih dalam perjalanan dari Aceh"<<endl;
			break;
		default:
			cout<<"TIDAK ADA PILIHAN"<<endl;
			break;
	}
}

int main(){
	string ulang;
 	int pilih;
do{	
	cout<<"=========PESAWAT TIKET TERBANG========="<<endl;
	cout<<"======================================="<<endl;
	cout<<"1.Cari Penerbangan Berdasarkan Rute"<<endl;
	cout<<"2.Cari Penerbangan Bedasarkan Maskapai"<<endl;
	cout<<"3.Mengurutkan Harga Dari Yang termahal"<<endl;
	cout<<"4.Mengurutkan Harga Dari Yang termurah"<<endl;
	cout<<"5.Tampilkan Harga Tertentu"<<endl;
	cout<<"======================================="<<endl;
	cout<<"pilihan:";
	cin>>pilih;
	
	switch(pilih){
		case 1:
			int pilihan;
		
			cout<<"1.Jogja"<<endl;
			cout<<"2.Bekasi"<<endl;
			cout<<"3.Jakarta"<<endl;
			cout<<"4.Aceh"<<endl;
			cout<<"5.Jogja"<<endl;
			cout<<"Masukan Pilihan Rute:";
			cin>>pilihan;
			if(pilihan==1){
				int masuk;
				cout<<"1.Jogja"<<endl;
				cout<<"2.Aceh"<<endl;
				cout<<"3.Jakarta"<<endl;
				cout<<"4.Laos"<<endl;
				cout<<"5.Jepang"<<endl;
				cout<<"Mau KeRute Mana:";
				cin>>masuk;
				if(masuk==1){
				cout<<"Masuk Ke Rute Jogja"<<endl;
			}
			else if(masuk==2){
				cout<<"Masuk Ke Rute Aceh"<<endl;	
			}
			else if(masuk==3){
				cout<<"Masuk Ke Rute Jakarta"<<endl;		
			}
			else if(masuk==4){
				cout<<"Masuk Ke Rute Laos"<<endl;			
			}
			else if(masuk==5){
				cout<<"Masuk Ke Rute Jepang"<<endl;		
			}
			else{
				cout<<"Tidak ada pilihannya"<<endl;		
			}		
			}
			else if(pilihan==2){
			int masuk;
				cout<<"1.Jogja"<<endl;
				cout<<"2.Aceh"<<endl;
				cout<<"3.Jakarta"<<endl;
				cout<<"4.Laos"<<endl;
				cout<<"5.Jepang"<<endl;
				cout<<"Mau KeRute Mana:";
				cin>>masuk;
				if(masuk==1){
				cout<<"Masuk Ke Rute Jogja"<<endl;
			}
			else if(masuk==2){
				cout<<"Masuk Ke Rute Aceh"<<endl;	
			}
			else if(masuk==3){
				cout<<"Masuk Ke Rute Jakarta"<<endl;		
			}
			else if(masuk==4){
				cout<<"Masuk Ke Rute Laos"<<endl;			
			}
			else if(masuk==5){
				cout<<"Masuk Ke Rute Jepang"<<endl;		
			}
			else{
				cout<<"Tidak ada pilihannya"<<endl;		
			}
				
			}
			else if(pilihan==3){
			int masuk;
				cout<<"1.Jogja"<<endl;
				cout<<"2.Aceh"<<endl;
				cout<<"3.Jakarta"<<endl;
				cout<<"4.Laos"<<endl;
				cout<<"5.Jepang"<<endl;
				cout<<"Mau KeRute Mana:";
				cin>>masuk;
				if(masuk==1){
				cout<<"Masuk Ke Rute Jogja"<<endl;
			}
			else if(masuk==2){
				cout<<"Masuk Ke Rute Aceh"<<endl;	
			}
			else if(masuk==3){
				cout<<"Masuk Ke Rute Jakarta"<<endl;		
			}
			else if(masuk==4){
				cout<<"Masuk Ke Rute Laos"<<endl;			
			}
			else if(masuk==5){
				cout<<"Masuk Ke Rute Jepang"<<endl;		
			}
			else{
				cout<<"Tidak ada pilihannya"<<endl;		
			}
				
			}
			else if(pilihan==4){
			int masuk;
				cout<<"1.Jogja"<<endl;
				cout<<"2.Aceh"<<endl;
				cout<<"3.Jakarta"<<endl;
				cout<<"4.Laos"<<endl;
				cout<<"5.Jepang"<<endl;
				cout<<"Mau KeRute Mana:";
				cin>>masuk;
				if(masuk==1){
				cout<<"Masuk Ke Rute Jogja"<<endl;
			}
			else if(masuk==2){
				cout<<"Masuk Ke Rute Aceh"<<endl;	
			}
			else if(masuk==3){
				cout<<"Masuk Ke Rute Jakarta"<<endl;		
			}
			else if(masuk==4){
				cout<<"Masuk Ke Rute Laos"<<endl;			
			}
			else if(masuk==5){
				cout<<"Masuk Ke Rute Jepang"<<endl;		
			}
			else{
				cout<<"Tidak ada pilihannya"<<endl;		
			}
				
			}
			else if(pilihan==5){
			int masuk;
				cout<<"1.Jogja"<<endl;
				cout<<"2.Aceh"<<endl;
				cout<<"3.Jakarta"<<endl;
				cout<<"4.Laos"<<endl;
				cout<<"5.Jepang"<<endl;
				cout<<"Mau KeRute Mana:";
				cin>>masuk;
				if(masuk==1){
				cout<<"Masuk Ke Rute Jogja"<<endl;
			}
			else if(masuk==2){
				cout<<"Masuk Ke Rute Aceh"<<endl;	
			}
			else if(masuk==3){
				cout<<"Masuk Ke Rute Jakarta"<<endl;		
			}
			else if(masuk==4){
				cout<<"Masuk Ke Rute Laos"<<endl;			
			}
			else if(masuk==5){
				cout<<"Masuk Ke Rute Jepang"<<endl;		
			}
			else{
				cout<<"Tidak ada pilihannya"<<endl;		
			}
				
			}
			else{
				cout<<"Tidak ada pilihannya"<<endl;
				
			}
			break;
			
			case 2:
				cari_maska();
				break;
				
				case 3:
					urut_mahal();
					cout<<endl;
					break;
					case 4:
						urut_murah();
						cout<<endl;
						break;
						case 5:
						cout<<"HARGA TIKET PESAWAT SESUAI RUTE"<<endl;
						cout<<"Jogja-Jakarta   :700.000"<<endl;
						cout<<"Bekasi-Aceh     :400.000"<<endl;
						cout<<"Jakarta-Jepang  :1.000.000"<<endl;
						cout<<"Aceh-Laos       :800.000"<<endl;
						cout<<"Joga-Laos       :750.000"<<endl;
							break;
					default:
						cout<<"TIDAK ADA PILIHAN";
							break;			
}
	cout<<"Ingin Mengulangi Cek Datanya(y/n):";
	cin>>ulang;
	
}while(ulang == "y"||ulang == "Y");

	inputFile();
	
	return 0;
}
