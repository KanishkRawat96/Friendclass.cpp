#include <iostream>
using namespace std;

class PrimeChecker;

class Number {
private:
    int num;

public:
    // Constructor to initialize the number
    Number(int n) : num(n) {}

    // Declare PrimeChecker as a friend class
    friend class PrimeChecker;
};

class PrimeChecker {
public:
    
    bool isPrime(Number &n) 
        if (n.num <= 1) return false; 
        for (int i = 2; i * i <= n.num; ++i) {
            if (n.num % i == 0) {
                return false; 
            }
        }
        return true; 
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Number number(num); 
    PrimeChecker checker; 

    
    if (checker.isPrime(number)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
