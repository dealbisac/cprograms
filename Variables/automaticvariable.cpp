//Automatic Variable Example

#include<stdio.h>
int main(){  

int x=10;//local variable (also automatic)  
auto int y=20;//automatic variable  

x++;
y++;

printf("The value of x is %d\n", x);
printf("The value of y is %d\n", y);

return 0;
}  


