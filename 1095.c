#include <stdio.h>

int main(){
	int a, i, j, n, arr[10000] = {}, min=24;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		if(min>arr[i])
			min=arr[i];
	}
	
	printf("%d ", min);
	
	return 0;
}
