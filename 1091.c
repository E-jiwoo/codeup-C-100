#include <stdio.h>

int main()
{
    long long int a, b, c, n, i;
    
    scanf("%lld %lld %lld %lld", &a, &b, &c, &n);
    for(i=1; i<n; i++){
        a =a * b + c;
    }
    
    printf("%lld", a);
    
    return 0;
}
