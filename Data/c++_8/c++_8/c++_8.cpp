﻿//20318 최윤기
#include <iostream>
using namespace std;

int Fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
        return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
    int i;
    for (i = 1; i <= 15; i++)
        cout << Fibo(i) << endl;
}