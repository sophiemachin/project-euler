//
//  main.cpp
//  Euler problem 5
//
//  Created by Sophie Machin on 06/01/2015.
//  Copyright (c) 2015 Sophie Machin. All rights reserved.
//


#include <iostream>
using namespace std;

int main()
{
    long i;
    int j;

    
    for(i=2520; i<1000000000; i+=20)
    {
        for(j=2; j<=20; j++)
            {
            if(i%j!=0)
                break;
                
            if(j==20)
                    cout << "smallest multpiple is" << i<< endl;
            }
    }
    
    
}
    
                  
                  
        
