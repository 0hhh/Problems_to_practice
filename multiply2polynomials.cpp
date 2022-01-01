// C++ program to multiply two polynomials
// Simple method
#include <iostream>
using namespace std;

// Multiplication function
int *Multiplication(int A[],int B[],int m,int n){
    int *prod = new int[m+n+1];
    for (int i=0;i<m+n-1;i++){
        prod[i] =0;
    }

    for (int i=0; i<m; i++) {
        // Multiply the current term of first polynomial with each term of second polynomial.
        for (int j=0; j<n; j++){
        prod[i+j] = prod[i+j] + A[i]*B[j];
        }
    }
    return prod;
}

// polynomial printing function
void printPoly(int poly[], int n){
    for(int i=0;i<n;i++){
        cout << poly[i];
        if (i == 1) cout <<"x";
        if (i > 1) cout << "x^" << i ;
        if (i != n-1) cout << " + ";
    }
    cout << endl;
}

//Driver code
int main(){
    // Array stores coefficients of polynomial
    int A[] = {1,2,3};
    int B[] = {1,5,7,10};
    int m = sizeof(A)/sizeof(A[0]);
    int n = sizeof(B)/sizeof(B[0]);

    cout << "First polynomial is " <<endl;
    printPoly(A, m);
    cout << "Second polynomial is "<<endl;
    printPoly(B, n);

    int *prod = Multiplication(A, B, m, n);
    cout << "Product of 2 polynomial is "<<endl;
    printPoly(prod,m+n-1);
    return 0;
}