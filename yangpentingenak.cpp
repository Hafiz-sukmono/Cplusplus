#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
    int nilai[5];
    int n;
    int jumlah, ratarata;
    
    jumlah = 0;
    for (n = 0; n <= 4; n++) 
	{
        cout << "nilai ke" << endl;
        cout << n + 1 << endl;
        cin >> nilai[n];
        jumlah = jumlah + nilai[n];
    }
   
    cout << "jumlah =" << endl;
    cout << jumlah << endl;
    
	ratarata = (double) jumlah / 5;
    cout << "rata-rata =" << endl;
    cout << ratarata << endl;
   
    return 0;
}
