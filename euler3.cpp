//
//  main.cpp
//  Euler problem 3
//
//  Created by Sophie Machin on 05/01/2015.
//  Copyright (c) 2015 Sophie Machin. All rights reserved.
//

#include <iostream>

using namespace std;

//finding largest prime factors

int main()
{
    long long i = 0; //to find factors
    long long j = 0; // to check if prime
    long long half = 600851475143/2 + 1; // diving by 2 so that we dont waste time searching for numbers that cant be factors
    int count;
    
    for(i=3; i<half; i+=2) //looping to find prime factors, incrementing by 2 to ignore all even numbers
    {
        if(600851475143%i == 0) //looks for remainder, if 0 contintues on to check if prime
            {
                
                
                for(j=1; j<i  ; j+=2) //execute only if a factor is found
                {
                    if (i == 59569 && j == 71)
                        cout << " 59569 and 71" << endl;
                   
                    if(i%j ==0) // testing to see if found factor is prime. if it has factors,
                        count++;
                    
                }
               if (count == 2)
                cout << "Largest prime factor is " << i << endl;
            }
            
       
        
    }
    
   
}
