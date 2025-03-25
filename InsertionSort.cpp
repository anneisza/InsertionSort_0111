#include <iostream>
using namespace std;

int arr[20];//Membuat Array dengan panjang kurang dari 20
int n;//Membuat Variable Inputan n

void input()
{//Procedure Input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array: ";//Membuat Inputan Jumlah element Array
        cin >> n;//memanggril inputan variable n

        if (n <= 20)
        {//Membuat kondisi n tidak lebih dari 20
        break;
        }
        else
        {
            cout << "\nArray yang Anda masukkan maksimal 20 Elemen.\n";//Menampilkan Pesan jika data lebih dari 20
        }
    }
    cout << endl;//Membuat jarak per baris program
    cout << "============================="<< endl;//Membuat tampilan susunan data element array
    cout << "Memasukkan Element Array"<< endl; 
    cout << "============================="<< endl;

    for (int i = 0; i < n; i++)//Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-"<< (i + 1)<<":";//Memasukkan atau menginputkan nilai data n
        cin >> arr[i];//Menyimpan nilai data n ke dalam array arr
    }
    
        
}