#include <stdio.h>

int main()
{
	int N,K;
	int value, count=0;

	/*
	scanf("%d %d", &N, &K);
	value = K;
	int coin[N];

	for(int i=0;i<N;i++){
		scanf("%d", &coin[i]);
	}
	*/
	


// TEST CASE
	
	N = 10;
	K = 4790;
	value=K;
	int coin[10] = {1,5,10,50,100,500,1000,5000,10000,50000};
	

	for(int i=N;value>0;i--){
		if(value/coin[i]){
			count += value/coin[i];
			value %= coin[i];
			printf("  [%d] value : %d, count : %d\n",coin[i],value,count);
		}
	}

	printf("%d\n", count);
}

