#include <iostream>
#include <iomanip>
using namespace std;
class Bensin{
      public :
             Bensin();
             void pilihan();
             void hitung_uang();
             void hitung_liter();
      private :
              double uang, liter, tampil, uang_bayar, kembali;
              char pil;
              char ambil;
              double harga, pertamax, pertalite;
      };
Bensin::Bensin(){
     harga = 0;
     pertalite = 7000;
     pertamax = 9000;
     }
void Bensin::pilihan(){
     cout<<"Selamat Datang di SPBU"<<endl;
     cout<<"Pilihan bahan bakar : "<<endl;
     cout<<"a. Pertalite "<<endl;
     cout<<"b. Pertamax "<<endl;
     cout<<"Masukkan pilihan anda = ";
     cin>>ambil;
     if(ambil == 'a' || ambil == 'b'){
              cout<<"Beli berdasarkan :"<<endl;
     cout<<"1. uang"<<endl;
     cout<<"2. liter"<<endl;
     cout<<"Masukkan pilihan pembelian : ";
     cin>> pil;
     if(pil == '1'){
          hitung_uang();
          }
     else if(pil=='2'){
          hitung_liter();
          }
     else{
          system("cls");
          pilihan();
          }
              }
     system("cls");
     pilihan();   
     }
void Bensin::hitung_uang(){
     cout<<"Masukkan besarnya uang : ";
     cin>> uang;
     if(ambil == 'a'){
              harga = pertalite;
              }
     else if (ambil == 'b'){
          harga = pertamax;
          }
     tampil = uang / harga;
     cout<<endl;
     cout<<"------------------------------------------------------"<<endl;
     cout<<"\tStruk Pembayaran"<<endl;
     cout<<"------------------------------------------------------"<<endl;
     cout<<"Jumlah Uang : "<<uang<<endl;
     cout<<"Jumlah Bensin yang dibeli : "<<tampil <<" liter"<<endl;
     cout<<"------------------------------------------------------"<<endl;
     system("PAUSE");
     system("cls");
     pilihan();
     }
void Bensin::hitung_liter(){
     cout<<"Masukkan jumlah liter : ";
     cin>> liter;
      if(ambil == 'a'){
              harga = pertalite;
              }
     else if (ambil == 'b'){
          harga = pertamax;
          }
     tampil = harga * liter;
     cout<<"Uang yang dibayarkan : "; cin >> uang_bayar;
     kembali = uang_bayar-tampil;
     cout<<endl;
     cout<<"------------------------------------------------------"<<endl;
     cout<<"\tStruk Pembayaran"<<endl;
     cout<<"------------------------------------------------------"<<endl;
     cout<<"Liter : "<<liter<<endl;
     cout<<"Uang yang harus dibayar : Rp "<<tampil <<".00"<<endl;
     cout<<"Uang yang dibayarkan : "<<uang_bayar<<endl;
     cout<<"Kembalian : "<<kembali<<endl;
     cout<<"------------------------------------------------------"<<endl;
     system("PAUSE");
     system("cls");
     pilihan();
     }
int main(int argc, char *argv[])
{
    Bensin x;
    x.pilihan();
    system("PAUSE");
    return 0;
} 
