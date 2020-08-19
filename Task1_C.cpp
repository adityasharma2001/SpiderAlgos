#include<stdio.h>

int main(){
	int arr[6] = {10, 8, 7, 16, 9, 43};
	int query[4];
	int final[6];
	printf("1 3 :");
	scanf("%d", &query[0]);
	printf("2 3 :");
	scanf("%d", &query[1]);
	printf("4 5 :");
	scanf("%d", &query[2]);
	printf("5 6 :");
	scanf("%d", &query[3]);
	for(int i = 0; i<6; i++){
		if((query[0]%arr[i]==0) && (query[1]%arr[i]==0)){
			final[2] = arr[i];
			for(int j = 0; j<6; j++){
				if(j == i){
					continue;
				}
				else if(query[0]%arr[j]==0){
					final[0] = arr[j];
				}
				else if(query[1]%arr[j]==0){
					final[1] = arr[j];
				}
			}
		}
		
		if((query[2]%arr[i]==0) && (query[3]%arr[i]==0)){
			final[4] = arr[i];
			for(int j = 0; j<6; j++){
				if(j == i){
					continue;
				}
				else if(query[2]%arr[j]==0){
					final[3] = arr[j];
				}
				else if(query[1]%arr[j]==0){
					final[5] = arr[j];
				}
			}
		}
	}
	
	for(int i =0; i<6; i++){
		printf("%d", final[i]);
	}
	return 0;
}
	
