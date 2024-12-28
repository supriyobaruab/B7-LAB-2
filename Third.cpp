#include <iostream>
#include <iomanip> // লাইব্রেরী দশমিক এর।
using namespace std;

int main(){
    float balance = 100000;
    float interest = (6.5/100);
    int year = 6;
    
    for(int i =1; i<=year; i++){
        balance = (balance * interest)+balance;
    }
    cout << fixed << setprecision(2); // দশমিক এর জন্য।
    cout <<"Final Balance with interest : " <<balance <<endl;
}
