#include <iostream>
#include <vector>
using namespace std;

// Function to find all prime factors of a number N
void primeFactors(int N) {
    vector<int> primes;

    // Using the Sieve of Eratosthenes to generate primes up to sqrt(N)
    bool isPrime[1000001];
    fill(isPrime, isPrime + 1000001, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= 1000000; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= 1000000; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Collect all primes
    for (int i = 2; i <= 1000000; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    // Start the factorization process
    cout << N << " = ";
    bool first = true;

    for (int prime : primes) {
        if (prime * prime > N) break; // No need to check beyond sqrt(N)

        int count = 0;
        while (N % prime == 0) {
            N /= prime;
            count++;
        }

        if (count > 0) {
            if (!first) cout << " * ";
            cout << prime << " ^ " << count;
            first = false;
        }
    }

    // If there's any prime factor left greater than sqrt(N), it must be prime
    if (N > 1) {
        if (!first) cout << " * ";
        cout << N << " ^ 1";
    }

    cout << endl;
}

int main() {
    int N;
    cin >> N;
    primeFactors(N);
    return 0;
}
