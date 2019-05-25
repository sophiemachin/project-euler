//
//  main.cpp
//  Euler problem 2
//
//  Created by Sophie Machin on 05/01/2015.
//  Copyright (c) 2015 Sophie Machin. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int  i = 0; //counting to 1000
    int total = 0; //running sum
    
    for(i=0; i<1000; i++)
    {
        if(i%3==0 || i%5==0 )     //finding multiples of either 3 or 5
            total+=i;          // adding new multiple to running sum
    }
    
    cout << "Total is  " << total << endl;
    
    
    
    
}