// Бібліотека підпрограм користувача

#include <math.h>
#include <conio.h>
#include <sstream>
#include <msclr/marshal.h>

extern unsigned int kolIter;		// кількість ітерацій методу
extern unsigned int kolOperation;	// кількість операцій (+-*/) методу
extern unsigned _int64 calc_time;	// час обчислення (в мілісекундах)
//extern double EPS;					// точність

double** inpMatrixInFile(int, const char *);	// підпрограма зчитування елементів вхідної матриці з файлу	

double** Shulca(double **, int);		// підпрограма реалізації метода Шульца 
double** JordanaGausa(double **, int);	// підпрограма реалізації метода Жардана-Гауса 

double** oneMatrix(int);					// підпрограма генерації одиничної матриці потрібного розміру
void clear(double **, int);					// підпрограма очистки виділеної пам'яті
double** clone(double **, int);				// підпрограма створення копії матриці
void sumMatrix(double **, double **, int);	// підпрограма обчислення суми двох квадратних матриць
double detMatrix(double **, int);			// підпрограма обчислення визначника матриці
double** transMatrix(double **, int);		// підпрограма транспонування матриці
double** firstApproxim1(double **, int);	// підпрограма отримання першого наближення (через норми матриці) 
double normFrobenius(double **, int);		// підпрограма обчислення норми Фробеніуса матриці
double** firstApproxim2(double **, int);	// підпрограма отримання першого наближення (через норму Фробеніуса)
double** A_scalar_B(double **, double **, int);	// підпрограма добутку двох матриць
void A_scalar_Num(double **, int, double);	// підпрограма добутку матриці на число 
double** GausStraight(double **, int);		// підпрограма приведення матриці до трикутного вигляду методом Гауса (прямий хід)
void swap(double **, int, int, int);		// підпрограма обміну місцями двох рядків матриці
double** RoundMatrix(double **, int, int);		// підпрограма округлення елементів матриці до вказаного розряду 