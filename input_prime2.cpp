#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i*i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find the prime number at the given position
int findPrimeAtPosition(int position) {
    int count = 0;
    int number = 2;

    while (true) {
        if (isPrime(number)) {
            count++;
            if (count == position) {
                return number;
            }
        }
        number++;
    }
}

int main() {
    int position;

    cout << "Enter the position : ";
    cin >> position;

    if (position <= 0) {
        cout << "Please enter a valid positive position." << endl;
    } else {
        int primeNumber = findPrimeAtPosition(position);
        cout << "The prime number  position  is = " << position << " and the number is =: " << primeNumber << endl;
    }

    return 0;
}
