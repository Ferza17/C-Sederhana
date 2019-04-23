#include <iostream>


using namespace std;

 class kasir{
 	public:
 		kasir();
 	private:
 		struct barang{
 			char produk[70];
 			char kode[10];
 			int jumlah;
		 };barang; st1[100];
		 struct bayar{
		 	double harga;
		 	double uanguser;
		 	double kembalian;
		 };bayar st2[100];
 };
 
 int main(){
 	return 0;
 }
