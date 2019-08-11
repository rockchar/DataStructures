//
//  main.cpp
//  Vectors
//
//  Created by RockChar on 11/08/19.
//  Copyright © 2019 RockChar. All rights reserved.
//  Program demonstrating the use of vectors
//

#include <iostream>
//to use a vector we need to include the standard vector header
#include <vector>

//function declarations
void NumberChoice();


//main
int main(int argc, const char * argv[]) {
    // insert code here...
    // the following creates an integer array of size 3
    std::vector<int> a(3);
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    std::cout <<"element2="<<a[1]<<"\n";
    // note that vectors do not have a boundary check and the runtime
    // will not throw any specific runtime exception but the behavior
    // will be undefined
    a[3] = 4; //out of bounds assignment but no exception will be thrown
    NumberChoice();
    return 0;
}

/*
 DEMO program. The program repeatedly choses random numbers between 1 and 100
 and outputs the number of times each number has occured
 */

void NumberChoice(){
    const int DIFFERENT_NUMBERS = 100;
    //prompt for and read the number of numbers to be generated
    int totalNumbers = 0;
    std::cout<<"Enter the toal numbers to be generated :";
    std::cin>>totalNumbers;
    //create the array
    //note that we have a +1 as its easier to count the numbers
    //between 1 and 100 as array size of 100 will be indexed between
    //0 and 99
    std::vector<int> numbers( DIFFERENT_NUMBERS+1 );
    
    //initialise the vector array to 0
    for( int i = 0 ; i < numbers.size() ; i++ )
    {
        numbers[i] = 0;
    }
    
    //now we generate the numbers
    for(int i = 0 ; i < totalNumbers ; i++)
    {
        //the remainder will always be less than DIFFERENT_NUMBER
        numbers[rand() % (DIFFERENT_NUMBERS+1) ]++;
    }
    
    //output the summary
    for( int i = 0 ; i < totalNumbers ; i ++ )
    {
        std::cout<< i << " occurs " <<numbers[i]<< " Times\n";
    }
}
