#include <stdio.h>
#include <stdlib.h>

typedef struct {
      char name[30];
      float gpa;
} Student;

int main()
{   Student s1,s2,s3;
    char f[30],s[30],t[30];
     scanf(" %[^\n] %f", s1.name, &s1.gpa);
     scanf(" %[^\n] %f", s2.name, &s2.gpa);
     scanf(" %[^\n] %f", s3.name, &s3.gpa);

    if(s1.gpa > s2.gpa && s1.gpa > s3.gpa){
        strcpy(f,s1.name);
    }
    else if((s1.gpa < s2.gpa && s1.gpa > s3.gpa) || (s1.gpa > s2.gpa && s1.gpa < s3.gpa)){
       strcpy(s,s1.name);
    }
    else if(s1.gpa < s2.gpa && s1.gpa < s3.gpa){
        strcpy(t,s1.name);
    }
    if(s2.gpa > s1.gpa && s2.gpa > s3.gpa){
        strcpy(f,s2.name);
    }
    else if((s2.gpa < s1.gpa && s2.gpa > s3.gpa) || (s2.gpa > s1.gpa && s2.gpa < s3.gpa)){
        strcpy(s,s2.name);
    }
    else if(s2.gpa < s1.gpa && s2.gpa < s3.gpa){
        strcpy(t,s2.name);
    }
    if(s3.gpa > s2.gpa && s3.gpa > s1.gpa){
        strcpy(f,s3.name);
    }
    else if((s3.gpa < s2.gpa && s3.gpa > s1.gpa) || (s3.gpa > s2.gpa && s3.gpa < s1.gpa)){
        strcpy(s,s3.name);
    }
    else if(s3.gpa < s2.gpa && s3.gpa < s1.gpa){
        strcpy(t,s3.name);
    }
    printf("First: %s\n",f);
    printf("Second: %s\n",s);
    printf("Third: %s\n",t);

     return 0;
}
