#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
printf("Hello");

fork(); 
//0 for child 
// <0 for error
//  else PID

printf("helloworld");   //prints 2 times

}
