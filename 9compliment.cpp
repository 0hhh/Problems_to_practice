#include<iostream>
using namespace std;

void complement(string number)
{
    for (int i=0 ; i < number.length() ; i++ )
        if (number[i] != '.')
            number[i] = '9' - number[i] + '0';
 
    cout << "9's complement is : " << number;
}
 
// Driver code
int main()
{
    string number;
    cout << "Enter any no : ";
    cin >> number;
    complement(number);
    return 0;
}

// void nineeq(int a){
//     int result=0;
    
//     for(int i=0;i<3;i++){
//         result= result*10 + (9-(a%10));
//         a=a/10;
//     }

//     cout<<result;
// }

// int main(){
//     int a;
//     cout<<"enter: ";
//     cin>>a;
//     nineeq(a);
//     return 0;
// }