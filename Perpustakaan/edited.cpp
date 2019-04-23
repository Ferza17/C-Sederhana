// Program Perpustakaan
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class perpustakaan{
	public:
		perpustakaan();
		~perpustakaan();
		void input();
		void show();
		void hiasan(){
			puts("=======================================");
		}
	private:
		int i,j;
		int banyak,jumlahbuku;
		struct mahasiswa{
			char nama[50];
			char nim[50];
			char jurusan[50];
		};mahasiswa st1[100];
		struct buku{
			char judul[100];
			char penulis[100];
			char penerbit[100];
			int  thnterbit;
			char tmptterbit[100];
		}; buku st2[100];
		struct pinjam{
			int tanggal;
			char bulan[12][20]={"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
			int bp;
			int bk;
			int tahun;
			int kembali;
		}; pinjam st3[100];
};
perpustakaan::perpustakaan(){
	int pilihan;
	go:
	puts("+=====================================+");
	puts("\tProgram Perpustakaan");
	puts("+=====================================+\n");
	puts("1. Pinjam\t2. Pengembalian\t3. Keluar \n");
	cout<<"Masukan Pilihan Anda : ";cin>>pilihan;
	switch(pilihan){
		case 1:
			puts("");
			input();
			Sleep(3000);
			system("cls");
			goto go;
			break;
		case 2:
			fflush(stdout);
			puts("");
			show();
			goto go;
			break;
		case 3:
			cout<<"Thanks...."<<endl;
			Sleep(3000);
			system("cls");
			break;
		default:
			cout<<"Inputan yang anda masukan tidak diketahui."<<endl;
			Sleep(3000);
			goto go;
			break;
	}

}
perpustakaan::~perpustakaan(){
}
void perpustakaan::input(){
		hiasan();
		cout<<"Jumlah Mahasiswa : ";cin>>banyak;
		for(i=0;i<banyak;i++){
			fflush(stdin);
			cout<<"\nData ke-"<<j<<endl;
			cout<<"Nama Mahasiswa\t\t: ";gets(st1[i].nama);
			fflush(stdin);
			cout<<"Nomor Induk Mahasiswa   : ";gets(st1[i].nim);
			fflush(stdin);
			cout<<"Jurusan\t\t\t: ";gets(st1[i].jurusan);
			cout<<"Jumlah buku \t\t: ";cin>>jumlahbuku;
			for(j=0;j<jumlahbuku;j++){
				hiasan();
				cout<<"\tbuku ke-"<<j+1<<endl;
				fflush(stdin);
				cout<<"\tJudul\t       : ";gets(st2[j].judul);
				fflush(stdin);
				cout<<"\tPenulis\t       : ";gets(st2[j].penulis);
				fflush(stdin);
				cout<<"\tPenerbit       : ";gets(st2[j].penerbit);
				fflush(stdin);
				cout<<"\tTahun Terbit   : ";cin>>st2[j].thnterbit;
				cout<<"\tTempat Terbit  : ";cin>>st2[j].tmptterbit;
				fflush(stdin);
				cout<<"\tTanggal Pinjam : ";cin>>st3[j].tanggal;
				cout<<"\tBulan Pinjam   : ";cin>>st3[j].bp;
				cout<<"\tTahun pinjam   : ";cin>>st3[j].tahun;
				fflush(stdin);
				st3[j].kembali = st3[j].tanggal + 7;
				if(st3[j].kembali >= 31 ){
					st3[j].kembali=st3[j].kembali%31;
					st3[j].bk=st3[j].bp;
					if(st3[j].bp>=12){
						st3[j].tahun++;
						st3[j].bk=st3[j].bp%12;
						st3[j].bp=st3[j].bp%-1;
					}	
					}else{
						st3[j].bp--;
						st3[j].bk=st3[j].bp;
							
					}
				}
				 
			}
		
}
void perpustakaan::show(){
	for(i=0;i<banyak;i++){
			fflush(stdin);
			cout<<"\nData ke-"<<j<<endl;
			cout<<"Nama Mahasiswa\t\t: "<<st1[i].nama<<endl;
			fflush(stdin);
			cout<<"Nomor Induk Mahasiswa   : "<<st1[i].nim<<endl;
			fflush(stdin);
			cout<<"Jurusan\t\t\t: "<<st1[i].jurusan<<endl;
			for(j=0;j<jumlahbuku;j++){
				hiasan();
				cout<<"\tbuku ke-"<<j+1<<endl;
				fflush(stdin);
				cout<<"\tJudul\t        : "<<st2[j].judul<<endl;
				fflush(stdin);
				cout<<"\tPenulis\t        : "<<st2[j].penulis<<endl;
				fflush(stdin);
				cout<<"\tPenerbit        : "<<st2[j].penerbit<<endl;
				fflush(stdin);
				cout<<"\tTahun Terbit    : "<<st2[j].thnterbit<<endl;
				cout<<"\tTempat Terbit   : "<<st2[j].tmptterbit<<endl;
				fflush(stdin);
				cout<<"\tBatas Pinjaman  : "<<st3[j].tanggal<<" "<<st3[j].bulan[st3[j].bp]<<" - "<<st3[j].kembali<<" "<<st3[j].bulan[st3[j].bk]<<" "<<st3[j].tahun<<endl;
				
			}
		}
	
}
int main(){
	perpustakaan ob;
	ob.~perpustakaan();
	return 1;
}
