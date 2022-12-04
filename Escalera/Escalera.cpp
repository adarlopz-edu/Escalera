#include <stdio.h>
//#include <iostream>
#include <windows.h>
//#include <time.h>

void retardo();
void colores(int color);
int main()
{
	int x = 0, y = 0, z = 5, escalon = 0;

	for (x = 1; y < z; y++)
	{
		for (y = 1; y < z; y++)
		{
			////////Imprime espaciones en blanco////////
			printf("\n");
			for (y = 1; y < z; y++)
			{
				printf(" ");
				if (y > z - 6) //Imprime el piso de los escalones de 5 asteriscos
				{
					Sleep(100);
					//retardo();
					colores(1);
					printf("*");
				}
			}
			/////////////////////////////////////////

			///////////////Imprime Escalon
		}
		//Imprime los escalones
		for (escalon = 0; escalon < 3; escalon++)
		{
			printf("\n");
			colores(2);
			for (y = 1; y < z + 4; y++) //z+4 Por el largo del piso del escalon
			{
				printf(" ");
			}
			Sleep(100);
			printf("*");
		}
		//
		printf("\n");
		z += 8; //
	}
}

void retardo()
{
	int ms = 0;
	for (ms = 0; ms < 1999; ms++);
}
void colores(int color)
{
	const HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	//************************
	//yellow on blue
	if (color == 1)
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	if (color == 2)
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}
