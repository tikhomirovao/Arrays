#pragma once
#include"constans.h"

int Sum(const int arr[], const int n);
double Sum(const double arr[], const int n);
char Sum(const char arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(const double arr[ROWS][COLS], double  ROWS, double COLS);
char Sum(const char arr[ROWS][COLS], char  ROWS, char COLS);

int Avg(const int arr[], const int n);
double Avg(double arr[], const int n);
char Avg(char arr[], const int n);
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(const double arr[ROWS][COLS], double  ROWS, double COLS);
char Avg(char arr[ROWS][COLS], char  ROWS, char COLS);

int minValueIn(const int arr[], const int n);
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);
int minValueIn(const int arr[ROWS][COLS], const int  ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], double ROWS, double COLS);
char minValueIn(char arr[ROWS][COLS], char ROWS, char COLS);

int maxValueIn(const int arr[], const int n);
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);
int maxValueIn(const int arr[ROWS][COLS], const int  ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], double  ROWS, double COLS);
char maxValueIn(char arr[ROWS][COLS], char ROWS, char COLS);