#include <bits/stdc++.h>
#include <iostream>

using namespace std;
long long reverseDigitsRecursively(long long n, long long reversed = 0){
    if(n == 0) return reversed;
    else{
        return reverseDigitsRecursively(n/10,10*reversed + n % 10);
    }
}
long long computeDigitSumRecursively(long long n){
    if(n == 0) return 0;
    return (n % 10) + computeDigitSumRecursively(n / 10);
}
long long computeTriangularNumber(long long n){
    if (n <= 1) return n;
    return n * (n + 1) / 2;
}
bool isPrime(long long n){
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(long long i = 3; i * i <= n; i += 2){
        if(n % i == 0) return false;
    }
    return true;
}

void PalindromicTriangularPrimeDigit(long long x){
    long long i = max(1LL, x);
    while(true){
        long long triangleNumber = computeTriangularNumber(i);
        long long digitSum = computeDigitSumRecursively(triangleNumber);
        if(triangleNumber >= 10 && triangleNumber == reverseDigitsRecursively(triangleNumber) && isPrime(digitSum)){
            cout << triangleNumber;
            return;
        }
        i++;
    }
}



int main(){
    long long input=0;
    cin >> input;

    PalindromicTriangularPrimeDigit(input);
}