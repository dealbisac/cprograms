// Escape Sequence : New Line

#include<stdio.h>
int main(){
	
	char* s1 = "A\0725";
	char* s2 = "B\x4a"; 
	
	printf("Use of \t Tab takes 8 spaces.\n");
	printf("Use of new line \n");
	printf("Use of vertical tab \v is this \n");
	printf("When you use Backslash(\\) use this \\\\\n");
	printf("Hello fri \r ends");
	printf("\''This is single quote\'\n");
	printf("\" This is enclosed in double quote\"\n");
	printf("What is C Programming \?\n");
	printf("\nnn987\n");
	printf("%s", s1); 
	
	/*
	Here 000 is one to three octal digits(0….7) means there must be atleast one octal digit
	 after \ and maximum three.Here 072 is the octal notation, first it is converted to decimal
	  notation that is the ASCII value of char ‘:’. 
	  At the place of \072 there is : and the output is A:5.
	*/
	printf("%s", s2); 
	
	/*
	Here hh is one or more hexadecimal digits(0….9, a…f, A…F).There can be more than one hexadecimal number 
	after \x. Here, ‘\x4a’ is a hexadecimal number and it is a single char. Firstly it will get converted into 
	decimal notation and it is the ASCII value of char ‘J’. 
	Therefore at the place of \x4a, we can write J. So the output is BJ.	
	*/
	
	
	return 0;
	
}
