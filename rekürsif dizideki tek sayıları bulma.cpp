#include <stdio.h>
int tek_sayi_bulma(int dizi[], int n){
	if(n<0)
	return 0;
	
	if(dizi[n-1] % 2!= 0)
	return tek_sayi_bulma(dizi, n-1) + 1;
	 
	else
    return tek_sayi_bulma(dizi, n-1);
}
int main(){
	int dizi[100];
	int n, i;
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("dizi[%d]:", i);
		scanf("%d", &dizi[i]);}
		
	printf("%d", tek_sayi_bulma(dizi, n));
	return 0;
}


