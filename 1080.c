#include <stdio.h>

int main()
{
    int cnt=1, i, n, a=1;
	scanf("%d", &n);
	
	for(i=2; a<n; i++){
	    a+=i;
	    cnt++;
	}
	
	printf("%d", cnt);
	
	return 0;
}
