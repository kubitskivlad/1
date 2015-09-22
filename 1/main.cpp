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
int factor (int n)
{
	int g = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 5; k <= n; k *= 5 )
        {
            if ((i % k) == 0)
            {
                g++;
            }
        }
    }
       return g;
}



void assert ( int n, int result)
{
	
	if (factor(n)==result)
	{
		cout << "Ok" << endl;
	}
	else 
		cout <<"Fail " << endl;
}
int main()
{
   assert(3,0);
    assert(5,1);
    assert(7,1);
    assert(10,2);
    assert(15,3);
	system("pause");
    return 0;
}
