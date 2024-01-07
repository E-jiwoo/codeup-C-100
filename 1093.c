#include <stdio.h>

int main(){
	int a, i, j, n, arr[24]={};
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &j);
		arr[j]++;
	}
	
	for(j=1; j<=23; j++){
		printf("%d ", arr[j]);
	}
	
	return 0;
}
