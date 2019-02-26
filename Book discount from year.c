#include <stdio.h>
#include <stdlib.h>
typedef struct
{ char title[70];
  char author[50];
  int year;
  float price;
} book;
void input(book b[], int n)
{
  int i;
   for(i=0;i<n;i++)
   {   fflush(stdin);
       scanf(" %[^\n]", b[i].title);
       scanf(" %[^\n]", b[i].author);
       scanf(" %d %f", &b[i].year, &b[i].price); }
}

void printb(book b[], int n)
{ int i;
   for(i=0;i<n;i++)
   {   printf("%s\n", b[i].title );
        printf("%.2f\n", b[i].price); }
}
void editPrice(book b[ ], int n, int y, float p1, float p2){
    int i;
    for(i=0;i<n;i++)
   {
       if(b[i].year < y)
            b[i].price += (b[i].price*p2)/100;
       else
            b[i].price += (b[i].price*p1)/100;
   }
}

int main( )
{    int n, y, i;
      book bks[100];
      float p1=-5,  p2=-10;
      scanf("%d%d", &n, &y); // nb of books and year
      input(bks, n);
      printf("Discount %.2f%% for books from year %d\n", p1, y);
      printf("Discount %.2f%% for books before year %d\n", p2, y);
      editPrice(bks,n,y,p1,p2);
      printf("After discount\n");
      printb(bks, n);
      return 0;
}
