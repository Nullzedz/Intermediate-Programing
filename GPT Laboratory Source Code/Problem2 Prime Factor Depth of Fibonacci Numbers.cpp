#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long computePrimeFactorDepth(long long n);
long long fibonacciGen(int n);
int main (){
    int input = 0;
    int i = 1;
    cin >> input;
    while(true){
    long long Fibnumber = fibonacciGen(i);
    long long Answer = computePrimeFactorDepth(Fibnumber);
    if(Answer == input){
        cout << Fibnumber << endl;
        return 0;
    }
    i++;
    }
    return 0;
}

long long computePrimeFactorDepth(long long n){
    if(n == 1){
        return 0;
    }

    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 1 + computePrimeFactorDepth(n / i);
        }
    }

    return 1;

}

long long fibonacciGen(int n){
    long long T1 = 0, T2 = 1, next = 0;
    for(int i = 1; i <= n; i++){
        next = T1 + T2;
        T1 = T2;
        T2 = next;
    }
    return next;
}
