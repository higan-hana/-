#include <stdio.h>

int fibonacci(int a)      //����쳲��������� 
{
    if (a<=0) 
	{
        return 0;
    } 
	else if (a==1||a==2) //��1��2ʱ���1 
	{
        return 1;
    } 
	else 
	{
        int fib1=1,fib2=1,fib=0;
        for (int i=3;i<=a;i++) 
		{
            fib=fib1+fib2;          //ǰ��������� 
            fib1=fib2;
            fib2=fib;
        }
        return fib;
    }
}

int main() 
{
    int n;
    scanf("%d", &n);           //������� 
    int arr[n];                //�������� 
    int count=0;               //������ 
    while(count<n)             //ѭ������ 
	{
        scanf("%d",&arr[count]);
        count=count+1;
    }
    int i; 
	for(i=0;i<n;i++)       //ѭ����� 
	{
		printf("\n%d",fibonacci(arr[i]));
	}
    
    return 0;
}
