#include <stdio.h>

int main(){
    int a, b;
    int c=0;
    
    scanf("%d",&a);
    
    for(b=1;;b++){
        c=c+b;
        if(c>=a) {
            break;
        }
    }
    printf("%d",c);

    return 0;
} 
