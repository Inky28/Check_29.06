/*
Зробити базу даних з комп'ютерними іграми
Кожна гра має мати (Ім'я, Жанр, Платформа(PlayStation,Switch,PC,XBox), Разработчик) для всіх значень зробити enum
Для кожного з значень гри має бути функція для перевірки
Зробити пошук по фільтрах, тобто ви вказує по яких значенях ви шукає гру і вам виводяться ігри які підходять під ці параметри
Реалізувати меню для тестування
*/

/*1.Show all games
2.Filter games
3.Search game
4.Exit

Select action->2

1.Ubisoft
2.CD Project RED
3.Activison
Select->1

1.PS
2.PC
3.Switch
4.Xbox
Select ->2

1.Adventures
2.Simulation
3.Action
4.Platformer
Select ->1

Result filters:
Assasin Creed All Parts
Watch Dogs*/

#include <iostream>
#include <functional>
#include <list>

using namespace std;

void ShowGame(string game)
{
	cout << "Game : " << game << endl;
}

void ShowAllGame(list<list<string>> game)
{
	for (list<string> item : game)
	{
		ShowGame(game);
	}
}

void Menu()
{
	cout << "1.Show all games\n";
	cout << "2.Filter games\n";
	cout << "3.Search game\n";
	cout << "4.Exit\n";
	cout << "Your choice: ";
}

int main()
{
	list<string> Ubisoft = { "Assasin Creed","Assasin Creed 2","Assasin Creed 3","Watch Dogs","Watch Dogs 2" };
	list<string> CD_Project_RED = { "The Wither 1","The Wither 2","The Wither 3","OMG The Wither 4" };
	list<string> Activision = { "COD 1","COD 2","COD 3","COD 4" };

	list<list<string>>allPublishers;
	allPublishers.push_back(Ubisoft);
	allPublishers.push_back(CD_Project_RED);
	allPublishers.push_back(Activision);

	/*list<function<void(string)>>functions;
	functions.push_back(ShowGame);*/

	ShowAllGame(allPublishers);

	/*int choice;
	Menu();
	cin >> choice;
	
	CheckMenu(choice);
	*/



	return 0;
}

