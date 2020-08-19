#include<stdio.h>
#include<string.h>

int main(){
	long long n;
	scanf("%lld", &n);
	char string[n];
	scanf("%s", &string);
	if(n == 1){
		printf("0");
		return 0;
	}
	char arr[n/2];
	int count = 0;
	strncpy(arr, string, n/2);
	arr[n/2] = '\0';
	while(strcmp(string + n/2, arr) == 0){
		count++;
		n = n/2;
		strncpy(string, string, n);
		string[n] = '\0';
		strncpy(arr, string, n/2);
		arr[n/2] = '\0';
		}
		printf("%d", count);
		return 0;
	}

