#include<iostream>
using namespace std;

int main() {

// Variable terdiri dari jumlah_array yang berisi jumlah array yang akan diurutkan, tukar digunakan untuk mengurutkan data, dan isi adalah data yang akan diurutkan
    int jumlah_array, tukar, isi[100];

// input jumlah array
    cout << "Masukkan jumlah data: ";
    cin >> jumlah_array;

// menginputkan data sebanyak jumlah array
    for (int i = 0; i < jumlah_array; i++) {
        cout << "Data ke-" << i + 1 << " = " ;
        cin >> isi[i];
        cout << endl;

    }

// proses perulangan data
    for (int i = 0; i < jumlah_array-1; i++) {
        tukar = i;
        
// proses menukarkan data, jika data setelahnya lebih kecil maka akan ditukar dengan data sebelumnya sampai persyaratan terpenuhi		
		int temp;

        for(int j = i+1; j < jumlah_array; j++){
            if(isi[j] < isi[tukar]){
                tukar = j;
            }
        }   

        temp = isi[tukar];
        isi[tukar] = isi[i];
        isi[i] = temp;
    }


// menampilkan output data secara urut 
	cout << "Deret array yang sudah disortir: ";
    for(int i = 0; i < jumlah_array; i++){
        cout << "["<<isi[i] << "]";
    }

    cin.get();

    return 0;
}

