#include <stdio.h>
#include <string.h>

char function_name ( char (*str)[15] );

int main(){
    char *name;
    printf("%s",function_name(*name));

   return 0 ;
} 

char function_name ( char (*str)[15] ){

printf("Enter your name :");
gets(&str)[15];

}