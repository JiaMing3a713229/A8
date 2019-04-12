/* 
題目名稱:作業08
製作:呂家明 
修改/完成日期:2019/4/9
*/

#include<stdio.h>
#include<stdlib.h>

void deal_exchange(int,int,int[]);//處理交易副函式 
int main(void){
	int customer_number;//n個顧客 
	int exchange_number;//n筆交易

	
	printf("請輸入顧客數量");	
	scanf("%d",&customer_number);
		
	int customer_array[customer_number]={0};//customer_array[]儲存顧客的金錢，初值為0 
		
	printf("請輸入幾筆交易");
	scanf("%d",&exchange_number);
	
	deal_exchange(customer_number,exchange_number,customer_array);
	
	return 0;
	system("pause");
} 
/*
*int customer_number n個顧客 
*int exchange_number 交易筆數 
*int customer_array[] 儲存顧客金額 
*/
void deal_exchange(int customer_number,int exchange_number,int customer_array[]){
	
	int i,mode;//i迴圈用,mode存款、提款 
	int customer,exchange;//第n個客戶的錢 交易金額 
	
	printf("開始交易");
	printf("交易格式:&customer,&mode,&exchange\n");
	//執行n筆交易 
	for(i=0;i<exchange_number;i++){
		printf("第%d筆交易\n",i);
		scanf(" %d%d%d",&customer,&mode,&exchange);
			
		switch(mode){
		case 0://存款 
			customer_array[customer]+=exchange;
			break;
		case 1://提款 
			customer_array[customer]-=exchange;
			break;
		}
		
		if(customer_array[customer]<0){
			printf("%d號存款不足,再輸入一次\n",i);
			i-=1;
		}
		
	}
	printf("result:\n");
	
	for(i=0;i<customer_number;i++){
		printf("%d號顧客:%d\n",i,customer_array[i]);
	} 
		
	
}
