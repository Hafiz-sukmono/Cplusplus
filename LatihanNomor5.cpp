#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int x,y,jumlah;
	
	cout << "bilangan pertama" << endl;
	cin >> x;
	cout << "bilangan kedua" << endl;
	cin >> y;
	
	jumlah = (x + y)%12;
	
	cout << "jumlah" << endl;
	cout << jumlah << endl;
	
	return 0;
}
