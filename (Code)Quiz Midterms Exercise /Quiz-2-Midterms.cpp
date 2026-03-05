#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int DivideSubRec(int x, int y){
    if(y>x){
        return 0;
    }else{
        return DivideSubRec(x-y,y)+1;
    }
}
double fRecursion(int n){
    if(n < 1){
        return 2;
    }else{
        return (1.0 / (3.0 * n * fRecursion(n - 3)));
    }
}
int FactthathasX(int x = 84, int y = 4){
    int f = 1;
    int count = 0;
    while(f<=x){
        if(x % y == 0 && x % 10 == y){
            count++;
        }
        f++;
    }
    return count;
}

int main(){

    for(int i = 0; i < 5; i++){
        cout << fixed << setprecision(2) << static_cast<double>(fRecursion(i)) << ',';
    }

}