# <h1 align="center">Laporan Praktikum Modul Rekrusif</h1>
<p align="center">Rifka Annisa Swasthi</p>

## Dasar Teori
Rekrusif adalah proses fungsi memanggil dirinya sendiri secara langsung atau tidak langsung. Fungsi rekrusif diartikan sebagai fungsi yang memanggil dirinya sendiri secara berulang dalam proses pengolahan dara atau pemanggilan fungsi.

Pada rekursif akan dilakukan pemanggilan prosedur atau fungsi yang sama. Dalam tiap rekursif, sebuah barang akan dimasukkan atau dikeluarkan dari daftar barang yang akan dibeli[1]

Fungsi rekrusif dibagi menjadi 4 yaitu tail recursion, head recursion, nested recursion dan tree recursion. 

1. Tail Recursion 

adalah proses pengoptisasi pada fungsi rekrusif dimana pemanggilan rekrusif pada fungsi tersebut menrupakan operasi terakhir.

2. Head Recursion

Merupakan teknik implementasi fungsi rekrusif dimana pemanggilan rekrusif dilakukan pada awal atau sebelum operasi.

3. Nested Recursion 

Pemanggilan fungsi rekursif pada suatu fungsi yang dilakukan sebagai parameter input dari pemanggilan rekursif pada fungsi lain.

4. Tree Recursion
adalah fungsi rekrusif dimana setiap panggilan rekursif menghasilkan beberapa panggilan rekursif lainnya [2]

Rekursif ada dua macam [3]

1. Rekursi 1-Langsung

Rekursi langsung adalah jenis rekursi paling dasar, di mana suatu fungsi memanggil dirinya sendiri secara langsung. Ini memerlukan membagi masalah yang bermasalah menjadi submasalah yang lebih kecil sampai kasus dasar tercapai, yang mengarah pada penghentian.

2. Rekursi 2-Tidak Langsung
Rekursi tidak langsung menambahkan sentuhan menarik ke jalur rekursif. Berbeda dengan rekursi langsung, yang melibatkan fungsi yang secara eksplisit memanggil dirinya sendiri, rekursi tidak langsung mencakup serangkaian pemanggilan fungsi.


## Guided 

### 1. Rekrusif Langsung (Direct Recrusion)

```C++
#include <iostream>
using namespace std;

//Code ini berfungsi untuk melakukan hitung mundur
//dari angka yang diinputkan

void countdown(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    countdown(n - 1);
}

int main() {
    cout << "Rekursi Langsung: ";
    countdown(5); //5 merupakan input nya
    cout << endl;
    return 0;
}

```
Kode di atas adalah contoh dari rekursif langsung, void countdown untuk menerima suatu parameter interger n, if n sama dengan 0 return, tampilkan n countdown yang setiap n dikurangi satu terus sampai mencapai basisi rekursi. int main tampilkan Rekursi langsung memanggil countdown dengan n 5 endl buat baris baru dan return 0 untuk mengembalikan nilai 0ke oparasi. 

### 2. Rekrusif Tidak Langsung (Indirect Recrusion)

```C++
#include <iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}

int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}


```
Kode di atas adalah contoh kode rekursi tidak langsung. mendeklarasikan void function int n if n lebih dari 0 maka tampilkan n , memangggila fungsi n-1. sama dengan function A bedanya di funvtion b memanggil functionA dengan argumen n/2. Main int numnya 5 maka tampilkan rekursif tidak langsung, memanggil functionA dan mengahiri dsngan return 0.

## Unguided 

### 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!



```C++
#include <iostream>

// Fungsi rekursif untuk menghitung faktorial
int factorial(int n) {
    // Basis: Jika n adalah 0 atau 1, kembalikan 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Rekurens: Menghitung faktorial dari n dengan memanggil fungsi factorial(n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    // Meminta input dari pengguna
    std::cout << "Masukkan bilangan bulat positif: ";
    std::cin >> number;

    // Memastikan input adalah bilangan bulat positif
    if (number < 0) {
        std::cout << "Harap masukkan bilangan bulat positif." << std::endl;
    } else {
        int result = factorial(number);
        std::cout << "Faktorial dari " << number << " adalah " << result << std::endl;
    }

    return 0;
}

```
#### Output:
![Screenshot 2024-05-25 203534](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-10-Rekrusif./assets/162097297/5a988f7c-d437-426d-b0c4-8cf482fe8349)


