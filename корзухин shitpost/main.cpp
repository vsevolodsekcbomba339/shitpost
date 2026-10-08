#include <iostream>
#include <windows.h>
#include <iomanip>
#include <ctime>
using namespace std;


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	cout << "\t\t\tсегдня мы посмотрим на библиотеку iomanip\n";

	int generic = 5;
	float generic2 = 14.88111;

	cout << "\t\t\tрассмотрим Setprecision\n";
	cout << "\t\t\tcout << setprecision(5) << fixed << generic2;\n";
	cout << generic2 << "\t\t\tизначальное число\n";

	cout << setprecision(2) << fixed << generic2;

	cout << "\t\t\tsetprecision отвечает за количество чисел после точки а fixed не дает точке плавать\n";

	cout << "\t\t\tрассмотрим Setw и setfill\n";

	cout << "\t\t\tcout << setw(9) << setfill('#') << generic << endl;\n";

	cout << setw(9) << setfill('#') << generic << endl;

	cout << "\t\t\tsetw отвечает за ширину отображаемого поля а Setfill заполняет пустые символы указаным символом\n";

	cout << "\t\t\tрассмотрим Setbase\n";
	cout << "\t\t\t  std::cout << std::setbase(16); std::cout << 64 << std::endl;\n";
	std::cout << std::setbase(16);
	std::cout << 64 << std::endl;
	cout << "\t\t\tsetbase Задает основание целых чисел ну или проще переводит в систему счисления\n";


	return 0;
}

/*int choosemenu = 0;
	int chooseprog = 0;
	int answer = 0;
	int number = 1;
	std::cout << "выберете тип программы \n";
	std::cout << " 1) сложение 2) меню игры \n";
	std::cin >> chooseprog;


	if (chooseprog == 1)
	{
	std::cout << " вы успешно выбрали 1 \n";
		while ( number != 0 )
		{
			std::cin >> number;
			answer = answer + number  ;

		}
		std::cout << " ответ " << answer;
	}
	else if (chooseprog == 2)
	{
	std::cout << " вы успешно выбрали 2 \n";
	do
	{
		std::cout << "1)новая игра\n 2)настройки\n 3)выход\n";
		std::cin >> choosemenu;
			if (choosemenu == 1)
			{
				std::cout << "вы выбрали пойти нафиг ибо игры нет\n ";


			}
			else if (choosemenu == 2)
			{
				std::cout << "вы выбрали настройки но их украли цыгане\n ";


			}
			else if (choosemenu == 3)
			{
				std::cout << "вы выбрали выйти\n";


			}

	} while (choosemenu > 3 || choosemenu < 0);
	


	}
	else
	{
		std::cout << " ошибка выбора \n";
	}
	*/