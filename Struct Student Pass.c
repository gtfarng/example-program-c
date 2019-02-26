#include <stdio.h>
#include <stdlib.h>
#define MAX 20
typedef struct
{  int stcode;  char name[30];
    float gpa;
} Student;
int nPass(Student s[ ], int n){
    int p=0,i;
    for(i=0;i<n;i++){
        if(s[i].gpa >= 2 ){
            p++;
            printf("%s\n",s[i].name);
        }
    }
    return p;
}
int main()
{   Student stds[MAX];

     int n, i, np;
     scanf("%d", &n);  // number of students
     for(i=0; i<n; i++)
     { scanf("%d", &stds[i].stcode);
        scanf("%s", stds[i].name);
        scanf("%f", &stds[i].gpa);
     }
    np = nPass (stds , n);
    printf("Number of pass students is %d", np);
     return 0;
} 
