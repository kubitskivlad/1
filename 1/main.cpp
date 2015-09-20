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


int main()
{
    int n,g=0;
    cout<<"vvedite chislo ";
    cin>>n;
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
    cout<<"otvet "<<g;
}
