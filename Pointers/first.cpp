//Intro Program of Pointer
#include<stdio.h>
int main(){
/*
Pointers in C language is a variable that stores/points the address of another variable. 
A Pointer in C is used to allocate memory dynamically i.e. at run time. 
The pointer variable might be belonging to any of the data type such as int, float, char, double, short etc.
Pointer Syntax : data_type *var_name; Example : int *p;  char *p;
Where, * is used to denote that “p” is pointer variable and not a normal variable.

*/
   int *ptr, q;
   q = 50;
   /* address of q is assigned to ptr */
   ptr = &q;
   /* display q's value using ptr variable */
   printf("%d", *ptr);
   return 0;
}

