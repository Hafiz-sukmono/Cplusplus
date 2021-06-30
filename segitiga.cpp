#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{

	float alas,tinggi,sisimiring,luas,keliling;
	
	cout <<"masukkan alas : " ; 
	cin >> alas;
	cout <<"masukkan tinggi : " ;
	cin >> tinggi;
	
	sisimiring : sqrt(alas*alas + tinggi*tinggi); 
	cout << "masukkan sisimiring : " << sisimiring << endl ;
	cin >> sisimiring; 
	
	luas = alas * tinggi / 2;
	cout <<"luas segitiga : " << luas << endl;
	cin >> luas;
	
	keliling :alas + tinggi + sisimiring;
	cout << "kelilinga segitiga : " << keliling << endl;
	cin >> keliling;  
	return 0;
}
