#include <iostream>

#include "HelloWorld.h"

using namespace std;

int HelloWorld() {
    return 123;
}

int testInputInt(int a){

    return a;
}


double testInputDouble(double a){

    return a;
}

int our_function(int num_numbers, int *numbers) {
    int i;
    int sum = 0;
    for (i = 0; i < num_numbers; i++) {
        sum += numbers[i];
    }
    return sum;
}

// int main() {
//     HelloWorld();
// }
