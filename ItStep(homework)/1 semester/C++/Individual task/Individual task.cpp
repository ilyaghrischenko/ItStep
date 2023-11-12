#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
#include <ctime>
#define MAX_LIVES 7
using namespace std;


// ��������

char** ArrWords(int size)
{
    const char* words[] = { "apple", "book", "chair", "dog", "fish", "globe", "hat", "ice", "kite", "lamp", //������ ��� ���
        "moon", "note", "owl", "quilt", "shoes", "tree", "umbrella", "watch", "banana", "carrot",
        "shoes", "pencil", "snail", "robot", "zipper", "butterfly", "crown", "feather", "hamburger",
        "igloo", "juice", "magnet", "pancake", "raccoon", "velvet", "backpack", "candle", "earrings",
        "fountain", "garden", "lemon", "dice" };

    char** arr = new char* [size];
    for (int i = 0; i < size; ++i) {
        arr[i] = new char[strlen(words[i]) + 1];
        strcpy(arr[i], words[i]);
    }

    return arr;
}

void DelArr(char** arr, int size) //��������� 2-�������� ������
{
    for (int i = 0; i < size; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
}

char* GetCurWord(char** arr, int size) //�������, ��� ������� �������� ����� � ������ ������
{
    int rand_pos = rand() % size;
    char* cur_word = new char[strlen(arr[rand_pos]) + 1];
    strcpy(cur_word, arr[rand_pos]);

    return cur_word;
}

void PrintHangman(int lives) //�������, ��� �������� �������� ��������, � ��������� �� �-�� �������
{
    const char* hangman_stages[] = {
        "  +---+\n"
        "  |   |\n"
        "      |\n"
        "      |\n"
        "      |\n"
        "      |\n"
        "=========",
        "  +---+\n"
        "  |   |\n"
        "  O   |\n"
        "      |\n"
        "      |\n"
        "      |\n"
        "=========",
        "  +---+\n"
        "  |   |\n"
        "  O   |\n"
        "  |   |\n"
        "      |\n"
        "      |\n"
        "=========",
        "  +---+\n"
        "  |   |\n"
        "  O   |\n"
        " /|   |\n"
        "      |\n"
        "      |\n"
        "=========",
        "  +---+\n"
        "  |   |\n"
        "  O   |\n"
        " /|\\  |\n"
        "      |\n"
        "      |\n"
        "=========",
        "  +---+\n"
        "  |   |\n"
        "  O   |\n"
        " /|\\  |\n"
        " /    |\n"
        "      |\n"
        "=========",
        "  +---+\n"
        "  |   |\n"
        "  O   |\n"
        " /|\\  |\n"
        " / \\  |\n"
        "      |\n"
        "========="
    };

    cout << hangman_stages[MAX_LIVES - lives] << endl;
}

void Game(char** arr, int size) //�������, ��� ������� �� ���� ���
{
    int lives = MAX_LIVES;
    char* cur_word = GetCurWord(arr, size); //����� ������ �������� �����

    char word[512]{ "" };
    for (int i = 0; i < strlen(cur_word); ++i) word[i] = '_';

    while (lives > 0) {
        cout << "�����: ";
        for (int i = 0; i < strlen(cur_word); ++i) cout << word[i] << ' ';
        cout << endl;

        char symbol;
        cout << "������ ������: ";
        cin >> symbol;

        cout << endl;

        bool isFind = false;
        for (int i = 0; i < strlen(cur_word); ++i) { //�������� �� ���������� ���������� ������� � ����
            if (cur_word[i] == symbol) {
                isFind = true;
                word[i] = symbol;
            }
        }

        if (!isFind) {
            lives--;
            PrintHangman(lives);
        }

        bool wordGuessed = true;
        for (int i = 0; i < strlen(cur_word); ++i) {
            if (word[i] == '_') {
                wordGuessed = false;
                break;
            }
        }

        if (wordGuessed) {
            cout << "�� �������! �������� �����: " << cur_word << endl;
            break;
        }
    }

    if (lives == 0) {
        cout << "�� ��������. �������� �����: " << cur_word << endl;
    }

    delete[] cur_word;
}

int main()
{
    setlocale(0, "");
    srand((unsigned)time(NULL));

    int size = 42;
    char** arr_words = ArrWords(size);

    Game(arr_words, size);

    DelArr(arr_words, size);

    cout << endl;
    system("pause");
}
