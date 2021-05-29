#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int bil;
	
	cout << "masukkan bilangan : ";
	cin>>bil;
	if(bil%2==0)
	{
		cout << "bilangan genap"<< endl;
		cout << "";
	}
	else if (bil>0 )
	cout << "bilangan ganjil" << endl;
	else 
	{
		cout << "bilangan ganjil" << endl;
		cout <<"";
	}
	
	return 0;
}
