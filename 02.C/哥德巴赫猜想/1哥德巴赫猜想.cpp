#include<stdio.h>

int isprime(int a)          //�������� 
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
    scanf("%d", &n);     //����ż��N 

    if (n%2!=0)          //�ж��Ƿ�Ϊż�� 
	{
        printf("����Ĳ���ż��");
        return 1;
    }
    for (int i=2;i<=n;i=i+2) //ѭ�����N-2/2�� 
	{
        for (int j=2;j<=i/2;j++) //�ó���С���� 
		{
            if (isprime(j)&&isprime(i-j)) //�ж��Ƿ�Ϊ���� 
			{
                printf("%d=%d+%d\n",i,j,i-j);
            }
        }
    }
    return 0; 
}
