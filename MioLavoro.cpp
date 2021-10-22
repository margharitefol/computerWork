#include<stdio.h>
#define _USE_MATH_DEFINES
#include <cmath>
#include <ctime>
#include<random>

void Ex1()
{
	double x;
	double a;
	double c;

	scanf_s("%f%f%f", &x, &a, &c);
	return L = ((sqrt(exp(x) - pow(cos(pow(x, 2) * pow(a, 5)), 4))) + (pow(atan(a - pow(x, 5)), 4))) / (pow(fabs(a + x * pow(c, 4)), (1 / M_E)));

}

void Ex2()
//y= (a * pow(x, 2) + b * x + c = 0)
    {
   double a;
	double  b;
	double  c;
	double  x;
	double  x1;
	double  x2;
	double  D;
	scanf_s("%f%f%f", &a, &b, &c);
	if (a == 0)
	{
		printf("you cannot enter 0\n");//вывести сообщение о невозможности
	}

	
	D = sqrt(pow(b, 2) - 4 * a * c);
	
	{
		if (D > 0)
		{
			x1 = (-b + (sqrt(pow(b, 2) - 4 * a * c))) / 2 * a;
			x2 = (-b - (sqrt(pow(b, 2) - 4 * a * c))) / 2 * a;
			printf("%f\n", x1);
			printf("%f\n", x2);
		}
		
		if (D < 0)
		{
			printf("no valid roots");//нет действительных корней
		}

	}
	
	return 0;
}


void Ex3()
   {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int s = 0;
	const int size = 8999;
	int mas[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 9999 + 1000;


		
		a = mas[i] % 10;
		b = (mas[i] / 10)%10;
		c = (mas[i] / 100)%10;
		d = (mas[i] / 1000)%10;
		 if (pow(a, 4) + pow(b, 4) + pow(c, 4) + pow(d, 4) == mas[i])
		 {
			printf("%d\n", mas[i]);
		 }

		mas[i] = mas[i] + 1;
	}
	return 0;
	}


 


void Ex4()
	{
		float v;
		float t;
		scanf_s("%f", &t);
	    v = 3 * pow(t, 2) - 6 * t;
		printf("%f", v);
		return 0;

	}
	


void Ex5()
{
	int n=0;
	int c=0;
	int m=0;

	printf("Vvedit Kod goroda \n");
	scanf_s("%d", &n);
	printf(" kolicestvo min\n");
	scanf_s("%d", &m);

	switch (n)
	{
	case 48:


		printf("price:%d", c= m*15);
		break;


	case 44:

		printf("price:%d", c = m * 18);
		break;

	case 46:

		printf("price:%d", c=13 * m);
		break;

	case 45:

		printf("price:%d", c=11 * m);
		break;


	default:
		printf("No n\n");

	}

	return 0;
	}

void Ex6()
	const int n = 8;
	int arr[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() %2;
		printf("%d", arr[i]);


	}
	int chislo = arr[0] * pow(2, 7) + arr[1] * pow(2, 6) + arr[2] * pow(2, 5) + arr[3] * pow(2, 4) + arr[4] * pow(2, 3) + arr[5] * pow(2, 2) + arr[6] * 2 + arr[7] * 1;

	printf("%d\n", chislo);

	return 0;


}



void Ex7()
{
const int n = 2;
const int m = 20;
int L[n][m];
srand(time(NULL));
for (int i = 0; i < n; ++i)
{
	for (int j = 0; j < m; ++j)
	{
		L[i][j] = rand() % 21 - 10;
	}
}
for (int i = 0; i < n; ++i)
{
	for (int j = 0; j < m; ++j)
	{
		L[i][j] = rand() % 21 - 10;
		printf("%2d", L[i][j] * (-3));
	}
	printf("\n");
}

return 0;


}


