#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	//task 1
	/*
	int grade1, grade2, grade3, grade4, grade5, average;
	cout << "����i�� 5 ��i��� �������� �� ����i\n";
	cin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;


	average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;
	if (average >= 4) {
		cout << "���������";
	}
	else {
		cout << "�� ���������";
	}
	cout << "\n";
	
	system("pause");
	*/

	//task 2
	/*
	int x, x1, x2, x3, x4, NewX;
	cout << "����i�� 4-������ �����: ";
	cin >> x;
	if (x >= 1000 && x <= 9999) {
		x4 = x % 10;
		x /= 10;
		x3 = x % 10;
		x /= 10;
		x2 = x % 10;
		x /= 10;
		x1 = x;
		NewX = (x2 * 1000) + (x1 * 100) + (x4 * 10) + x3;
		cout << "���� ����� - " << NewX;
	}
	else {
		cout << "����� �� 4-������!";
	}
	*/

	//task 3
	/*
	int x1, x2, x3, x4, x5, x6, x7, max;
	cout << "����i�� 7 ����� �� ����i\n";
	cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >> x7;
	max = x1;
	max = (max < x2) ? max = x2 : max;
	max = (max < x3) ? max = x3 : max;
	max = (max < x4) ? max = x4 : max;
	max = (max < x5) ? max = x5 : max;
	max = (max < x6) ? max = x6 : max;
	max = (max < x7) ? max = x7 : max;

	cout << "����������� �������� - " << max;
	*/

	//task 4
	/*
	int vidst_AB, vidst_BC, weight, emnist = 300, per_km, min_p;

    cout << "����i�� �i������ �i� �������� � �� �: ";
    cin >> vidst_AB;

    cout << "����i�� �i������ �i� �������� � �� �: ";
    cin >> vidst_BC;

    cout << "����i�� ����: ";
    cin >> weight;

    if (weight < 500) {
		per_km = 1;
    }
    else if (weight < 1000) {
		per_km = 4;
    }
    else if (weight < 1500) {
        per_km = 7;
    }
    else if (weight < 2000) {
		per_km = 9;
    }
    else if (weight >= 2000) {
        cout << "�i��� �� �i��i��" << endl;
        return 0;
    }

    
    int fuel_AB = vidst_AB * per_km;

    if (fuel_AB > emnist) {
		cout << "��������� �������� �i������ �i� � �� �" << endl;
        return 0;
    }

    emnist -= fuel_AB;

    int fuel_BC = vidst_BC * per_km;

    if (fuel_BC > emnist) {
        cout << "��������� �������� �i������ �i� � �� �" << endl;
        return 0;
    }

    min_p = fuel_AB + fuel_BC;

	cout << "�i�i������ �i���i��� ������ ��� ��������� ��������: " << min_p << endl;
	*/
	
	//task 5
	/*
	int bazh_d, k_zap, r_code, choice, tax = 0;
	cout << "1 - ����i�� ������� ���i� ���i �� �i���i��� ���i�����(�� ����i)\n2 - ����i�� �i���i��� ����i� ����, �������i ����� �� ������� ����� ��������\n3 - ����i�� �i���i��� ����i� ���� �� �i���i��� ���i�����\n";
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "������� ���i�: ";
		cin >> bazh_d;
		cout << "�i���i��� ���i�����: ";
		cin >> k_zap;

		tax = (k_zap >= 3) ? ((k_zap / 3) * 20) : 0;
		r_code = ((bazh_d - tax) * 100) / 50;

		cout << "�����: " << tax << "\n��� ����i��� �������� " << r_code << " ����i� ����, ��� �������� " << bazh_d;
		break;

	case 2:
		cout << "�i���i��� ��������� ����i� ����: ";
		cin >> r_code;
		cout << "������� ���i�: ";
		cin >> bazh_d;

		if (r_code / 2 > bazh_d) {
			k_zap = (r_code / 2 - bazh_d) / 20;
			cout << "�i���i��� ��������� �i�i����� - " << k_zap;
		}
		else {
			cout << "\n��� �� ����� ���i���������!";
		}
		break;

	case 3:
		int zarp;
		cout << "�i���i��� ����i� ����: ";
		cin >> r_code;
		cout << "�i���i��� ���i�����: ";
		cin >> k_zap;

		if (r_code / 2 > k_zap / 3 * 20) {
			zarp = (r_code / 2 - k_zap % 3 * 20);
			cout << "���� ��������� - " << zarp;
		}
		else {
			cout << "�� �� �������� ��������!";
		}
		break;
		
	default:
		cout << "�� �������� ������i�";
	}
	*/
}