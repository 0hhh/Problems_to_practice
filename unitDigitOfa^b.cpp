#include<iostream>
using namespace std;

int LastDigit( int a, int b )  {

    int ans =1;

    if (b==0) return ans;
    
    // find unit digit of a^b
    // unit digit of a
    a = a%10;
    // Reminder of b divided by 4
    b = b%4;
    
    for (int i = 0; i < b; i++) {
        ans=a*ans;
        ans=a%10;
    }
    return ans%10;
}

int main() {
    int a,b;
    cout << "Enter a and b: " << endl;
    cin >> a >> b;
    cout << LastDigit(a, b);
    return 0;
}