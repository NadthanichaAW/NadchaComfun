#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<conio.h> 


void gotoxy(int x, int y)
{
	COORD c = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void draw_ship(int x,int y)
{
	gotoxy(x, y);
	printf("<-0->");
}
void erase_ship(int x, int y)
{
	gotoxy(x, y);
	printf("      ");

}
void setCursor(bool visible)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console, &lpCursor);
}
void setColour(int fg, int bg)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}
void draw_bullet(int x,int y)
{
	gotoxy(x, y);
	printf("^");
}
void clear_bullet(int x, int y)
{
	gotoxy(x, y);
	printf(" ");
}


int main()
{
	setCursor(0);
	setColour(12, 11);
	char ch = ' ';
	int aut[2];
	int x=25, y=25;
	int bx[5], by[5], i;
	int bullet[5] = { 0 };
	draw_ship(x, y);
	do
	{
		setColour(12, 0);
		if (_kbhit())
		{
			ch = _getch();
			if (ch == 'a' ) 
			{
				aut[0] = 1;
			}
			if (ch == 'd' ) 
			{
				aut[0] = 2;
			}
			if (ch == 's' )
			{
				aut[0] = 3;
			}
			if (bullet[i] != 1 && ch == ' ')
			{
				for ( i = 0; i <5; i++)
				{
					if (bullet[i]==0)
					{
						bullet[i] = 1;
						bx[i] = x + 2;
						by[i] = y - 1;
						setColour(12, 11);
						draw_bullet(bx[i], by[i]);
						break;
					}				
				}				
			}
			fflush(stdin);
		}
		if (aut[0] == 1 && x >= 1)
		{
			erase_ship(x, y);
			setColour(12, 11);
			draw_ship(--x, y);
		}if (aut[0] == 2 && x < 80)
		{
			erase_ship(x, y);
			setColour(12, 11);
			draw_ship(++x, y);	
		}if (aut[0] == 3 && y >= 0)
		{
			erase_ship(x, y);
			setColour(12, 11);
			draw_ship(x, y);
		}
		for (i = 0; i < 5; i++)
		{
			if (bullet[i] != 0)
			{
				setColour(12, 0);
				clear_bullet(bx[i], by[i]);
				if (by[i] == 0)
				{
					setColour(12, 11);
					bullet[i] = 0;
				}
				else
				{
					setColour(12, 11);
					draw_bullet(bx[i], --by[i]);
				}
			}
		}
		Sleep(100);	
	} while (ch != 'x');		
	
	_getch();
return 0;
}