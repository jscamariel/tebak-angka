#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int nilai ;
    int nilai_awal = 0;
    cout << "masukkan maksimal nilai (10 - 100) = ";
    cin >> nilai ;
    if(nilai < 10){
        cout << "nilai maksimal harus >= 10 " <<endl ;
        system("pause");
        exit(0);
    }else if(nilai>100){
        cout << "nilai maksimal harus <= 100 "<<endl ;
        system("pause");
        exit(0);
    }else{
        srand(time(NULL));
        int cheat = (rand()%(nilai-nilai_awal+1))+nilai_awal;

        int tebak  ;

        int tebakan = 3 ; //kesempatan
        bool menang = false ;

        cout << "silahkan tebak nilai antara " <<nilai_awal<< " sampai " <<nilai<<endl;
        cout << "cheat : ini adalah angka yg ditebak : " <<cheat<<endl;

        do{
            cout <<"masukkan tebakan anda :";
            cin >> tebak ;
            tebakan--;

            if(tebak==cheat){
                menang=true;
                cout << "tebakan anda Benar" <<endl ;
            }else{
                if(tebak<cheat){
                    cout << "tebakan anda terlalu kecil" <<endl;
                }else if(tebak>cheat){
                    cout << "tebakan anda terlalu besar" <<endl;
                }
                cout << "kesempatan tersisa : " << tebakan << endl;
            }
            cout << endl;
        }while ((tebakan>0) && (!menang));

        if(menang){
            cout << "selamat anda menang" <<endl;
        }else{
            cout << "anda krg beruntung" << endl;
        }
    }
    return 0;
}
