#include <math.h>
#include <stdio.h>
#include <stdlib.h>
//hamming code

//
int transform (int number){
    int binary = 0;
    int module, i = 1;

    while (number!=0) {
        module = number % 2;
        number /= 2;
        binary += module * i;
        i *= 10;
    }
   return binary;  
}  
int main(int argc, char *argv[]){
    printf("%s", "Ascii ");
    printf("%s \n", argv[2]);
    const char *text =  argv[2];
    int number = (int)strtol(text, NULL, 0);
    
    int bin = transform(number);
    printf("%s", "Binary ");
    printf ("%d \n", bin);

 
}