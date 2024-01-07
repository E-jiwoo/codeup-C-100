#include <stdio.h>

int main(){
	int i, j, n, arr[10000] = {};
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(j=n; j>=1; j--){
		printf("%d ", arr[j]);
	}
	
	return 0;
}
