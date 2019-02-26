#include <stdio.h>
#include <stdlib.h>

typedef struct
{ char title[70];
char author[50];
int year;
float price;
} book;

void input(book b[], int n)
{ int i; for(i=0;i<n;i++)
   {   fflush(stdin);
        scanf(" %[^\n]", b[i].title);
        scanf(" %[^\n]", b[i].author);
        scanf(" %d %f", &b[i].year, &b[i].price);
     }

}

void printb(book b[], int n)
{ int i;
   for(i=0;i<n;i++)
   {   printf("%s\n", b[i].title );
        printf("%.2f\n", b[i].price);
   }
}

void discount(book b[], int n, float p ){
    int i;
    for(i=0;i<n;i++)
    {
        b[i].price = b[i].price-((b[i].price*p)/100);
    }
}

int main( )
{    int n;  book bks[100];
      float p=7.5;

      scanf("%d", &n);  // number of books
      input(bks, n);
      discount(bks,n,p);
      printf("After discount %.2f%%\n", p);
      printb(bks, n);
      return 0;
}
