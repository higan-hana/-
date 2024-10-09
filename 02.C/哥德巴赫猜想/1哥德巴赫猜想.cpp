#include<stdio.h>

int isprime(int a)          //定义素数 
{
	for(int i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

int main() 
{
    int n;
    scanf("%d", &n);     //输入偶数N 

    if (n%2!=0)          //判断是否为偶数 
	{
        printf("输入的不是偶数");
        return 1;
    }
    for (int i=2;i<=n;i=i+2) //循环输出N-2/2行 
	{
        for (int j=2;j<=i/2;j++) //得出最小素数 
		{
            if (isprime(j)&&isprime(i-j)) //判断是否为素数 
			{
                printf("%d=%d+%d\n",i,j,i-j);
            }
        }
    }
    return 0; 
}
