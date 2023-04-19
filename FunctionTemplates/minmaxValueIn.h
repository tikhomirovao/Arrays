#pragma once
#include"constans.h"
#include"stdafx.h"
template<typename T>T minValueIn(const T arr[], const int n);
template<typename T> T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T maxValueIn(const T arr[], const int n);
template<typename T> T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);