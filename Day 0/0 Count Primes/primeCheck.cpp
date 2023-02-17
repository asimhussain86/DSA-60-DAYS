#include<iostream>

#include <cmath>

using namespace std;
//The following function checks if the number is prime or not and returns false if the number is not prime.
bool primeNumberCheck(int number) {
    if (number <= 1)
        return false;
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }

    }
    return true;
}

//This function returns number of prime numbers in the range.
void countPrimeNumber(int number) {
    int count = 0;
    cout << "The prime numbers are ";
    for (int i = 2; i < number; i++) {
        if (primeNumberCheck(i)) {
            cout << i << " ";
            count++;
        }

    }
    cout << endl;
    cout << "The number of prime numbers from 2 to " << number << " is " << count << "\n";
}

int main() {
    int number;
    cout << "Enter the number";
    cin >> number;
    countPrimeNumber(number);
    return 0;

}