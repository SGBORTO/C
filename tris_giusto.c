#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

char angolo1=201, angolo2=187, angolo3=200, angolo4=188, linea1=205, linea2=186, incrocio=206, bi1=203, bi2=185, bi3=202, bi4=204;

void  gotoxy(int x, int  y) {
COORD CursorPos = {x, y};
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsole, CursorPos);
}

int end;

void tabella()
{
int a=0,b=0;
	while(a==0)
	{
		printf("%c",angolo1);
		while(b!=6)
		{

			b++;
			printf("%c",linea1);
		}

		printf("%c",bi1);

		b=0;
		while(b!=6)
		{

			b++;
			printf("%c",linea1);
		}

		printf("%c",bi1);

		b=0;
		while(b!=6)
		{

			b++;
			printf("%c",linea1);
		}

		printf("%c\n",angolo2);
		a++;

		b=0;
		while(b!=3)
		{
			b++;
			printf("%c",linea2);
			printf("      ");
			printf("%c",linea2);
			printf("      ");
			printf("%c",linea2);
			printf("      ");
			printf("%c",linea2);
			printf("\n");
		}

		printf("%c",bi4);
		b=0;
		while(b!=6)
		{

			b++;
			printf("%c",linea1);
		}
		printf("%c",incrocio);
		b=0;
		while(b!=6)
		{

			b++;
			printf("%c",linea1);
		}
		printf("%c",incrocio);
		b=0;
		while(b!=6)
		{

			b++;
			printf("%c",linea1);
		}
		printf("%c",bi2);
		printf("\n");

		b=0;
		while(b!=3)
		{
			b++;
			printf("%c",linea2);
			printf("      ");
			printf("%c",linea2);
			printf("      ");
			printf("%c",linea2);
			printf("      ");
			printf("%c",linea2);
			printf("\n");
		}

		printf("%c",bi4);
		b=0;
		while(b!=6)
		{

			b++;
			printf("%c",linea1);
		}
		printf("%c",incrocio);
		b=0;
		while(b!=6)
		{

			b++;
			printf("%c",linea1);
		}
		printf("%c",incrocio);
		b=0;
		while(b!=6)
		{

			b++;
			printf("%c",linea1);
		}
		printf("%c",bi2);
		printf("\n");

		b=0;
		while(b!=3)
		{
			b++;
			printf("%c",linea2);
			printf("      ");
			printf("%c",linea2);
			printf("      ");
			printf("%c",linea2);
			printf("      ");
			printf("%c",linea2);
			printf("\n");
		}

		printf("%c",angolo3);
		b=0;
		while(b!=6)
		{

			b++;
			printf("%c",linea1);
		}
		printf("%c",bi3);
		b=0;
		while(b!=6)
		{

			b++;
			printf("%c",linea1);
		}
		printf("%c",bi3);
		b=0;
		while(b!=6)
		{

			b++;
			printf("%c",linea1);
		}
		printf("%c",angolo4);
	}
}

void x()
{

	int numero, victoryX[3][3];

	do

			{

			scanf("%d",&numero);

			}while(numero<1 && numero >9);


			switch (numero)
			{

			case 1:

			gotoxy(3,2);

			printf("X");

			victoryX[0][0]=1;

			break;

			case 2:

			gotoxy(11,2);

			printf("X");

			victoryX[1][0]=1;

			break;

			case 3:

			gotoxy(18,2);

			printf("X");

			victoryX[2][0]=1;

			break;

			case 4:

			victoryX[0][1]=1;

			gotoxy(3,6);

			printf("X");

			break;

			case 5:

			victoryX[1][1]=1;

			gotoxy(11,6);

			printf("X");

			break;

			case 6:

			victoryX[2][1]=1;

			gotoxy(18,6);

			printf("X");

			break;

			case 7:

			victoryX[0][2]=1;

			gotoxy(3,10);

			printf("X");

			break;

			case 8:

			victoryX[1][2]=1;

			gotoxy(11,10);

			printf("X");

			break;

			case 9:

			victoryX[2][2]=1;

			gotoxy(18,10);

			printf("X");

			break;
			}

			if(victoryX[0][0]==victoryX[1][0] && victoryX[2][0]==1)
			{

				gotoxy(0,20);

				printf("il giocatore X\n HA VINTO!!!");

				end++;
			}
			if(victoryX[0][1]==victoryX[1][1] && victoryX[2][1]==1)
			{

				gotoxy(0,20);

				printf("il giocatore X\n HA VINTO!!!");

				end++;
			}
			if(victoryX[0][2]==victoryX[1][2] && victoryX[2][2]==1)
			{

				gotoxy(0,20);

				printf("il giocatore X\n HA VINTO!!!");

				end++;
			}
			if(victoryX[0][0]==victoryX[1][1] && victoryX[2][2]==1)
			{

				gotoxy(0,20);

				printf("il giocatore X\n HA VINTO!!!");

				end++;
			}
			if(victoryX[2][0]==victoryX[1][1] && victoryX[0][2]==1)
			{

				gotoxy(0,20);

				printf("il giocatore X\n HA VINTO!!!");

				end++;
			}
			if(victoryX[0][0]==victoryX[0][1] && victoryX[0][2]==1)
			{

				gotoxy(0,20);

				printf("il giocatore X\n HA VINTO!!!");

				end++;
			}
			if(victoryX[2][0]==victoryX[2][1] && victoryX[2][2]==1)
			{

				gotoxy(0,20);

				printf("il giocatore X\n HA VINTO!!!");

				end++;
			}
}

