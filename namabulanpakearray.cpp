#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
	 string namabulan[12]= {"Januari","Februari","Maret","April","May","Juni","Juli","Agustus","Septebmer","Oktober","November","Desember"};
	int n, kode;
	 
	 cout << "Masukkan nomor bulan (1...12) :";
	 cin >> kode;
	 
	 cout << "Nama Bulan : " << namabulan[kode-1] << endl;
	 
	 return 0; 
}
