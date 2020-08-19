#include<stdio.h>

int main(){
	int n, r, x, y;
	scanf("%d", &n);
	scanf("%d", &r);
	scanf("%d", &x);
	scanf("%d", &y);
	int c[n];
	for(int i =0; i<n ; i++){
		scanf("%d", &c[i]);
	}
	int s[n];
	for(int i =0; i<n ; i++){
		scanf("%d", &s[i]);
	}
	int newrating = r;
	for(int i=0; i<n; i++){
		if(c[i]){
			if(s[i]){
				newrating += x;
			}
			else{
				newrating -= y;
			}
		}
	}
	if(newrating>r){
		printf("promoted");
	}
	else if(newrating < r){
		printf("demoted");
	}
	else
	printf("no change");
	
	return 0;
}
