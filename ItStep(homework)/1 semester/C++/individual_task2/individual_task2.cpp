#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <ctime>
using namespace std;

typedef map<string, vector<int>> dictionary;
typedef vector<int> arr;

class User {
protected:
	bool isRegistered;
	string login;
	string password;
	int encryption_key;

	void CheckIsRight(string& text)
	{
		bool isAccepted = false;
		while (!isAccepted) {
			cin >> text;
			int kilk_upper = 0;
			int kilk_numbers = 0;
			for (int i = 0; i < text.length(); ++i) {
				if (text[i] == toupper(text[i])) ++kilk_upper;
				if (text[i] == isdigit(text[i])) ++kilk_numbers;
			}
			if (kilk_upper >= 1 && kilk_numbers >= 3) isAccepted = true;
			else cout << "������� ��� �������!\n������ ��������: ";
		}
	}
	void EncryptText(string& text)
	{
		for (int i = 0; i < text.length(); ++i) {
			text[i] += encryption_key;
		}
	}
	void Registration()
	{
		cout << "��������� �����������:\n1)��� ���� � ������ ������� ������ ���� � 1 ������ �����.\n2)��� ���� � ������ ������� ������ ���� � 3 �����.\n\n";

		cout << "����: ";
		CheckIsRight(login);

		cout << "������: ";
		CheckIsRight(password);

		isRegistered = true;

		EncryptText(login);
		EncryptText(password);
	}
public:
	User() :isRegistered(false), login("NoLogin"), password("NoPassword"), encryption_key(3) {}
};

class Guest :public User {
private:
	string pib;
	string address;
	string phone_number;
	dictionary grades;
public:
	Guest() :pib("NoPib"), address("NoAddress"), phone_number("NoPhoneNumber")
	{
		grades = { {"����������",{0}},{"��������� ����",{0}},{"���������",{0}} };
	}
	Guest(const string& pib, const string& address, const string& phone_number, const dictionary&& arr) : pib(pib), address(address), phone_number(phone_number), grades(arr) {}

	inline bool GetIsRegistered() const
	{
		return isRegistered;
	}

	inline string GetPib() const
	{
		return pib;
	}
	inline void SetPib(const string& pib)
	{
		this->pib = pib;
	}

	inline string GetAddress() const
	{
		return address;
	}
	inline void SetAddress(const string& address)
	{
		this->address = address;
	}

	inline string GetPhoneNumber() const
	{
		return phone_number;
	}
	inline void SetPhoneNumber(const string& phone_number)
	{
		this->phone_number = phone_number;
	}

	inline dictionary GetGrades() const
	{
		return grades;
	}

	inline void input()
	{
		cout << "ϲ�: ";
		getline(cin, pib);

		cout << "������: ";
		getline(cin, address);

		cout << "����� ��������: ";
		getline(cin, phone_number);
	}
	void show() const
	{
		cout << "ϲ�: " << pib << " | ������: " << address << " | ����� ��������: " << phone_number << "\n������:\n";

		for (auto i : grades) {
			cout << i.first << ": ";
			for (int j : i.second) {
				cout << j << ", ";
			}
			cout << endl;
		}

		cout << endl;
	}

	void MathTest()
	{
		cout << "���� � ����������(������������ ��� - 12):\n";
		
		arr tasks{ rand() % 10 + 1,rand() % 10 - 3 };
	}
};

int main()
{
	setlocale(0, "");
	srand((unsigned)time(NULL));
	


	cout << endl;
	system("pause");
}