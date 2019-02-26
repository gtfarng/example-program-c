#include <stdio.h>
#include <stdlib.h>
int sumRange(int a, int b){
    int sum = 0,i;
    for(i = a;i<=b;i++){
        sum += i;
    }
    return sum;
}
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", sumRange(a, b));
    return 0;
}
