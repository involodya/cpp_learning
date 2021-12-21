#include "arithmetics.h"

void UnitTest(int firstNumber, int secondNumber, int sumAnswer, int mulAnswer) {
    std::cout << firstNumber << " + " << secondNumber << " = " << sum(firstNumber, secondNumber);
    if (sum(firstNumber, secondNumber) == sumAnswer) {
        std::cout << " #true\n";
    } else {
        std::cout << " #false\n";
    }
    std::cout << firstNumber << " * " << secondNumber << " = " << mul(firstNumber, secondNumber);
    if (mul(firstNumber, secondNumber) == mulAnswer) {
        std::cout << " #true\n";
    } else {
        std::cout << " #false\n";
    }
    std::cout << '\n';
}

void Testing() {
    int firstNumber = 0;
    int secondNumber = 0;
    int sumAnswer = 0;
    int mulAnswer = 0;
    UnitTest(firstNumber, secondNumber, sumAnswer, mulAnswer);


    firstNumber = 1;
    secondNumber = 2;
    sumAnswer = 3;
    mulAnswer = 2;
    UnitTest(firstNumber, secondNumber, sumAnswer, mulAnswer);

    firstNumber = 2;
    secondNumber = 2;
    sumAnswer = 4;
    mulAnswer = 4;
    UnitTest(firstNumber, secondNumber, sumAnswer, mulAnswer);

    firstNumber = 10;
    secondNumber = 999;
    sumAnswer = 109;
    mulAnswer = 9990;
    UnitTest(firstNumber, secondNumber, sumAnswer, mulAnswer);
}

int main() {

    Testing();

}
