#include <iostream>
#include <cstdlib>

using namespace std;
int main() 
{
	int bilangan;
	
	cout << "masukkan bilangan " << endl;
	cin >> bilangan;
	
	if((bilangan%3 && bilangan%5)==0)
	{
	
		cout  << "bilangan habis dibagi 3 dan 5";
	}else{
	
		cout << "bilangan tidak habis dibagi 3 dan 5"; 
	}
	
	return 0;	
}
