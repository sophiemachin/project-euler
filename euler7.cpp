//
//  main.cpp
//  Euler problem 7
//
//  Created by Sophie Machin on 07/01/2015.
//  Copyright (c) 2015 Sophie Machin. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {

    long i;
    int j;
    long half;
    int count = 1;
    
    for(i=3; i<=1000000; i++)//go through natural numbers
    {
        
        half = i/2 +1 ;
        
        for(j=2; j<=(half+1); j++) //check if prime by diving by every integer smaller than its half
            {

                if(i%j == 0) //if natural number has a factor, break and go to next natural number
                    break;
                
                if(j==half) //end of possible factors, therefore a prime is found
                    count++; // running total of number of primes found so far
            }
     
        if(count == 10001) //if 10001 have been found, boom.
            {
            cout << "10001st prime is " << i << endl;
                break;
            }
       
    }
    
    
    

}


