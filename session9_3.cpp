#include<stdio.h>
int main(){
int index,b;
int max=100;
int a[max];
printf("nhap mang\n");
scanf("%d",&b);
if(b<0||b>max+1){
	
	printf("ko hop le");
}
	for(int i=0;i<b;i++){
		printf("nhap vi tri thu %d\n",i+1);
		scanf("%d",&a[i]);
	}
	

printf("nhap vi tri can xoa\n");
scanf("%d",&index);


for(int i =index-1;i<b;i++){
	a[i]=a[i+1];
}
b--;
for(int i =0;i<b;i++){
	printf("%d ",a[i]);
}



return 0;

}

