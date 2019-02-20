// C Program to print the Fibonacci Series upto n using do while loop

#include <stdio.h>
int main()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    printf("Enter a desired number: ");
    scanf("%d", &n);

    // displays the first two terms which is always 0 and 1
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    nextTerm = t1 + t2;
    
    do{
    	
    	printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    	
	}while(nextTerm <= n);
    
    return 0;
}
