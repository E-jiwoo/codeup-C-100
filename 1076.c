#include <stdio.h>
int main(){
   
   char x;
   int i;
   scanf("%c", &x);
   for(i='a'; i<=x; i++){
      printf("%c ", i);
   }
   return 0;   
}
