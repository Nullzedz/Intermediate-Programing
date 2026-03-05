#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void WellorderedPair(int n)
{
    int x = n;
    int temp = 0;
    int y = 0;
    while (x > 0)
    {
        y = x;
        temp = y;

        while (y > 0)
        {
            if (y % 10 < temp)
            {
                temp = y % 10;
                y /= 10;
            }
            else
            {
                break;
            }
        }
        if(y>0){
            cout<<x<<":NotWellOrdered"<<endl;
        }else{
            cout<<x<<":WellOrdered"<<endl;
        }
        x/=10;
    }
}

int collatz(int n)
{
    if (n == 1)
        return 1;

    if (n % 2 == 0)
        return 1 + collatz(n / 2);
    else
        return 1 + collatz(3 * n + 1);
}

void collatzTriangle()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int triangle = 0;

    for (int i = 1; i <= n; i++)
    {
        triangle += i;

        cout << triangle << " : " << collatz(triangle) << endl;
    }
}

#include <iostream>
using namespace std;

void compute()
{
    int x = 39, y = 9;
    int temp = 1;

    for (int i = x; i < 60; i += 5)
    {
        temp = 1;
        x = i;
        y = 9;

        while (temp > 0)
        {
            temp = x % y;
            x = y;

            if (temp != 0)
                y = temp;
        }

        cout << y << " ";
    }
}

    int main()
    {
        int input = 132434;

        WellorderedPair(input);
        /*explination: a C++ code that checks if a number is Well Ordered (15 pts). 
        A number is Well Ordered if its digits increase from left to right. 
        The program checks digits using %10 and /10. If the order breaks, 
        it prints NotWellOrdered.*/

        compute();
        /* explination: The while loop calculates the Greatest Common Divisor (GCD) of x and 9 using the Euclidean Algorithm.*/

        collatzTriangle();
        /* explination: a C++ code that would get the Collatz Cycles n triangle number(s)
        sequence (15 pts). Triangle number is 1+2+3.... Output: 1:1, 3:8, 6:9... */
    }   