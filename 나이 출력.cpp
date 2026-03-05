#include <stdio.h>

int solution(int age) {
    int answer = 2022 - age + 1;
    return answer;
}

int main(void) {
    int age;
    scanf("%d", &age);
    printf("%d\n", solution(age));
    return 0;
}
