#include <iostream>

static int prog2(int counter) {

    while (counter >= 0) {
        std::cout << counter << std::endl;
        counter--;
    }

    return 0;
}

static int prog4() {
    return 0;
}

static int prog5() {
    return 0;
}

static int prog6() {
    return 0;
}

int main() {
    std::cout << "Eisig Liang - 9 Mar. 2025\n";
    prog2(12);
    return 0;
}