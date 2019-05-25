//
//  main.cpp
//  Euler problem 1
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
    
    for(i=0; i<10000; i++) // arbitrarily choose for-loop to be 10,000 to catch all terms under 4 million
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
