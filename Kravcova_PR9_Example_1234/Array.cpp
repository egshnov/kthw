#include "Array.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
Array::Array() {

}
bool Array::init = false;
Array::Array(int length) {
    this->length = length;
    arr = new int[length];
    if (!init) {
        init = true;
        srand(time(0));
    }
    for (int i = 0; i < length; i++) {
        arr[i] = rand() % 100;
    }
}

Array::Array(int length, int value) {
    this->length = length;
    arr = new int[length];
    for (int i = 0; i < length; i++) {
        arr[i] = value;
    }
}

Array::~Array() {
    delete[] arr;
}

void Array::set(int i, int value) {
    arr[i] = value;
}

int Array::get(int i) {
    return arr[i];
}

void Array:: print() {
    for (int i = 0; i < this->length; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
}