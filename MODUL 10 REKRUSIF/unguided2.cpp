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
