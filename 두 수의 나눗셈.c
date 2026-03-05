#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    return (int)(( (double)num1 / num2 ) * 1000);
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    
    printf("%d\n", solution(a, b));
}
