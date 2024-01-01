#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d", &a);
    if(90<=a && a<=100){
        printf("A");
    }
    else if(70<=a && a<90){
    	printf("B");
	}
	else if(40<=a && a<70){
    	printf("C");
	}
	else{
    	printf("D");
	}
}

