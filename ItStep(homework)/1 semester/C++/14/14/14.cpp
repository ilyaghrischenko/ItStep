#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
using namespace std;

//task 1
/*
struct Book {
	char name[80];
	char author[80];
	char publication[80];
	char genre[80];

	void init()
	{
		cout << "������ �����: ";
		cin.getline(name, 80);

		cout << "������ ������: ";
		cin.getline(author, 80);

		cout << "������ �����������: ";
		cin.getline(publication, 80);

		cout << "������ ����: ";
		cin.getline(genre, 80);
	}
	void show()
	{
		cout << endl;

		cout << "�����: " << name;
		cout << "\n�����: " << author;
		cout << "\n�����������: " << publication;
		cout << "\n����: " << genre;
	}
	bool check()
	{
		int input;
		cout << "\n�� ����� �� �������� �����?(1 - ���, 2 - �): ";
		cin >> input;

		if (input != 1 && input != 2) {
			cerr << "�������! �� ���������� ���";
			system("pause");
			return 1;
		}

		if (input == 1) return true;
		return false;
	}
};
*/

//task 2
/*
struct Car {
	char mark[80];
	char color[80];
	double lenght;
	double width;
	double height;
	
	void init()
	{
		cout << "������ �����: ";
		cin.getline(mark, 80);

		cout << "������ ����: ";
		cin.getline(color, 80);

		cout << "������ �������: ";
		cin >> lenght;

		cout << "������ ������: ";
		cin >> width;

		cout << "������ ������: ";
		cin >> height;
	}
	void show()
	{
		cout << endl;

		cout << "�����: " << mark;
		cout << "\n����: " << color;
		cout << "\n�������: " << lenght;
		cout << "\n������: " << width;
		cout << "\n������: " << height;
	}
	bool CheckColor(char my_color[])
	{
		if (my_color == color) return true;
	}
};
*/

int main()
{
	setlocale(0, "");

	//task 1
	/*
	Book x;
	x.init();
	x.show();
	if (x.check() == true) cout << "\n�� �������� �����";
	*/

	//task 2
	/*
	char my_color[80];
	cout << "������ ������� ����: ";
	cin.getline(my_color, 80);

	cout << endl;

	Car x;
	x.init();
	x.show();
	if (x.CheckColor(my_color)) cout << "\n\n���� ������ �������� ���";
	*/

	cout << endl;
	system("pause");
}