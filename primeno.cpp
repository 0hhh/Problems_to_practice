#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;

	// check all the number for 2 to sqrt(n) 
	// whether they any of them is divisible by n or not 
	for (int i = 2; i * i <= n; i++) {

		// if i is divisible by n then n is not prime
		if (n % i == 0) {
			return false;
		}
	}	
	return true;
}

int main() {

	// primes in first 10 number
	for (int i = 1; i <= 10; i++) {
		cout << i << ": " << isPrime(i) << endl;
	}
}