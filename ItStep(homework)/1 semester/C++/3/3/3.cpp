#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    setlocale(0, "");

    //task 1
    /*
    int n;

    int r, x, y;
    while (true) {
        cout << "����i�� �i����(0 - �����, 1, 2, 3, 4, 5): ";
        cin >> n;

        if (n == 0) break;

        switch (n) {
        case 1:
            r = 9;
            x = r, y = 0;
            for (int i = 0; i < r; i++) {
                if (i <= r / 2) {
                    for (int j = 0; j < y; j++) {
                        cout << "  ";
                    }
                    for (int j = 0; j < x; j++) {
                        cout << "* ";
                    }
                    x -= 2;
                    y++;
                    cout << endl;
                }
                if (i >= r / 2) {
                    x += 2;
                    y--;
                    for (int j = 0; j < y; j++) {
                        cout << "  ";
                    }
                    for (int j = 0; j < x; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
            }

            break;
        case 2:
            r = 9;
            x = 1, y = r - 2;
            for (int i = 0; i < r; i++) {
                if (i < r / 2) {
                    for (int j = 0; j < x; j++) {
                        cout << "* ";
                    }
                    for (int j = 0; j < y; j++) {
                        cout << "  ";
                    }
                    for (int j = 0; j < x; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                    x++;
                    y -= 2;
                }
                if (i == r / 2) {
                    for (int j = 0; j < r; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                if (i > r / 2) {
                    x--;
                    y += 2;
                    for (int j = 0; j < x; j++) {
                        cout << "* ";
                    }
                    for (int j = 0; j < y; j++) {
                        cout << "  ";
                    }
                    for (int j = 0; j < x; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
            }

            break;
        case 3:
            r = 9;
            x = 1, y = r - 2;
            for (int i = 0; i < r; i++) {
                if (i < r / 2) {
                    for (int j = 0; j < x; j++) {
                        cout << "* ";
                    }
                    for (int j = 0; j < y; j++) {
                        cout << "  ";
                    }

                    cout << endl;
                    x++;
                    y -= 2;
                }
                if (i == r / 2) {
                    for (int j = 0; j < r / 2 + 1; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                if (i > r / 2) {
                    x--;
                    y += 2;
                    for (int j = 0; j < x; j++) {
                        cout << "* ";
                    }
                    for (int j = 0; j < y; j++) {
                        cout << "  ";
                    }
                    cout << endl;
                }
            }

            break;
        case 4:
            r = 9, x = 1, y = r - 1;
            for (int i = 0; i < r; i++) {
                if (i < r / 2) {

                    for (int j = 0; j < y; j++) {
                        cout << "  ";
                    }

                    for (int j = 0; j < x; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                    x++;
                    y--;
                }
                if (i == r / 2) {
                    for (int j = 0; j < r / 2; j++) {
                        cout << "  ";
                    }
                    for (int j = 0; j < r / 2 + 1; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                if (i > r / 2) {
                    x--;
                    y++;

                    for (int j = 0; j < y; j++) {
                        cout << "  ";
                    }
                    for (int j = 0; j < x; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
            }

            break;
        case 5:
            x = r = 9;
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < x; j++) {
                    cout << "* ";
                }
                cout << endl;
                x--;
            }

            break;
        }
    }
    */

    //task 2
    /*
    int chislo, chislo_kop, x, sum = 0, s_a = 0, k = 0, k_0 = 0;
    cout << "����i�� ����-��� �i�� �����: ";
    cin >> chislo;
    
    chislo_kop = chislo;

    while (chislo_kop > 0) {
        if (chislo_kop % 10 == 0) k_0++;
        x = chislo_kop % 10;
        chislo_kop /= 10;
        k++;
        sum += x;
    }
    s_a = sum / k;

    cout << "� ����i " << chislo << " - " << k << " ����" << ", � ��� " << k_0 << " ���i�\n���� ��i� ���� ����� = "<<sum<<endl<<"������ ����������� = " << s_a<<endl;
    */

    //task 3
    /*
    int start = 100, end = 999, i_kop, kilk = 0, x1, x2, x3;

    for (int i = start; i <= end; i++) {
        i_kop = i;
        x3 = i_kop % 10;
        i_kop /= 10;
        x2 = i_kop % 10;
        i_kop /= 10;
        x1 = i_kop;
        if (x1 != x2 && x1 != x3 && x2 != x3) kilk++;
    }
    cout << "�i���i��� �����, � �i������i (100-999), � ���� ��i ����� �i��i = " << kilk;
    */
    
    //task 4
    /*
    int input;
    cout << "������ ���� �����: ";
    cin >> input;

    int i = 1;
    while (i <= input) {
        if (input % i == 0) cout << i << endl;
        i++;
    }
    */

    //task 5 (���������)
    /*
    cout << "GUESS MY NUMBER\n";
    system("pause");

    int complexity;
    cout << "\n1 - ������ �����(1-10)(3 ������)\n2 - ������ �����(1-100)(2 ������)\n��� ����: ";
    cin >> complexity;

    int ran = 0, health = 0, pidk, input = 0, kilk_vgad = 0, end = 0, vgad_za_round;
    if (complexity == 1) {
        health = 0.5 * 10;
        end = 3;
    }
    else if (complexity == 2) {
        health = 0.25 * 91;
        end = 2;
    }

    int i = 0, UserPoints = 0, PcPoints = 0;
    while (true) {
        vgad_za_round = 0;
        if (complexity == 1) ran = rand() % 10 + 1;
        else if (complexity == 2) ran = rand() % 99 + 10;
        cout << endl << "������� " << complexity << " - ����� " << i + 1 << endl;
        cout << "���� ����� - " << health << endl;
        cout << "���� ���� - " << UserPoints << endl << "���� ����'����� - " << PcPoints << endl << endl;
        system("pause");

        cout << "\n�������� �����(0 ��� ���������� ���): ";
        cin >> input;
        if (input == 0) {
            cout << "��� ���������!\n���� ���� - " << UserPoints << endl << "���� ����'����� - " << PcPoints << endl;
            break; 
        }

        if (input != ran) {
            health--;
            cout << "�� �� ������� �����\n\n";
            system("pause");
            cout << "\n1 - ����������� �������\n2 - ͳ\n��� ����(������� ������� 1 �����): ";
            cin >> pidk;

            if (pidk == 1) {
                health--;
                if (ran > input) cout << "!�������� ����� �����!\n";
                else cout << "!�������� ����� �����!\n";
            }
        }
        else {
            kilk_vgad++;
            cout << "���! �� �������\n\n";
        }

        if (health == 0) break;
        
        if (kilk_vgad == 3 && complexity == 1) {
            cout << "�� ������ �� ������� �� ��������� �����?\n1 - ���\n2 - ͳ\n��� ����: ";
            cin >> input;
            if (input != 1) {
                break;
            }
            complexity = 2;
        }

        if (vgad_za_round == 0 && complexity == 1) PcPoints += (0.5 * 10) * 5;
        else if (vgad_za_round == 0 && complexity == 2) PcPoints += (0.25 * 91) * 10;
        
        i++;
    }

    cout << "\n\n���������� ���!\n";
    if (UserPoints > PcPoints) {
        cout << "³���, �� ���������!\n" << "���� ���� - " << UserPoints << endl;
    }
    else if (PcPoints > UserPoints) {
        cout << "�� ��������!\n" << "���� ����'����� ���� - " << PcPoints << endl;
    }
    else {
        cout << "ͳ���!\n" << "���� - " << PcPoints << endl;
    }
    */
}