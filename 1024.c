#include <stdio.h>

int main(){
	int i;
	char arr[21];
	scanf("%s", arr);
	for(i=0; arr[i]!='\0'; i++ )
		printf("'%c'\n", arr[i]); 
	
	return 0;
}
