#include <iostream>
#include <cstdlib>

using namespace std;
int main() 
{
	int celcius,farrenheit,reamur;
	
	cout << "nilai derajat celcius" << endl;
	cin >> celcius;
	
	farrenheit = 1.8 * celcius + 32;
	reamur = 0.8 * celcius + 32;
	
	cout << "nilai farrenheit" << endl;
	cout << farrenheit << endl;
	cout << "nilai reamur" << endl;
	cout << reamur << endl;
	
	return 0;
}
