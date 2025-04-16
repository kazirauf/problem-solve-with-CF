#include <stdio.h>

int main (){
    int n;
    int x;
    int even = 0, odd = 0, positive = 0, negitive =0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
     scanf("%d", &x);
     if(x%2 == 0){
       even++;
     }
     else{
        odd++;
     }

     if(x > 0){
        positive++;
     }
     else if(x < 0){
        negitive++;
     }
       
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negitive);
    return 0;
}