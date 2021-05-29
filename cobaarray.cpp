#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
	int nilai [5], I, jumlah;
	jumlah=0;
	int ratarata;
	for (I = 0; I < 5; I++)
	{
	
		cout << "masukkan nilai siswa ke";
		cout << I + 1 << ":";
		cin >> nilai[I];
		
		jumlah = jumlah + nilai[I];
		ratarata = jumlah/5;
	}
	
	cout << "jumlah =" << jumlah << endl;
	cout << "rata-rata ="<< ratarata << endl;
	
	return 0;
}

