#include <bits/stdc++.h>
using namespace std;

// get sieve for first n numbers
vector<bool> getSieve(int n) {

	// initially set all the numbers as prime
	vector<bool> sieve(n + 1, 1);
	for (int i = 2; i <= n; i++) {

		// if the current number is prime
		if (sieve[i]) {
			// set all the multiples as non prime
			for (int j = i * i; j <= n; j += i) {
				sieve[j] = false;
			}
		}
	}
	return sieve;
}

int main() {
	// testing getSieve function
	int N = 20;
	vector<bool> primes = getSieve(N);

	for (int i = 2; i <= N; i++) {
		cout << i << ": " << primes[i] << endl;
	}
}