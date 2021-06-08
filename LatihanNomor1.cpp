#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
int main()
{
	int hargasatuan,jumlahbarang,totalharga,pajak;
	
	cout << "harga satuan " << endl;
	cin >> hargasatuan;
	cout << "jumlah barang yang dibeli" << endl;
	cin >> jumlahbarang;
	
	pajak = hargasatuan * 0.1;
	totalharga = hargasatuan * jumlahbarang + pajak;
	
	cout << "total harga barang" << endl;
	cout << totalharga;
	
	return 0;  
}
