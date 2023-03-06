// robot.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
using namespace std;
const int a = 21, b = 21, t = 10;
int m = 10, n = 10; // задаем начальное положение робота
int m1 = 10, n1 = 10; // задаем начальное положение робота

void draw(char arr1[a][b])
{
	system("cls");
	for (size_t i = 0; i < a; i++)
	{
		for (size_t j = 0; j < b; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
}
void inic(char arr1[a][b])
{
	for (size_t i = 0; i < a; i++)
	{
		for (size_t j = 0; j < b; j++)
		{
			arr1[i][j] = (char)46;
		}
	}
}
// void Route(char arr1[a][b], char arr2[t])
void Route(char arr1[a][b], char arr2[t])
{
	char kod;
	int i = 0;
	do
		//{// влево
		//	if (arr2[i] == 'l' && arr1[m][n] == (char)30) arr1[m][n] = (char)17;
		//	else if (arr2[i] == 'l' && arr1[m][n] == (char)17) arr1[m][n] = (char)31;
		//	else if (arr2[i] == 'l' && arr1[m][n] == (char)31) arr1[m][n] = (char)16;
		//	else if (arr2[i] == 'l' && arr1[m][n] == (char)16) arr1[m][n] = (char)30;
		//	// вправо
		//	else if (arr2[i] == 'r' && arr1[m][n] == (char)30) arr1[m][n] = (char)16;
		//	else if (arr2[i] == 'r' && arr1[m][n] == (char)16) arr1[m][n] = (char)31;
		//	else if (arr2[i] == 'r' && arr1[m][n] == (char)31) arr1[m][n] = (char)17;
		//	else if (arr2[i] == 'r' && arr1[m][n] == (char)17) arr1[m][n] = (char)30;
		//	// перемещение
		//	else if (arr2[i] == 'g' && arr1[m][n] == (char)30) { arr1[m][n] = (char)46; m--; arr1[m][n] = (char)30; }
		//	else if (arr2[i] == 'g' && arr1[m][n] == (char)17) { arr1[m][n] = (char)46; n--; arr1[m][n] = (char)17; }
		//	else if (arr2[i] == 'g' && arr1[m][n] == (char)31) { arr1[m][n] = (char)46; m++; arr1[m][n] = (char)31; }
		//	else if (arr2[i] == 'g' && arr1[m][n] == (char)16) { arr1[m][n] = (char)46; n++; arr1[m][n] = (char)16; }
		//	draw(arr1);
    {// влево
		kod = _getch();
		if ((kod == 'a') && (n - 1 >= 0)) { arr1[m][n] = (char)46; n--; arr1[m][n] = (char)17; draw(arr1); }
	// вправо
		if ((kod == 'd')&&(n+1<a)) { arr1[m][n] = (char)46; n++; arr1[m][n] = (char)16; draw(arr1); }
		// вверх
		if ((kod == 'w')&&(m-1>=0)) { arr1[m][n] = (char)46; m--; arr1[m][n] = (char)30; draw(arr1); }
		// вниз	 	
		if ((kod == 's')&&(m+1<b)) { arr1[m][n] = (char)46; m++; arr1[m][n] = (char)31; draw(arr1); }
		i++;
} while (kod != 'q');
}
int main()
{
	// robot
	char arrayEarth[a][b];
	char arrayRoute[t];
	char route = '0';
	inic(arrayEarth);
	arrayEarth[m][n] = (char)30;
	draw(arrayEarth);
//	cout << "Enter route (less than 10 symb) ";
//	cin.get(arrayRoute, t);
//	for (size_t i = 0; i < 4; i++)
//	{
		Route(arrayEarth, arrayRoute);
//		if (n == n1 && m == m1 && (i==0 || i==3)) { cout << "True!!!" << endl; break; }
//	}
}

