#include <stdio.h>

int main(){
    double d; //double 데이터형을 사용하면 +- 1.7*10-308 ~ +- 1.7*10308 범위의 실수를 저장할 수 있다
    scanf("%lf", &d); // double(long float) 형식으로 입력
    printf("%.11lf", d);
}
