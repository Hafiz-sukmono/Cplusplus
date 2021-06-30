#include <iostream>
#include <cstdlib>

using namespace std;
int main() 
{
	int n,jumlah;
    
    cout << "masukan nilai" << endl;
    cin >> n;
    
	jumlah = 0;
	for (n = n; n >= 0; n -= 2) 
	{
        cout << n << endl;
        jumlah = jumlah + n;
    }
    cout << "hasil jumlah" << endl;
    cout << jumlah << endl;
    
	return 0;
}
