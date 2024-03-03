#include<stdio.h>
int main(){
int n,c;
printf("Enter the array size: ");
scanf("%d",&n);
int a[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
printf ("Array Elements : ");
for(int i=0;i<n;i++){
	printf("%d  ",a[i]);
	}
printf("\n");
for(int i=0;i<n/2;i++){
	c= a[i];
	a[i]=a[n-i-1];
	a[n-i-1]=c;
	}
printf ("Reverse of the array : ");
for(int i=0;i<n;i++){
	printf("%d  ",a[i]);
	}
printf("\n");
return 0;
}
