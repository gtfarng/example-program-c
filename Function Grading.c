#include <stdio.h>
#include <stdlib.h>
char grading(int s){
    if(s >= 0 && s < 50){
        return 'E';
    }
    else if(s >= 50 && s < 60){
        return 'D';
    }
    else if(s >= 60 && s < 70){
        return 'C';
    }
    else if(s >= 70 && s < 80){
        return 'B';
    }
    else if(s >= 80 && s <= 100){
        return 'A';
    }
}
int main()
{
    int score;
    scanf("%d", &score);
    while ( score >= 0 )
    {
        printf("%c\n", grading(score) );
        scanf("%d", &score);
    }

    exit(EXIT_SUCCESS);
}