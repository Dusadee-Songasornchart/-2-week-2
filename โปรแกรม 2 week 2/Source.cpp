#include<Stdio.h>
int fact(int num)
{
	int all{1};
	for (int a = 1;a <= num;a++)
		{
		all = all * a;
		}
	return all;
}
int main()
{
	int n,sum=0;
	printf("Input the number : ");
	scanf_s("%d", &n);
		if (n%2 == 0)
		{
			for (int j = 2;j <= n;j += 2) {
				printf("%d! ", j);
				sum += fact(j);
				if (j == n)
				{
					break;
				}
				printf("+");
				
			}
		}
		else 
		{
			for (int j = 1;j <= n;j += 2) {
				printf("%d! ", j);
				sum += fact(j);
				if (j == n)
				{
					break;
				}
				printf("+ ");
			}
		}
		printf(" = %d", sum);
}