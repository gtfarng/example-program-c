#include <stdio.h>
#include <stdlib.h>

int main()
{   int hr, mn, fee=0; 
    scanf("%d %d", &hr, &mn);
    if(mn>15)
        hr++;
	 if (hr > 0){
	        if (hr <= 4){
	            fee = 50;
	        }
	        else{
	            fee = 50+((hr-4)*10);
	        }
	 }
    
    printf("%d",fee);
    exit(EXIT_SUCCESS);
}