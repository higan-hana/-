#include<stdio.h>

int main()
{
	int g,s,b,n;            //定义变量
	for (n=100;n<1000;n++) //循环 
	{
		g=n%10;             //个位 
		s=n/10%10;          //十位 
    	b=n/100;            //百位
		if (b*100+s*10+g==g*g*g+s*s*s+b*b*b)//判断 
		{
			printf ("%d\n",n);//输出 
		}	
    }
	return 0;
}
