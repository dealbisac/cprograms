//Escape Sequence Example

#include<stdio.h>    
int main(){    
     int number=50; 
     int age;
     /*
     Escape Sequence	Meaning
     ----------------------------
	 \a					Alarm or Beep
	 \b					Backspace
	 \f					Form Feed
	 \n					New Line
	 \r					Carriage Return
	 \t					Tab (Horizontal)
	 \v					Vertical Tab
	 \\					Backslash
	 \'					Single Quote
	 \"					Double Quote
	 \?					Question Mark
	 \nnn				octal number
	 \xhh				hexadecimal number
	 \0					Null
     
     
     */
     
	printf("\a"); 
    printf("You\nare\nlearning\n\'c\' language\n\"Do you know C language\"");  
    scanf("%d", &age);
    
	
return 0;  
}     


