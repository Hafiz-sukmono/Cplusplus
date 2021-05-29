#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
	 string namahari[7]= {"senin","selasa","rabu","kamis","jumlat","sabtu","minggu"};
	int n, kode;
	 
	 cout << "masukkan nomor hari (1...7) :";
	 cin >> kode;
	 
	 cout << "nama hari : " << namahari[kode-1] << endl;
	 
	 return 0; 
}
