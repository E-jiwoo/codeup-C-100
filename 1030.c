#include <stdio.h>

int main(){
    long long int n; // long long int 데이터형을 사용하면 -9,223,372,036,854,775,808 ~ +9,223,372,036,854,775,807 범위의 정수값을 저장시킬 수 있다
    scanf("%lld", &n);
    printf("%lld", n);
}