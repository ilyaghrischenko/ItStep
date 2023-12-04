#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//task 1
void IsEqual(const string& first, const string& second)
{
	fstream file1, file2;
	string str1{ "" };
	string str2{ "" };

	try {
		file1.open(first);
		file2.open(second);
		if (!file1.is_open() || !file2.is_open()) throw exception("�������! ���� �� ��������!");
		if (getline(file1, str1) || getline(file2, str2)) throw exception("����� ����� ���� ������� �����.");
	}
	catch (exception& error) {
		cout << error.what() << endl;
		return;
	}

	int lineNumber = 1;
	while (getline(file1, str1) && getline(file2, str2)) {
		if (str1 != str2) {
			cout << "�������� � " << lineNumber << " �����:\n";
			cout << "File 1: " << str1 << "\n";
			cout << "File 2: " << str2 << "\n";
			return;
		}
		++lineNumber;
	}

	cout << "\n����� ���������!\n";
}

int main()
{
	setlocale(0, "");

	//task 1
	string file1{ "first.txt" };
	string file2{ "second.txt" };
	IsEqual(file1, file2);

	cout << endl;
	system("pause");
}