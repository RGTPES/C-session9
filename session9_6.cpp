#include<stdio.h>
int main(){
	int ans,max=100,arr[max][max],a,b,c,sum=0,pro=1,mSum = 0,maxA;
	do{
	

       printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        scanf("%d",&ans);
        switch(ans){
        	case 1:
        		 c =true;
        		printf("nhap so hang : ");
        		scanf("%d",&a);
        		printf("nhap so cot : ");
        		scanf("%d",&b);
        		for(int i =0;i<a;i++){
        			for(int j=0;j<b;j++){
        				printf("nhap gia tri hang thu %d cot thu %d : ",i+1,j+1);
        				scanf("%d",&arr[i][j]);
					}
				}
        		break;
        	case 3:
        		if(c==true){
        		
        			for(int i =0;i<a;i++){
        				for(int j=0;j<b;j++){
        				if(arr[i][j]%2!=0){
        					printf("%d ",arr[i][j]);
        					sum+=arr[i][j];
						}
        					
						}
					}
					printf("tong cac so le bang %d : ",sum);
				}
        		break;
        	case 2:
        		if(c==true){
        			for(int i=0;i<a;i++){
        				for(int j=0;j<b;j++){
        					printf("%d ",arr[i][j]);
						}
        				printf("\n");
					}
				}
        		break;
        	case 4:
        		if(c==true){
        		for(int i =0;i<a;i++){
        			for(int j =0;j<b;j++){
        				if(i==0||i==a-1||j==0||j==b-1){
        					printf("%d ",arr[i][j]);
        					pro*=arr[i][j];
						}
					}
				}printf("tich la %d",pro);
			}
        		break;
        	case 5:
        		if(c==true){
        		for(int i =0;i<a;i++){
        			for(int j=0;j<b;j++){
        				if(i==j){
        					printf("%d ",arr[i][j]);
						}
					}
				}
			}
        		break;
        	case 6:
        		if(c==true){
        		for(int i =0;i<a;i++){
        			printf("%d ",arr[i][b-i-1]);
				}
			}
        		break;
        	case 7:
        		if(c==true){
        			for(int i=0;i<a;i++){
        				sum =0;
        				for(int j=0;j<b;j++){
        					sum+=arr[i][j];
						printf("%d ",arr[i][j]);
						
						}if(sum>mSum){
							mSum=sum;
							maxA=i;
						
						
					}printf("\n");
				 		}
					
					printf("hang co tong lon nhat la %d ",maxA+1);
        		}
        		break;	
        		
        		
		}
		
    }while(ans!=8);



return 0;

}