void y()
{

int numero1, victoryY[3][3];

do

			{

			scanf("%d",&numero1);

			}while(numero1<1 && numero1>9);


			switch (numero1)
			{

			case 1:

			gotoxy(3,2);

			printf("O");

			victoryY[0][0]=2;

			break;

			case 2:

			gotoxy(11,2);

			printf("O");

			victoryY[1][0]=2;

			break;

			case 3:

			gotoxy(18,2);

			printf("O");

			victoryY[2][0]=2;

			break;

			case 4:

			gotoxy(3,6);

			printf("O");

			victoryY[0][1]=2;

			break;

			case 5:

			gotoxy(11,6);

			printf("O");

			victoryY[1][1]=2;

			break;

			case 6:

			gotoxy(18,6);

			printf("0");

			victoryY[2][1]=2;

			break;

			case 7:

			gotoxy(3,10);

			printf("O");

			victoryY[0][2]=2;

			break;

			case 8:

			gotoxy(11,10);

			printf("O");

			victoryY[1][2]=2;

			break;

			case 9:

			gotoxy(18,10);

			printf("O");

			victoryY[2][2]=2;

			break;
			}
			if(victoryY[0][0]==victoryY[1][0] && victoryY[2][0]==2)
			{

				gotoxy(0,20);

				printf("il giocatore Y\n HA VINTO!!!");

				end++;
			}
			if(victoryY[0][1]==victoryY[1][1] && victoryY[2][1]==2)
			{

				gotoxy(0,20);

				printf("il giocatore Y\n HA VINTO!!!");

				end++;
			}
			if(victoryY[0][2]==victoryY[1][2] && victoryY[2][2]==2)
			{

				gotoxy(0,20);

				printf("il giocatore Y\n HA VINTO!!!");

				end++;
			}
			if(victoryY[0][0]==victoryY[1][1] && victoryY[2][2]==2)
			{

				gotoxy(0,20);

				printf("il giocatore Y\n HA VINTO!!!");

				end++;
			}
			if(victoryY[2][0]==victoryY[1][1] && victoryY[0][2]==2)
			{

				gotoxy(0,20);

				printf("il giocatore Y\n HA VINTO!!!");

				end++;
			}
			if(victoryY[0][0]==victoryY[0][1] && victoryY[0][2]==2)
			{

				gotoxy(0,20);

				printf("il giocatore Y\n HA VINTO!!!");

				end++;
			}
			if(victoryY[2][0]==victoryY[2][1] && victoryY[2][2]==2)
			{

				gotoxy(0,20);

				printf("il giocatore Y\n HA VINTO!!!");

				end++;
			}
}


int main()
{
		char cont;

		int restart=0, end=0, numero, cord1=0, legenda[3][3],i=0,j=0;

		legenda[3][3]=9;
		legenda[2][3]=8;
		legenda[1][3]=7;
		legenda[3][2]=6;
		legenda[2][2]=5;
		legenda[1][2]=4;
		legenda[3][1]=3;
		legenda[2][1]=2;
		legenda[1][1]=1;

		restart=0;

		while(restart==0)
		{

		tabella();

		gotoxy(0,15);

		printf("inizia il giocatore 1 con la x");

		gotoxy(0,16);

		printf("inserire il numero della casella da 1 a 9 per il posizionamento");

		gotoxy(0,17);

		printf("premere per continuare");

		getchar();



		system("cls");

		tabella();
		while(end==0)
        {
			gotoxy(30,cord1);

			x();

			gotoxy(30,cord1);

			y();
		}

		restart++;
		}
return 0;
}
