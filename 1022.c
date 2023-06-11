#include <stdio.h>

int main(){
	char data[2001];
	fgets(data, 2000, stdin); //fgets(): 공백문자가 포함되어있는 문장을 입력 저장 
	printf("%s", data);
	
	return 0;
}
