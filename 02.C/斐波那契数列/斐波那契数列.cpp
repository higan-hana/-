#include <stdio.h>

int fibonacci(int a)      //定义斐波那契数列 
{
    if (a<=0) 
	{
        return 0;
    } 
	else if (a==1||a==2) //当1或2时输出1 
	{
        return 1;
    } 
	else 
	{
        int fib1=1,fib2=1,fib=0;
        for (int i=3;i<=a;i++) 
		{
            fib=fib1+fib2;          //前两个数相加 
            fib1=fib2;
            fib2=fib;
        }
        return fib;
    }
}

int main() 
{
    int n;
    scanf("%d", &n);           //输入个数 
    int arr[n];                //定义数组 
    int count=0;               //计数器 
    while(count<n)             //循环输入 
	{
        scanf("%d",&arr[count]);
        count=count+1;
    }
    int i; 
	for(i=0;i<n;i++)       //循环输出 
	{
		printf("\n%d",fibonacci(arr[i]));
	}
    
    return 0;
}
