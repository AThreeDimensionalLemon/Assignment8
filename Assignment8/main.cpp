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

static int prog5(int addend1, int addend2) {

    if (addend2 == 0)
        return addend1;

    else {
        addend1 += addend2;
        return prog5(addend1, addend2 - 1);
    }
}

static int prog6(int addend) {
    int result = 0;

    for (addend; addend > 0; addend--)
        result += addend;

    return result;
}

int main() {
    std::cout << "Eisig Liang - 9 Mar. 2025\n\nTesting prog2: ";
    //prog2(12);

    std::cout << "Skipped\n\nTesting prog4: ";
    //std::cout << prog4(8) << std::endl;

    std::cout << "Skipped\n\nTesting prog5: ";
    //std::cout << prog5(0, 12) << std::endl;

    std::cout << "Skipped\n\nTesting prog6: ";
    std::cout << prog6(12) << std::endl;

    return 0;
}