#pragma once

#include <iostream>

#pragma region Types

// Даже самое большое дерево выросло из маленького семени.(типы данных)

#define строка string
#define цифра_окоянная int
#define цифра_необименная long long
#define цифра_бесовская float
#define писмя char
#define лесть bool // также есть вариант "лжа"
#define пустой void
#pragma endregion

#pragma region Main

// Приветливое слово побеждает гнев.(основные операторы, функции)
#define жили_были {
#define конецъ }
#define прыг_скок endl
#define царь_батюшка_главный int main
#define внедрить using
#define хутор namespace
#define Русь std
#define молвить cout
#define Внедрить_Руску_Молву setlocale(LC_ALL, "Russian");
#define возздать return
#pragma endregion

#pragma region Constructions

// Молвы компьютерной конструкции основные(основные конструкции языка)

#define ежели if
#define ежели_по_другому else if
#define ежели_не_так else
#define делать do
#define донежеле while //Можно поставить и "покуда", но "донежеле" более древнерусское
#define повторяй for
#define крабица struct
#define богоотец class
#pragma endregion

#pragma region Pointers and References 
// Встречают по одежке, а провожают по уму(указатели)
#define здесъ *
#define исконный &
#define послать_гонца_по *
#pragma endregion

#pragma region Types

// Даже самое большое дерево выросло из маленького семени.(типы данных)

#define строка string
typedef const char* письмено;
#define цифра_окоянная int
#define цифра_необименная long long
#define цифра_бесовская float
#define писмя char
#define лесть bool // также есть вариант "лжа"
#pragma endregion

#pragma region Miscellaneous
// Небольшие былинки (разное)

#define несокрушимый const
#define переменчивый volatile
#define беззначный unsigned
#pragma endregion

#pragma region Random
// Куда стрела улетит (случайные значения)

пустой эхЛихо() 
жили_были
	srand(time(NULL));
конецъ


цифра_окоянная кудаСтрелаПолетит(цифра_окоянная от, цифра_окоянная до) 
жили_были
	возздать rand() % (от - до) + от;
конецъ

#pragma endregion