Kode di atatas diginakan untuk menghitung nilai faktorial dari seluruh bilamgan positif menggunakan rekursi langsung. int faktorial int n jika n sama dengan o atau n asamadengan 1 return 1, else return n kali faktprial n-1. main int number menu maasukkan bilangan positif, menyimpan variabel di number. jika number kurang dari 0 maka tampilkan harap masukkan bilangan bulat positif else memanggil fungsi faktorial dnegan number dan menyimpan di variabel result. 

#### Full code Screenshot:
![Screenshot 2024-05-25 203649](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-10-Rekrusif./assets/162097297/addbddaa-04b9-42bc-87d2-b1bd68ec3177)


### 2.Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 diatas!

```C++
#include <iostream>

// Deklarasi fungsi
int factorialHelper(int n);
int factorial(int n);

// Fungsi pertama yang memanggil fungsi helper
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorialHelper(n - 1);
    }
}

// Fungsi helper yang memanggil kembali fungsi factorial
int factorialHelper(int n) {
    return factorial(n);
}

int main() {
    int number;

    // Meminta input dari pengguna
    std::cout << "Masukkan bilangan bulat positif: ";
    std::cin >> number;

    // Memastikan input adalah bilangan bulat positif
    if (number < 0) {
        std::cout << "Harap masukkan bilangan bulat positif." << std::endl;
    } else {
        int result = factorial(number);
        std::cout << "Faktorial dari " << number << " adalah " << result << std::endl;
    }

    return 0;
}

```
#### Output:
![Screenshot 2024-05-25 204000](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-10-Rekrusif./assets/162097297/d7690439-6ae5-45c0-9231-d25b44144a16)

Kode di atas digunakan untuk menghitung nilai faktorial dari bilangan positif menggunakan inderict recursion. mendeklarasikan fungsi faktorialhelper dan faktorial. definisi fungsi faktorial int faktorial n integer jika n sama dengan 0 atau n samadenga 1 return 1, else return kali faktorialhelper n-1. definisi faktorial hel[er int n return faktorial, memanggil fungsi faktorial n. main int number tampilkan masukkan bilangan bulat positif yang disimpan divariabel number keluarannya.  jika number kurang dari 0 tampilkan harap masukkan bilangn bulat positis atau memanggil fungsi faktorial untuk menghitung faktorial number dan disimpan di result.

#### Full code Screenshot:
![Screenshot 2024-05-25 204056](https://github.com/RifkaASwasthi/Praktikum-Struktur-Data-Assignment-10-Rekrusif./assets/162097297/7322e739-46e8-436b-8b64-421e69ebf631)



## Kesimpulan

Rekrusif adalah proses fungsi memanggil dirinya sendiri secara langsung atau tidak langsung. 
Fungsi rekrusif dibagi menjadi 4 yaitu tail recursion, head recursion, nested recursion dan tree recursion. 
Rekursif ada dua macam Rekursi 1-Langsung,Rekursi 2-Tidak Langsung


## Referensi

[1] sandykosasi. 2013, PENYELESAIAN BOUNDED KNAPSACK PROBLEM
MENGGUNAKAN DYNAMIC PROGRAMMING
(Studi Kasus: CV. Mulia Abadi), Program Studi Teknik Informatika
Sekolah Tinggi Manajemen Informatika dan Komputer Pontianak, [Jurnal] Informatika Mulawarman.

[2] soffya ranti. 2023, Pengertian dan Fungsi Rekursif serta Contohnya, [Artikel] Kompas.com.

[3] Candan Bengi. 2023, Berbagai Jenis Rekursi,[Artikel] HashDork.com