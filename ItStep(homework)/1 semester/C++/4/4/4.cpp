#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));

    //task 1
    /*
    const int n = 10;
    int arr[n];

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "\n�����\n";
    for (int element : arr) {
        cout << element << "  ";
    }

    int sum = 0, input;
    cout << "\n\n����i�� ��������, ��� ������ ����: ";
    cin >> input;
    for (int element : arr) {
        if (element < input) sum += element;
    }

    cout << "���� ��i� �������i�, ��i < " << input << " = " << sum;
    */

    //task 2
    /*
    const int n = 12;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "����i�� �������� �� " << i + 1 << " �i����: ";
        cin >> arr[i];
    }

    cout << "\n�����\n";
    for (int element : arr) {
        cout << element << "  ";
    }

    int start, end;
    cout << "\n\n����i�� ������� i �i���� �i������� �� ����i:\n";
    cin >> start >> end;
    if (start > end) swap(start, end);

    int max = arr[0], index_max = -1;
    for (int i = start - 1; i < end; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index_max = i;
        }
    }

    int min = arr[0], index_min = -1;
    for (int i = start - 1; i < end; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index_min = i;
        }
    }

    cout << "\n�i���� � �i������i �i� " << start << " �� " << end << "\n������������ �������� - " << index_max + 1 << " �i����\n�i�i������� �������� - " << index_min + 1 << " �i����";
    */

    //task 3
    /*
    const int n = 10;
    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 21 - 10;
    }

    cout << "\n�����\n";
    for (int element : arr) {
        cout << element << "  ";
    }

    int sum_neg = 0;
    for (int element : arr) {
        if (element < 0) sum_neg += element;
    }

    int min = arr[0], index_min = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index_min = i;
        }
    }

    int max = arr[0], index_max = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index_max = i;
        }
    }

    if (index_min > index_max) swap(index_min, index_max);

    int dob_min_max = 1;
    for (int i = index_min + 1; i < index_max; i++) {
        if (arr[i] != 0) dob_min_max *= arr[i];
    }

    int dob_par = 1;
    for (int element : arr) {
        if (element % 2 == 0) dob_par *= element;
    }

    int neg1 = 0, neg2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            neg1 = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] < 0) {
            neg2 = i;
            break;
        }
    }

    int sum_neg1_neg2 = 0;
    for (int i = neg1 + 1; i < neg2; i++) {
        sum_neg1_neg2 += arr[i];
    }

    cout << "\n\n���� ����������: " << sum_neg << endl << "������� ��. �i� min max: " << dob_min_max << endl << "������� ��. � ������� ��������: " << dob_par << endl << "���� ��. �i� 1 �� ������i� ���. ��.: " << sum_neg1_neg2 << endl;
    */

    //task 4
    /*
    const int n = 10, k = 3;
    int arr[n]{ 0 }, clone_arr[n]{ 0 }, best[k]{0};

    for (int i = 0; i < n; i++) {
        cout << "����i�� " << i + 1 << " ��i���: ";
        cin >> arr[i];
    }

    int input;
    while (true) {
        cout << "\n0 - ���i� � ��������\n1 - ���i� ��i���\n2 - ������� ������ 3 i����i� � ������� ��i�����\n3 - ��������� i�����\n4 - �����i���� ������i� ��� i ������i��� ��������� �������i�\n\n";
        cin >> input;

        if (input == 0) break;

        switch (input) {
        case 1:
            cout << "\n��i���\n";
            for (int element : arr) {
                cout << element << "  ";
            }

            break;
        case 2:
            for (int i = 0; i < n; i++) {
                clone_arr[i] = arr[i];
            }

            for (int i = 0; i < n - 1; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (clone_arr[i] < clone_arr[j]) {
                        swap(clone_arr[i], clone_arr[j]);
                    }
                }
            }

            for (int i = 0; i < k; i++) {
                best[i] = clone_arr[i];
            }

            for (int element : best) {
                cout << element << "  ";
            }

            break;
        case 3:
            int number, grade;
            cout << "����i�� ����� i�����, ���� ������ ��i����, � ���i� ��i���\n: ";
            cin >> number >> grade;
            arr[number - 1] = grade;

            break;
        case 4:
            float x = 0;
            for (int element : arr) {
                x += element;
            }
            x /= n;
            if (x >= 10.7) cout << "�� ������ �� �������i�\n";
            else cout << "�� �� ������ �� �������i�";

            break;
        }

    }
    */

    //task 5 (���������)
    /*
    const int m = 20;
    int a[m];

    for (int i = 0; i < m; i++) {
        a[i] = rand() % 100 + 1;
    }

    cout << "\n�����\n";
    for (int element : a) {
        cout << element << "  ";
    }

    int n;
    cout << "\n\n������ ������� �������, �� �� ����� ������� �����: ";
    cin >> n;

    if (n > 0) {
        for (int i = 0; i < n; i++) {
            int copy = a[0];
            for (int j = 0; j < m - 1; j++) {
                a[j] = a[j + 1];
            }
            a[m - 1] = copy;
        }
    }

    cout << "\n�������� �����\n";
    for (int element : a) {
        cout << element << "  ";
    }

    int max = a[0], index_max = 0;;
    for (int i = 0; i < m; i++) {
        if (a[i] > max) {
            max = a[i];
            index_max = i;
        }
    }

    for (int i = 0; i < index_max; i++) {
        for (int j = i + 1; j < index_max; j++) {
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }

    for (int i = index_max + 1; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            if (a[i] < a[j]) swap(a[i], a[j]);
        }
    }

    cout << "\n���������\n";
    for (int element : a) {
        cout << element << "  ";
    }
    */
}