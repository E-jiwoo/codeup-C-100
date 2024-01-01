#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a%2==0){
        printf("even\n");
    }
    else{
    	printf("odd\n");
	}
    if(b%2==0){
        printf("even\n");
    }
    else{
    	printf("odd\n");
	}
    if(c%2==0){
        printf("even\n");
    }
    else{
    	printf("odd\n");
	}
}

/*#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%s\n", a%2==0 ? "even" : "odd");
    printf("%s\n", b%2==0 ? "even" : "odd");
    printf("%s\n", c%2==0 ? "even" : "odd");
    
    return 0;
}
*/
