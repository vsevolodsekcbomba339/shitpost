#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	std::cout << "hello world\n";
	std::cout << "корзухин всеволод\n";
	









	return 0;
}/*int choosemenu = 0;
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