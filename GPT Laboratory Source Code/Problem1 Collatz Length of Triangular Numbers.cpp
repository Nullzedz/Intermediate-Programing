#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long computeCollatzLength(long long n);
void printFirstTriangleWithCollatzLengthGreaterThan(int input);
int main() {
    int input = 0;
    cin >> input;
    printFirstTriangleWithCollatzLengthGreaterThan(input);
    return 0;
}

void printFirstTriangleWithCollatzLengthGreaterThan(int input){
    long long i = 1;
    while(true){
        long long TriangleNumber = i*(i+1)/2;
        long long collatzLength = computeCollatzLength(TriangleNumber);
        if(collatzLength > input){
            cout << TriangleNumber << endl;
            break;
        }
        i++;
    }
}

long long computeCollatzLength(long long n){
    if (n == 1){
        return 1;
    }else if(n % 2 == 0){
        return 1 + computeCollatzLength(n/2);
    }else{
        return 1 + computeCollatzLength(3*n+1);
    }
}

