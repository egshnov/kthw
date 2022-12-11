#include <iostream>
#include "Array.h"
int main(){
    setlocale(LC_ALL, "rus");
    std::cout << "Введите размерность массива:\n";
    int len;
    std::cin >> len;
    Array arr1 = Array(len);
    Array arr2 = Array(len);
    std::cout << "Массивы заполненые случайными числами:\n";
    arr1.print();
    arr2.print();
    Array arr3 = Array(len, 0);
    std::cout << "Массив заполненный нулями:\n";
    arr3.print();
    for (int i = 0; i < len; i++) {
        arr3.set(i, arr1.get(i) + arr2.get(i));
    }
    std::cout << "Сумма массивов заполненных случайными чсилами:\n";
    arr3.print();
}