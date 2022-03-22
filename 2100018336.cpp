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
