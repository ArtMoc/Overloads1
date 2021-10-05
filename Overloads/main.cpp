#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define tab "\t";
#define delimiter "\n--------------------------------------\n"
int number_of_shifts;
const int ROWS = 3;
const int COLS = 8;
const int SIZE = ROWS * COLS;


void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(T arr[], const int n);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sort(T arr[], const int n);
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(T arr[], const int n);
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double Avg(T arr[], const int n);
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T minValueIn(T arr[], const int n);
template<typename T>
T maxValueIn(T arr[], const int n);
template<typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void shift_left(T arr[], const int n);
template<typename T>
void shift_right(T arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");

	cout << "Int:" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элемнтов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << delimiter << endl;
	cout << "Shift_Left:" << endl;
	FillRand(arr, n);
	Print(arr, n);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shift_left(arr, n);
	cout << "Shift_Right:" << endl;
	FillRand(arr, n);
	Print(arr, n);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shift_right(arr, n);
	cout << delimiter << endl;

	cout << "Double:" << endl;
	const int B_SIZE = 8;
	double brr[B_SIZE];
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sort(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, B_SIZE) << endl;
	cout << "Среднее арифметическое элемнтов массива: " << Avg(brr, B_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, B_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, B_SIZE) << endl;
	cout << delimiter << endl;
	cout << "Shift_Left:" << endl;
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shift_left(brr, B_SIZE);
	cout << "Shift_Right:" << endl;
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shift_right(brr, B_SIZE);
	cout << delimiter << endl;

	cout << "Short:" << endl;
	const int C_SIZE = 7;
	short crr[C_SIZE];
	FillRand(crr, C_SIZE);
	Print(crr, C_SIZE);
	Sort(crr, C_SIZE);
	Print(crr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(crr, C_SIZE) << endl;
	cout << "Среднее арифметическое элемнтов массива: " << Avg(crr, C_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(crr, C_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(crr, C_SIZE) << endl;
	cout << delimiter << endl;
	cout << "Shift_Left:" << endl;
	FillRand(crr, C_SIZE);
	Print(crr, C_SIZE);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shift_left(crr, C_SIZE);
	cout << "Shift_Right:" << endl;
	FillRand(crr, C_SIZE);
	Print(crr, C_SIZE);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shift_right(crr, C_SIZE);
	cout << delimiter << endl;

	cout << "Float:" << endl;
	const int D_SIZE = 6;
	float drr[D_SIZE];
	FillRand(drr, D_SIZE);
	Print(drr, D_SIZE);
	Sort(drr, D_SIZE);
	Print(drr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(drr, D_SIZE) << endl;
	cout << "Среднее арифметическое элемнтов массива: " << Avg(drr, D_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(drr, D_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(drr, D_SIZE) << endl;
	cout << delimiter << endl;
	cout << "Shift_Left:" << endl;
	FillRand(drr, D_SIZE);
	Print(drr, D_SIZE);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shift_left(drr, D_SIZE);
	cout << "Shift_Right:" << endl;
	FillRand(drr, D_SIZE);
	Print(drr, D_SIZE);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shift_right(drr, D_SIZE);
	cout << delimiter << endl;

	cout << "Char:" << endl;
	const int E_SIZE = 15;
	char err[E_SIZE];
	FillRand(err, E_SIZE);
	Print(err, E_SIZE);
	Sort(err, E_SIZE);
	Print(err, E_SIZE);
	cout << "Минимальное значение в массиве: " << minValueIn(err, E_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(err, E_SIZE) << endl;
	cout << delimiter << endl;
	cout << "Shift_Left:" << endl;
	FillRand(err, E_SIZE);
	Print(err, E_SIZE);
	cout << "Введите количество сдвигов: ";cin >> number_of_shifts;
	shift_left(err, E_SIZE);
	cout << "Shift_Right:" << endl;
	FillRand(err, E_SIZE);
	Print(err, E_SIZE);
	cout << "Введите количество сдвигов: ";cin >> number_of_shifts;
	shift_right(err, E_SIZE);
	cout << delimiter << endl;

	cout << "2D_Arrays:" << endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: " << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2,ROWS,COLS) << endl;
	cout << "Среднее арифметическое элемнтов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;

	cout << "2D_Arrays Double:" << endl;
	double i_arr_2d[ROWS][COLS];
	FillRand(i_arr_2d, ROWS, COLS);
	Print(i_arr_2d, ROWS, COLS);
	cout << "Отсортированный массив: " << endl;
	Sort(i_arr_2d, ROWS, COLS);
	Print(i_arr_2d, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2d, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элемнтов массива: " << Avg(i_arr_2d, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2d, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2d, ROWS, COLS) << endl;
	cout << delimiter << endl;

	cout << "2D_Arrays Char:" << endl;
	char i_arr_2c[ROWS][COLS];
	FillRand(i_arr_2c, ROWS, COLS);
	Print(i_arr_2c, ROWS, COLS);
	cout << "Отсортированный массив: " << endl;
	Sort(i_arr_2c, ROWS, COLS);
	Print(i_arr_2c, ROWS, COLS);
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2c, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2c, ROWS, COLS) << endl;
	cout << delimiter << endl;
}

void FillRand(int arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000) / 100;
	}
}
void FillRand(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 10000) / 10;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % SIZE;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] =double(rand() % 10000)/100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}

template<typename T>
void Print(T arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) cout << arr[i][j] << tab; 
		cout << endl << endl;
	}
}

template<typename T>
void Sort(T arr[], const int n)
{
	//Сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < COLS; j++)
		{
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = 0; l < COLS; l++)
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
			}
		}
	}
}

template<typename T>
T Sum(T arr[], const int n)
{
	T Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}

template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / SIZE;
}

template<typename T>
T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>
T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
template<typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}

template<typename T>
void shift_left(T arr[], const int n)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	for (int i = 0; i < n; i++) cout << arr[i] << tab; cout << endl;
}
template<typename T>
void shift_right(T arr[], const int n)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
	}
	for (int i = 0; i < n; i++) cout << arr[i] << tab; cout << endl;
}
