#include <stdio.h>
int main(){
	
int i,j,k,str;
printf("Satir sayisini giriniz.");
scanf("%d",&str);
for(i=1;i<=str;i++){        //satir
	
for(k=1;k<=str-i;k++){	   //bosluk
printf(" ");	
}	
for(j=1;j<=2*i-1;j++){ //yildiz	
	
printf("*");	
	
}	
printf("\n");	
	
	
	
	
	
}
}
