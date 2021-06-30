#include <iostream>
#include <cstdlib>

using namespace std;
int main() 
{
    int nilaiawal,nilaiakhir,jumlah,x;
    
    cout << "masukan nilai awal" << endl;
    cin >> nilaiawal;
    cout << "masukan nilai akhir" << endl;
    cin >> nilaiakhir;
    
	jumlah = 0;
    for (x = nilaiawal; x <= nilaiakhir; x++) 
	{
        cout << x << endl;
        jumlah = jumlah + x;
    }
    cout << "jumlah" << endl;
    cout << jumlah << endl;
    
	return 0;
}
