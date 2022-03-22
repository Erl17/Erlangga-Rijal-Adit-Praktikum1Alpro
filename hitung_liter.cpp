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
