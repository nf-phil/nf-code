#define _CRT_SECURE_NO_WARNINGS 1
#define N_VALUES 5
#include<stdio.h>
int main()
{
	float values[N_VALUES];
	float* vp;
	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
	{
		*vp = 0;
		printf("%f ", *vp);
	}

	return 0;
}