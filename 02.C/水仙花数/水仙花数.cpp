#include<stdio.h>

int main()
{
	int g,s,b,n;            //�������
	for (n=100;n<1000;n++) //ѭ�� 
	{
		g=n%10;             //��λ 
		s=n/10%10;          //ʮλ 
    	b=n/100;            //��λ
		if (b*100+s*10+g==g*g*g+s*s*s+b*b*b)//�ж� 
		{
			printf ("%d\n",n);//��� 
		}	
    }
	return 0;
}
