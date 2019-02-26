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
book oldest(book b[ ], int n){
    int min = 0;
    int i; for(i=0;i<n;i++)
    {
      if(b[i].year < b[min].year){
          min = i;
      }
    }
    return b[min];
}
float totalPrice(book b[ ], int n){
    float sum = 0;
    int i; for(i=0;i<n;i++)
    {
      sum += b[i].price;
    }
    return sum;

}
int main( )
{    int n;  book bks[100];
      book obk; float sum=0;
       scanf("%d", &n); // number of books
       input(bks, n);
       obk = oldest( bks , n);
       printf("The oldest book is %s\n", obk.title);
       printf("Total price = %.2f\n", totalPrice(bks, n) );
       return 0;
}
