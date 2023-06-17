#include <iostream>
#include "copy.h"

const int N = 1000;

int main() {

    unsigned int a[N] = {1, 2, 3, 4, 5};
    unsigned int b[N] = {0};

    mt::cpy(b, a, N);
    std::cout << sizeof(char)<< std::endl;
    return 0;
}
