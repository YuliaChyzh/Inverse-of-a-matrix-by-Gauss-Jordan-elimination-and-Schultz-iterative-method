// ��������� ��������� �����������

#include <math.h>
#include <conio.h>
#include <sstream>
#include <msclr/marshal.h>

extern unsigned int kolIter;		// ������� �������� ������
extern unsigned int kolOperation;	// ������� �������� (+-*/) ������
extern unsigned _int64 calc_time;	// ��� ���������� (� ����������)
//extern double EPS;					// �������

double** inpMatrixInFile(int, const char *);	// ���������� ���������� �������� ������ ������� � �����	

double** Shulca(double **, int);		// ���������� ��������� ������ ������ 
double** JordanaGausa(double **, int);	// ���������� ��������� ������ �������-����� 

double** oneMatrix(int);					// ���������� ��������� �������� ������� ��������� ������
void clear(double **, int);					// ���������� ������� ������� ���'��
double** clone(double **, int);				// ���������� ��������� ��ﳿ �������
void sumMatrix(double **, double **, int);	// ���������� ���������� ���� ���� ���������� �������
double detMatrix(double **, int);			// ���������� ���������� ���������� �������
double** transMatrix(double **, int);		// ���������� �������������� �������
double** firstApproxim1(double **, int);	// ���������� ��������� ������� ���������� (����� ����� �������) 
double normFrobenius(double **, int);		// ���������� ���������� ����� ��������� �������
double** firstApproxim2(double **, int);	// ���������� ��������� ������� ���������� (����� ����� ���������)
double** A_scalar_B(double **, double **, int);	// ���������� ������� ���� �������
void A_scalar_Num(double **, int, double);	// ���������� ������� ������� �� ����� 
double** GausStraight(double **, int);		// ���������� ���������� ������� �� ���������� ������� ������� ����� (������ ���)
void swap(double **, int, int, int);		// ���������� ����� ������ ���� ����� �������
double** RoundMatrix(double **, int, int);		// ���������� ���������� �������� ������� �� ��������� ������� 