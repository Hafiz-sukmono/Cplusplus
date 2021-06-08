#include <iostream>
#include <cstdlib>

using namespace std;
int main()

{
	int tahunlahir,usiasekarang;
	
	cout << "tahun lahir" << endl;
	cin >> tahunlahir;
	
	usiasekarang = 2019 - tahunlahir;
	
	cout << "usia saat ini "<< endl;
	cout << usiasekarang << endl;
	
	return 0;
}
