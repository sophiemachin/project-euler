//
//  main.cpp
//  Euler problem 4
//  Created by Sophie Machin on 05/01/2015.
//  Copyright (c) 2015 Sophie Machin. All rights reserved.
//
#include <iostream>
using namespace std;

int main()
{
    int i;
    int j;
    long int product;
    int HTh, TTh, Th, H, T, U;
    long lar = 0;
    long mult;
    int array[6];
    int rev[6];
    
    
    for(i=999; i>0; i--)
    {
        for (j=999; j>0; j--)
        {
            mult = i*j;
            product = i*j;
            HTh = product/100000;
            array[0] = HTh;
            product = product%100000;
            TTh = product/10000;
            array[1] = TTh;
            product = product%10000;
            Th = product/1000;
            array[2] = Th;
            product = product%1000;
            H = product/100;
            array[3] = H;
            product = product/100;
            T = product/10;
            array[4] = T;
            product = product%10;
            U = product;
            array[5] = U;
            
            for(int k =0; k<= sizeof(array))
            rev = array;
            
            array[
            
            if (HTh==U && TTh==T && Th==H){
                if(mult > lar)
                {lar = mult;
                    //cout << " TTh " << TTh ;
                    //cout << " T " << T ;
                }}
            
            
        }
        
    }
    cout << "Palindrome is " << lar << endl;
    cout << " T " << T ;
    

}
