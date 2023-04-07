#include"Search.h"
#include"stdafx.h"
void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;  //Предположим,что искомое число не встречалось в массие ранее,
		//но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;  //Запоминаем то, что число втсречалось ранее
				break;
			}
		}
		if (met_before)continue;
		int count = 0; //счетчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("Значение %i повторяется %i раз\n", arr[i], count);
		//if (count)cout << "Значение " << arr[i] << " повторяется " << count << " раз" << endl;
	}
}
void Search(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;// предположем, что искомое число не встречалась ранее, но нужно проверить
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; // запоминаем то, что число уже встречалось
				break;
			}
		}
		if (met_before) continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}

		}
		if (count)printf("значение %i повторяется %i раз\n", arr[i], count);
		//if (count) cout << "число " << arr[i] << " повторилось " << count << " раз(а)" << endl;
	}


	cout << endl;
}
void Search(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;// предположем, что искомое число не встречалась ранее, но нужно проверить
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; // запоминаем то, что число уже встречалось
				break;
			}
		}
		if (met_before) continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}

		}
		if (count)printf("значение %i повторяется %i раз\n", arr[i], count);
		//if (count) cout << "число " << arr[i] << " повторилось " << count << " раз(а)" << endl;
	}


	cout << endl;
}
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			//Выясняем встречался ли элемент ранее
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)break;
			}
			//Если элемент встречался ранее,то мы уже вывели его на экран,пропускаем следующий ход
			if (met_before)continue;
			//Если же элемент ранее не встречался то нужно выяснить сколько раз он повторяется
			int count = 0; //счетчик повторений
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("Значение %i повторяется %i раз \n", arr[i][j], count);
		}
	}
}
void Search(double arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			// Выясняем встречался ли элемент ранее
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before) break;
			}
			//Если элемент встречался ранее,то мы уже вывели его на экран,пропускаем следующий ход
			if (met_before) continue;
			//Если же элемент ранее не встречался то нужно выяснить сколько раз он повторяется
			int count = 0; // счетчик повторений 
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("Значение %i повторяется %i раз\n", arr[i][j], count);
		}
	}
}
void Search(char arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			// Выясняем встречался ли элемент ранее
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before) break;
			}
			//Если элемент встречался ранее,то мы уже вывели его на экран,пропускаем следующий ход
			if (met_before) continue;
			//Если же элемент ранее не встречался то нужно выяснить сколько раз он повторяется
			int count = 0; // счетчик повторений 
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("Значение %i повторяется %i раз\n", arr[i][j], count);
		}
	}
}