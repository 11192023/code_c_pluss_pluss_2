#include <iostream>

int main() {
    int overflow = 4;
    int additional_pails = 4;
    int capacity;

    // Using a 5-liter pail
    for (capacity = overflow + 1; capacity < 1000; capacity++) {
        if (capacity % 5 == 0) {
            break;
        }
    }

    // Using a 3-liter pail
    for (int i = additional_pails; i < 1000; i++) {
        if ((capacity - overflow + (3 * i)) % 3 == 0) {
            break;
        }
    }

    std::cout << "The fish tank has a capacity of " << capacity << " liters." << std::endl;
    return 0;
}
