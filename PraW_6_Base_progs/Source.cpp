//#define _CRT_SECURE_NO_WARNINGS
//#define N 10
#define M 1000

#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	/*����� �������

	������� 1

	�������� ���������, ������� ���������� ��� �������� �������� 8-�� ������ ���������� ��������
	� 1 ���� (char ��� bool). ���������� ��� ����� ������ ���� ��������� (����� 0). 
	���������� � ���������� ����� �� 1 �� 8, ������� �������, ����� �� ������ ����������� 
	(���� �� ����� 0, �� ������� 1, ����� ������� 0). ����� ������� ������ ��������� 
	�������� ������� ��������� ������ � ���� ������������ �������� ����� (��������� ��������� � 00000000).

	������� 2

	�������� �������, ����������� ������� �������������� ������ ����� �� ���������� � �������� �����, 
	��������� ���������� ��������, � ���������� ��������� � ���� ������.

	����� ����� ��� ������� ������ ������ ������������ �������� ������ << � &. 
	��� ��� �������� �� �������� ��� ������� ����� ����� (��� ������ � ��������� � ������ 
	������������ ��� ����������� ���������� sizeof(int)*8 ), �� ����� �������� �� ����� �����
	������� � ������� ������� � ������� �������� ������ <<1, �������� ������ ������ ��������� &. 
	��� ����� ��� ����������� ���������� ������ ����, ���������� ������ 1, �� ������� �� ����� � 
	����� ��������� �������� ������. ��������� ��� ����� �������� �������:

	unsigned int a = 7; //�����, ������� ����������� � �������� ���
	unsigned int p = 1; // ���������� ��� �������� ��������
	int size = sizeof(int)*8; // ���������� ��� � �����

	for(int i=0; i<size; i++)
	{
		if(a&p) 
			cout<<1;
		else 
			cout<<0; // �������� �������
		p = p<<1; // ����� ������� ����� ��� �������� ���������� �������
	}

	����� � ������ ������ ��������� � �������, ��� ���� ��� ����� ���������������, 
	� ����� �������� ������ ���� ����� ������. ������ ���������� ���������� ������ ��� ��� �������,
	������� ����� �������� �������� ��� � ������, ������� ������ ���� �� ��� � 
	���������� ������ � �������� ����������.*/



}