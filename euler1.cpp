//
//  main.cpp
//  Euler problem 1
//  If we list all the natural numbers below 10 that are multiples of 3 or 5, 
// we get 3, 5, 6 and 9. The sum of these multiples is 23.
//  Find the sum of all the multiples of 3 or 5 below 1000.
//
//  Created by Sophie Machin on 05/01/2015.
//  Copyright (c) 2015 Sophie Machin. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int  i = 0; //counting to 1000
    int  j = 1; //term before previous term
    int  k = 2; //previous term
    int  l = 0; //current term
    int  total = 0;
    
    //  choose for-loop to be 10,000 to catch all terms under 4 million
    for(i=0; i<10000; i++) 
    {
        l = j + k;
        if(l%2==0){
            total+=l;}
        j=k; // updating values
        k=l; // updating values
        if(l>4000000) // if the total exceeds 4 million, break out of for-loop
            break;
    } 
    cout << "Total is  " << total +2 << endl;

}
