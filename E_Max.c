#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    int max = 0;
    for(int i = 1; i <= n; i++){
        int vul;
        scanf("%d", &vul);
        if(vul > max){
            max = vul;
         }
       
    }
    printf("%d ", max);
    return 0;
}