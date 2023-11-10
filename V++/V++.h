#pragma once

#include <iostream>

#pragma region Types

// ���� ����� ������� ������ ������� �� ���������� ������.(���� ������)

#define ������ string
#define �����_�������� int
#define �����_����������� long long
#define �����_��������� float
#define ����� char
#define ����� bool // ����� ���� ������� "���"
#define ������ void
#pragma endregion

#pragma region Main

// ����������� ����� ��������� ����.(�������� ���������, �������)
#define ����_���� {
#define ������ }
#define ����_���� endl
#define ����_�������_������� int main
#define �������� using
#define ����� namespace
#define ���� std
#define ������� cout
#define ��������_�����_����� setlocale(LC_ALL, "Russian");
#define �������� return
#pragma endregion

#pragma region Constructions

// ����� ������������ ����������� ��������(�������� ����������� �����)

#define ����� if
#define �����_��_������� else if
#define �����_��_��� else
#define ������ do
#define �������� while //����� ��������� � "������", �� "��������" ����� �������������
#define �������� for
#define ������� struct
#define �������� class
#pragma endregion

#pragma region Pointers and References 
// ��������� �� ������, � ��������� �� ���(���������)
#define ����� *
#define �������� &
#define �������_�����_�� *
#pragma endregion

#pragma region Types

// ���� ����� ������� ������ ������� �� ���������� ������.(���� ������)

#define ������ string
typedef const char* ��������;
#define �����_�������� int
#define �����_����������� long long
#define �����_��������� float
#define ����� char
#define ����� bool // ����� ���� ������� "���"
#pragma endregion

#pragma region Miscellaneous
// ��������� ������� (������)

#define ������������ const
#define ������������ volatile
#define ���������� unsigned
#pragma endregion

#pragma region Random
// ���� ������ ������ (��������� ��������)

������ ������() 
����_����
	srand(time(NULL));
������


�����_�������� �����������������(�����_�������� ��, �����_�������� ��) 
����_����
	�������� rand() % (�� - ��) + ��;
������

#pragma endregion
