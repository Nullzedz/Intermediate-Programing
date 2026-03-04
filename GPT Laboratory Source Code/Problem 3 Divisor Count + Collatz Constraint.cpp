#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long countDivisorsRecursively(int n, int i = 1){
    if(i * i > n) return 0;
    if(i * i == n){
        return 1 + countDivisorsRecursively(n, i + 1);
    }
    if(n % i == 0){
        return 2 + countDivisorsRecursively(n, i + 1);
    }else{
    return countDivisorsRecursively(n, i + 1);
    }
}
long long computeCollatzLength(long long n){
    if(n == 1) return 1;
    if(n % 2 == 0){
        return 1 + computeCollatzLength(n/2);
    }else{
        return 1 + computeCollatzLength(3*n+1);
    }
}

void CheckifDivisorandCollatzLenghtisEqual(int Input_X,int Input_Y){
    const int LIMIT = 1000000;
    for(long long j = 1; j <= LIMIT; j++){
        long long CL = computeCollatzLength(j);
        long long CRD = countDivisorsRecursively(j);
        if(CL == Input_Y && CRD == Input_X){
            cout<<j;
            return;
        }
    
    }
    cout << "No solution found within range." << endl;
}

int main() {
    int Input_X = 0;
    int Input_Y = 0;
    cin >> Input_X >> Input_Y;
    CheckifDivisorandCollatzLenghtisEqual(Input_X,Input_Y);
    
return 0;
}