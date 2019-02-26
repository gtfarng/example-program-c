#include <stdio.h>
void statusBP(int age, int low, int high){
    if(high > age+100 || low > 90){
        printf("Hypertension");
    }
    else if(high < 90 || low < 60){
        printf("Hypotension");
    }
    else{
        printf("Normal");
    }

}
int main(){
    int age, low, high;
    scanf("%d %d %d", &age, &low, &high);
    statusBP(age, low, high);
    return 0;
}