//
//  main.c
//  Assignment2FuzzBizzNezz
//
//  Created by Michael Reining on 11/3/14.
//  Copyright (c) 2014 Michael Reining. All rights reserved.
//

#include <stdio.h>

int fuzz;
int bizz;
int nezz;

// Function to get user inputs for Fuzz, Bizz, and Nezz.
void inputFuzz () {
    printf("Please input an integer value for Fuzz: ");
    scanf("%d", &fuzz);
    while (fuzz <=0) { // check to make sure user added a positive integer value
        printf("Please try again.  Enter an integer value for Fuzz greater than 0: ");
        scanf("%d", &fuzz);
    }
    
}

void inputBizz () {
    printf("Please input an integer value for Bizz: ");
    scanf("%d", &bizz);
    while (bizz <=0) {
        printf("Please try again.  Enter an integer value for Bizz greater than 0: ");
        scanf("%d", &fuzz);
    }
    
}

void inputNezz () {
    printf("Please input an integer value for Nezz: ");
    scanf("%d", &nezz);
    while (nezz <=0) {
        printf("Please try again.  Enter an integer value for Bizz greater than 0: ");
        scanf("%d", &nezz);
    }
    
}

// Function to print FuzzBizzNezz numbers.  Using for loop with variables above

void printNumbers () {
    for (int number =1; number <= nezz; number++) {
        if (number % fuzz == 0 && number % bizz == 0) {
            printf("FizzBuzz\n");
        } else if (number % fuzz == 0) {
            printf("Fuzz\n");
        } else if (number % bizz == 0) {
            printf("Bizz\n");
        } else {
            printf("%d\n",number);
        }
    }

}



int main(int argc, const char * argv[]) {
    // Collect User Inputs for Fuzz, Bizz, Nezz
    
    inputFuzz();
    inputBizz();
    inputNezz();
    
    printf("\nHere are the user inputs:\nFuzz = %d\nBizz = %d\nNezz = %d\n\nBelow are the FuzzBizzNezz Numbers\n\n",fuzz, bizz,nezz);
    
    // Print numbers and execute logic
    printNumbers();

    
    return 0;
}
