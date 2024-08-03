#include "mbed.h"
#include <cstdio>
/*
Lab 1; part of this lab we learned how to commit code, set a flag using an interupt function, 
understand printf statements and optimise the code to the simplist form while still deliverying 
the same functional output.
*/

InterruptIn bluebtn(BUTTON1);
volatile int int_trig = 0;

void bttnFall(){
    int_trig = 1;
}


// main() runs in its own thread in the OS
int main()
{
    bluebtn.fall(&bttnFall);

    // this is a program for lab 1 embedded systems module
    while (true) {
        if(int_trig == 1){
            int_trig = 0;
            printf("bttnFall \r\n");
        
        }
    
    }
}