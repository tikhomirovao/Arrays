#pragma once
#include"constans.h"
#include"stdafx.h"
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], double  ROWS, double COLS);
void FillRand(char arr[ROWS][COLS], char ROWS, double COLS);

void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double arr[ROWS][COLS], const int  ROWS, const int COLS);
void UniqueRand(char arr[ROWS][COLS], const int  ROWS, const int COLS);