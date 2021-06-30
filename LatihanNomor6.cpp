#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int gaji,jumlahharikerja,totalgaji,pajak;
	
	cout << "gaji perhari" << endl;
	cin >> gaji;
	cout << "jumlah hari kerja" << endl;
	cin >> jumlahharikerja;
	
	pajak = gaji * 0.1;
	totalgaji = gaji * jumlahharikerja - pajak;
	
	cout << "total pajak" << endl;
	cout << pajak << endl;

	cout << "total gaji" << endl;
	cout << totalgaji << endl;
	
	return 0;
}
