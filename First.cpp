#include <iostream>
using namespace std;

int main(){
    int number;
    int count = 0;
    cout <<"Enter a number :";
    cin >>number;
    for(int i =2; i<number; i++){
        if(number % i ==0){
            count++;
            break;
        }
    }
    if(count == 0){
        cout <<number <<" is a prime number";
    }
    else{
        cout <<number <<" is not prime number";
    }
    return 0;
}