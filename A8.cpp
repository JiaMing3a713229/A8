/* 
�D�ئW��:�@�~08
�s�@:�f�a�� 
�ק�/�������:2019/4/9
*/

#include<stdio.h>
#include<stdlib.h>

void deal_exchange(int,int,int[]);//�B�z����ƨ禡 
int main(void){
	int customer_number;//n���U�� 
	int exchange_number;//n�����

	
	printf("�п�J�U�ȼƶq");	
	scanf("%d",&customer_number);
		
	int customer_array[customer_number]={0};//customer_array[]�x�s�U�Ȫ������A��Ȭ�0 
		
	printf("�п�J�X�����");
	scanf("%d",&exchange_number);
	
	deal_exchange(customer_number,exchange_number,customer_array);
	
	return 0;
	system("pause");
} 
/*
*int customer_number n���U�� 
*int exchange_number ������� 
*int customer_array[] �x�s�U�Ȫ��B 
*/
void deal_exchange(int customer_number,int exchange_number,int customer_array[]){
	
	int i,mode;//i�j���,mode�s�ڡB���� 
	int customer,exchange;//��n�ӫȤ᪺�� ������B 
	
	printf("�}�l���");
	printf("����榡:&customer,&mode,&exchange\n");
	//����n����� 
	for(i=0;i<exchange_number;i++){
		printf("��%d�����\n",i);
		scanf(" %d%d%d",&customer,&mode,&exchange);
			
		switch(mode){
		case 0://�s�� 
			customer_array[customer]+=exchange;
			break;
		case 1://���� 
			customer_array[customer]-=exchange;
			break;
		}
		
		if(customer_array[customer]<0){
			printf("%d���s�ڤ���,�A��J�@��\n",i);
			i-=1;
		}
		
	}
	printf("result:\n");
	
	for(i=0;i<customer_number;i++){
		printf("%d���U��:%d\n",i,customer_array[i]);
	} 
		
	
}