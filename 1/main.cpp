//
//  main.cpp
//  1
//
//  Created by Kubitski Vlad on 15.09.15.
//  Copyright (c) 2015 Kubitski Vlad. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int factor (int n);

int main()
{
   int n;
    cout<<"vvedite chislo ";
    cin>>n;
    cout<<"otvet "<<factor(n);
}



int factor (int n)
{
    int g = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 5; k < n; k *= 5 )
        {
            if ((i % k) == 0)
            {
                g++;
            }
        }
    }
    
    return g;
}