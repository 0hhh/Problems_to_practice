#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main() {
	// input
	int n = 8;
	vector<int> arr = { 2, -3, 5, -1, 1, -2, 4, -1 };
	// int arr[n] = { 2, -3, 5, -1, 1, -2, 4, -1 };
	
	// kadane's algorithm
	// intialize the ans and suff_max with the first element
	int ans = arr[0], suff_max = arr[0];

	// iterate over all the remaining elements
	for (int i = 1; i < n; i++) {
		// suff_max is maximum sub array sum ending at pos i
		suff_max = max(suff_max + arr[i], arr[i]);
		// ans is maximum of ans and the current suff_max
		ans = max(ans, suff_max);
	}
	// output
	cout << ans << endl;
    return 0;
}