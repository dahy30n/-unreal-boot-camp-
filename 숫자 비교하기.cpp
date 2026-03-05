#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    if (num1== num2)
    {
        return 1;
    }
    else return -1; 
}

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    printf(solution(a,b));
}
