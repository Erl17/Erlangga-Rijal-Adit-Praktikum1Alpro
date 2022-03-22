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
