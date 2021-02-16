#include <iostream>
#include <Windows.h>


bool isPrime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            
            return false;
        }
    }
    return true;
}

int main() {
	int givenNumber = 0;

	std::cout << "Enter a number: ";
    std::cin >> givenNumber;

    if (isPrime(givenNumber)){
        std::cout << "The given number is prime!";
    }
    else {
        std::cout << "The given number not is prime!";
    }
system("pause>nul");
}