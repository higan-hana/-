#include <stdio.h>

void bubblesort(int arr[],int n)        //ð������ 
{
    int i,j,temp;
    for (i=0;i<n-1;i++) 
	{
        for (j=0;j<n-i-1;j++) 
		{
            if (arr[j]>arr[j+1]) 
			{
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main() 
{
    int n,i=0;
    scanf("%d",&n);         //�������������� 
    int arr[n];              //��������       
    while(1)  
	{
        scanf("%d",&arr[i]);
        char c=getchar();
		arr[i++];
		if(c=='\n')
		{
			break;
		} 
    }
    bubblesort(arr,n);     //ð������ 
    for (i=0;i<n;i++)  //ѭ����� 
	{
        printf("%d ",arr[i]);
    }
    return 0;
}
