#include <stdio.h>
#include <stdlib.h>
#define MAX 20
typedef struct
{  int stcode;  char name[30];
    float gpa;
} Student;
Student maxStudent(Student s[ ], int n){
    int i,max = 0;

    for(i=0;i<n;i++){
        if(s[i].gpa>s[max].gpa){
            max=i;
        }
    }
    return s[max];
}
float average(Student s[ ], int n){
    int i;
    float avg = 0;
    for(i=0;i<n;i++){
        avg += s[i].gpa;
    }
    return avg/n;
}
int main()
{   Student stds[MAX];
     Student maxSt;
     int n, i; float avg;
     scanf("%d", &n);  // number of students
     for(i=0; i<n; i++)
     { scanf("%d", &stds[i].stcode);
        scanf("%s", stds[i].name);
        scanf("%f", &stds[i].gpa);
     }
    maxSt = maxStudent( stds , n);
   printf("Max GPA is %.2f %s\n", maxSt.gpa, maxSt.name );
   avg = average( stds , n );
   printf("Average GPA is %.2f\n", avg);
   return 0;
}
