#include <iostream>
using namespace std;

// Program Fibonacci dengan metode Rekursif    
int Fibonacci(int nilai) {
	 //fungsi rekursifnya mengecek apakah nilai= 0 atau 1, jika nilainya 0 atau satu maka returnya yaitu nilai itu sendiri
    if (nilai == 0 || nilai ==1){
        return nilai;
     //rumus rekursifnya
    } else {
    	return (Fibonacci(nilai-1) + Fibonacci(nilai-2));
      }
    }
    
int main() {
     // Inisialisasi Variabel  
    int batas, nilai= 0;
     // Input Nilai Batas Deret Bil. Fibonacci
	cout << "Masukan Batas Deret Bilangan Fibonacci :  ";
    cin >> batas;
     // Mencetak hasil deret bilangan fibonacci
	cout << "Deret Fibonacci: ";
    for (int i = 1; i <= batas; i++){
		cout <<" " << Fibonacci(nilai) <<", ";
        nilai++;
          
    }
   
	return 0;
}

