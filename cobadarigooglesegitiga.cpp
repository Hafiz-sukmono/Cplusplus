#include <iostream>

using namespace std;

main(){
 int pilih, alas, tinggi,sisi1,sisi2,sisi3;
 float luas, keliling;
 char ulang[1];
 menu:
 cout<<"Tutor-ALL Programming\n";
 cout<<"Menghitung luas dan keliling segitiga\n\n\n";
 cout<<"Pilih Menu Yang Akan Dilakukan\n";
 cout<<"[1]Luas Segitiga\n[2]Keliling segitiga";
 cout<<"\nPilihan : ";cin>>pilih;
 cout<<"\n\n";

 if(pilih ==1){
  //Memasukkan Rumus Luas Segitiga (1/2*alas*tinggi)
  cout << "Masukkan panjang alas: ";
  cin >> alas;
  cout << "Masukkan tinggi segitiga: ";
  cin >> tinggi;

  luas = 0.5 * alas * tinggi;
  cout << "Luas segitiga adalah " << luas;

 }else if(pilih ==2){
  //Memasukkan Rumus keliling Segitiga (sisi1 + sisi2 + sisi3)
    cout<<"masukan sisi 1 segitiga : ";
    cin>>sisi1;
    cout<<"masukan sisi 2 segitiga : ";
    cin>>sisi2;
    cout<<"masukan sisi 3 segitiga : ";
    cin>>sisi3;

    keliling = sisi1 + sisi2 + sisi3;
    cout<<"keliling segitiga adalah "<<keliling;

 } else{
  cout<<"Maaf, Pilihan Tidak tersedia";
 }
 cout<<"\n\nApakah Ingin Mengulang lagi?(Y/T)"; cin>>ulang;
    goto menu;
 return 0;
}
