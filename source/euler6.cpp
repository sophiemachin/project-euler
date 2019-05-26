//
//  main.cpp
//  Euler problem 6
//
//  Created by Sophie Machin on 06/01/2015.
//  Copyright (c) 2015 Sophie Machin. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int i;
 
    
    long sum_of_squares;
    long sum_of_integers;
    long difference;
    
    for(i=1; i<=100; i++)
        {
        sum_of_squares+= i*i;
        }
    
    
    for(i=1; i<=100; i++)
        {
        sum_of_integers+=i;
        }
            
    difference = sum_of_integers*sum_of_integers - sum_of_squares ;
    
    cout << "Difference is " << difference << endl;
    
    
    
}