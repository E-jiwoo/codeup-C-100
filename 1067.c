#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d", &a);
    if(a<0){
        printf("minus\n");
    }
    else{
    	printf("plus\n");
	}
	if(a%2==0){
		printf("even\n");
	}
    else{
    	printf("odd\n");
	}
}

