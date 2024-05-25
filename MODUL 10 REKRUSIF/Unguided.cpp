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
