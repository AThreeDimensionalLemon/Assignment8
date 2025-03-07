#include <iostream>

static int prog2(int counter) {

    while (counter >= 0) {
        std::cout << counter << std::endl;
        counter--;
    }

    return 0;
}

static int prog4(int integer) {
    int result = 1;

    while (integer > 0) {
        result *= integer;
        integer--;
    }

    return result; //Professor likely didn't mean to tell me to just return 1
}

static int prog5() {
    return 0;
}

static int prog6() {
    return 0;
}

int main() {
    std::cout << "Eisig Liang - 9 Mar. 2025\n\nTesting prog2: ";
    //prog2(12);

    std::cout << "Skipped\n\nTesting prog4: ";
    std::cout << prog4(8) << std::endl;

    std::cout << "Complete\n\nTesting prog 5: Skipped";
    return 0;
}