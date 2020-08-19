#include<stdio.h>
#include<string.h>

void minus(char *smaller, int n){
	int i = n-1;
	while(smaller[i] == '0' && i>=0){
		smaller[i] = '1';
		i--;
	}
	if(i <= 0){
		printf("-1");
		
	}
	
	smaller[i] = '0';
}

void plus(char *bigger, int n){
	int i = n-1;
	while(bigger[i] == '1' && i>=0){
		bigger[i] = '0';
		i--;
	}
	
	if(i <= 0){
		printf("-1");
		
	}
	bigger[i] = '1';
}

int main(){
	int n;
	scanf("%d", &n);
	char avg[n+1];
	char temp[n+1];
	scanf("%s", &avg);
	strcpy(temp, avg);
	minus(avg, n);
	plus(temp, n);
	return 0;
}
