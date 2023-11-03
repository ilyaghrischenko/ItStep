#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class Contact {
private:
	char* initials;
	char number[14];
	char additional_info[500];
public:
	Contact()
	{
		initials = new char[12] {"No initials"};
		strcpy(number, "No number");
		strcpy(additional_info, "No info");
	}
	Contact(const char* initials, const char* number, const char* additional_info)
	{
		this->initials = new char[strlen(initials) + 1];
		strcpy(this->initials, initials);
		strcpy(this->number, number);
		strcpy(this->additional_info, additional_info);
	}
	~Contact()
	{
		delete[] initials;
	}

	inline void init()
	{
		char s[500];
		cout << "��i�i���: ";
		cin.getline(s, 500);
		
		delete[] initials;
		initials = new char[strlen(s) + 1];
		strcpy(initials, s);

		cout << "�����: ";
		cin.getline(number, 14);

		cout << "��������� i�������i�: ";
		cin.getline(additional_info, 500);
	}
	inline void show() const
	{
		cout << "��������i�:\n";
		cout << "��i�i���: " << initials << " | �����: " << number << " | ��������� i�������i�: " << additional_info << endl;
	}

	inline char* GetInitials() const
	{
		return initials;
	}
	inline void SetInitials(const char* initials)
	{
		delete[] this->initials;
		this->initials = new char[strlen(initials) + 1];
		strcpy(this->initials, initials);
	}

	inline const char* GetNumber() const
	{
		return number;
	}
	inline void SetNumber(const char* number)
	{
		strcpy(this->number, number);
	}

	inline const char* GetAdditionalInfo() const
	{
		return additional_info;
	}
	inline void SetAdditionalInfo(const char* additional_info)
	{
		strcpy(this->additional_info, additional_info);
	}
};

inline void SaveContact(Contact& human, const char* path)
{
	fstream fInOut(path, ios::app);
	if (!fInOut.is_open()) {
		cerr << "������� ��� ������� �����!\n";
		system("pause");
		return;
	}
	
	fInOut << "�������: " << human.GetInitials() << " ����� ��������: " << human.GetNumber() << " ��������� ����������: " << human.GetAdditionalInfo() << endl;

	fInOut.close();
}

int main()
{
	setlocale(0, "");

	Contact jorj;
	SaveContact(jorj, "C:\\Microsoft\\contacts.txt");
}