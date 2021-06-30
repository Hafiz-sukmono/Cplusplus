#include <iostream>
#include <cstdlib>

using namespace std;
int main() 
{
    int nilai,jumlahpangkat,a,b;
    
    cout << "masukan nilai:" << endl;
    cin >> nilai;
    cout << "masukan jumlah pangkat:" << endl;
    cin >> jumlahpangkat;
    
	a = 1;
    	b = 0;    
	while (b < jumlahpangkat) 
	{
        a = a * nilai;
        b = b + 1;
    }
    cout << "hasil pangkat:" << endl;
    cout << a << endl;
    
	return 0;
}

