#include <iostream>
using namespace std;

int main(){
    int n;
    int fact = 1;
    cout <<"Enter a number to calculate the factorial :";
    cin>> n;

    for(int i =1; i<=n; i++){
        fact *= i; // n *= i আর n = n * i একই।
    }
    cout <<"Factorial of " <<n <<"is :" <<fact;
}