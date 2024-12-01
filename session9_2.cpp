#include<stdio.h>
int main(){
	int index,value;
int a[5]={1,2,3,6,5};
printf("nhap vi tri can sua");
scanf("%d",&index);
printf("nhap gia tri can sua");
scanf("%d",&value);
 a[index-1]=value;
for (int i =0;i<5;i++){
	printf("%d ",a[i]);
}

return 0;

}

