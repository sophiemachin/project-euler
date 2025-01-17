//  Euler problem 2
// 
// Each new term in the Fibonacci sequence is generated by adding the previous
// two terms. By starting with 1 and 2, the first 10 terms will be:
// 
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// By considering the terms in the Fibonacci sequence whose values do not exceed
// four million, find the sum of the even-valued terms.
// 
//  Created by Sophie Machin on 05/01/2015.
//  Copyright (c) 2015 Sophie Machin. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int  i = 0;    				//counting to 1000
    int total = 0; 				//running sum
    
    for(i=0; i<1000; i++)
    {
        if(i%3==0 || i%5==0 )  //finding multiples of either 3 or 5
            total+=i;          // adding new multiple to running sum
    }
    
    cout << "Total is  " << total << endl;
    
    
    
    
}