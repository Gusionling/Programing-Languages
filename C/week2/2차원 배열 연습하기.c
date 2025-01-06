#include <stdio.h>

#define MONTHS 12
#define TEARS 3

void print_data(double arr[][MONTHS], int n) // n은 2차원 배열에서 앞에꺼
{
	printf("[Temperature Data]\n");
	printf("Year Index :");
	for (int i = 0; i < MONTHS; i++) // index부분은 이중배열을 쓰기 애매해서 빼서 구현하는 거임
	{
		printf("\t%d", i + 1);
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("year %d     :", i);
		for (int j = 0; j < MONTHS; j++)
		{
			printf("\t%0.1f", arr[i][j]); //이거 %f안하고 %d하면 에러 나더라 주의하기!!
		}
		printf("\n");
	}
}

void YearlyAverage(double arr[][MONTHS], int n) // 평균을 구해주는 함수 
{
	printf("[Yearly average temperature of 3 years]\n");
	double sum = 0; //초기화 안해 줬더니 에러남 
	for (int i = 0; i < n; i++)
	{
		printf("year %d :", i);
		for (int j = 0; j < MONTHS; j++)
		{
			sum = sum + arr[i][j];
		}
		sum = sum / MONTHS;
		printf(" average temperature = %0.1f\n", sum);
		sum = 0; // 다시 초기화 해주어야 되는 거 잊지 말기!!!
	}
}

void MonthlyAverage(double arr[][MONTHS], int n)
{
	printf("[Monthly average temperature of 3 years\n");
	printf("Year Index :");
	for (int i = 0; i < MONTHS; i++) // index부분은 이중배열을 쓰기 애매해서 빼서 구현하는 거임
	{
		printf("\t%d", i + 1);
	}
	printf("\n");
	
	printf("Avg temps   :");
	for (int i = 0; i < MONTHS; i++)
	{
		
		double sum = 0; 
		for (int j = 0; j < n; j++)
		{
			sum = sum + arr[j][i];
		}
		sum = sum / n;
		printf("\t%0.1f", sum);
		sum = 0;
	}
}

int main()
{
	double year2016[MONTHS] = { -3.2,0.2,7.0,14.1,19.6,23.6,26.2,28.0,23.1,16.1,6.8,1.2 };
	double year2017[MONTHS] = { -1.8, -0.2,	6.3,	13.9	,19.5,	23.3,	26.9,	25.9,	22.1,	16.4,	5.6, -1.9 };
	double year2018[MONTHS] = { -4.0, -1.6,	8.1,	13.0,	18.2,	23.1,	27.8,	28.8,	21.5,	13.1,	7.8, -0.6 };
	
	double arr[3][MONTHS];
	
	for (int i = 0; i < MONTHS; i++)
	{
		arr[0][i] = year2016[i];
	}

	for (int i = 0; i < MONTHS; i++)
	{
		arr[1][i] = year2017[i];
	}

	for (int i = 0; i < MONTHS; i++) // 이렇게 for문을 3개 나열한 것은 초기화 할 때 year2016,2017,2018
									 // 이거 어떻게 하는지 몰라서 그런거임
	{
		arr[2][i] = year2018[i];
	}

	print_data(arr, 3);
	printf("\n");
	YearlyAverage(arr, 3);
	printf("\n");
	MonthlyAverage(arr, 3);
	printf("\n");

	return 0;
}