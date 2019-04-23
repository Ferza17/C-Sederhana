#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
void hiasan();
int main(){
	int n;
	hiasan();
	puts("\tContoh Array ");
	cout<<"Masukan Jumlah Data : ";cin>>n;
	hiasan();
	string nama[n],jurusan[n],alamat[n];
	for(int i=0;i<n;i++){
        fflush(stdin);
		cout<<"Masukan Nama : ";getline(cin,nama[i]);
		cout<<"Jurusan      : ";getline(cin,jurusan[i]);
		cout<<"Alamat       : ";getline(cin,alamat[i]);
        hiasan();
	}
	hiasan();
	for(int i=0;i<n;i++){
		cout<<"Nama         : "<<nama[i]<<endl;
		cout<<"Jurusan      : "<<jurusan[i]<<endl;
		cout<<"Alamat       : "<<alamat[i]<<endl;
	}
	cout<<"Tampilkan array 0"<<nama[0]<<endl;
}
void hiasan(){
	puts("==============================");
}


