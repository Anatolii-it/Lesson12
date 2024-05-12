#include <iostream>
using namespace std;

const int M_EXAMS = 5;

struct STUDENT
{
    char surname[11];
    unsigned short day;
    unsigned short month;
    unsigned int year;
    int* exams;
    float average;
};

void calculate_average(STUDENT& student, int exams_count)
{
    int sum = 0;
    for (int i = 0; i < exams_count; i++)
    {
        sum += student.exams[i];
    }
    student.average = (float)sum / exams_count;
}

STUDENT& highest_average(STUDENT students[], int count)
{
    STUDENT* highest = &students[0];
    for (int i = 1; i < count; i++)
    {
        if (students[i].average > highest->average)
        {
            highest = &students[i];
        }
    }
    return *highest;
}

STUDENT& lowest_average(STUDENT students[], int count)
{
    STUDENT* lowest = &students[0];
    for (int i = 1; i < count; i++)
    {
        if (students[i].average < lowest->average)
        {
            lowest = &students[i];
        }
    }
    return *lowest;
}

int main()
{
    int count;
    cout << "������ ������� ��������: ";
    cin >> count;

    STUDENT* students = new STUDENT[count];

    for (int i = 0; i < count; i++)
    {
        cout << "������ ������� ��������: ";
        cin >> students[i].surname;
        cout << "������ ���� ���������� ��������: ";
        cin >> students[i].day;
        cout << "������ ����� ���������� ��������: ";
        cin >> students[i].month;
        cout << "������ �� ���������� ��������: ";
        cin >> students[i].year;

        int exams_count;
        cout << "������ ������� ������ ��� �������� " << students[i].surname << ": ";
        cin >> exams_count;

        students[i].exams = new int[exams_count];

        cout << "������ ���������� ������ ��� �������� " << students[i].surname << ":" << endl;
        for (int j = 0; j < exams_count; j++)
        {
            cout << "������ �� ����� " << j + 1 << ": ";
            cin >> students[i].exams[j];
        }

        calculate_average(students[i], exams_count);
    }

    STUDENT& highest = highest_average(students, count);
    STUDENT& lowest = lowest_average(students, count);

    cout << endl;
    cout << "------������� � �������� ������� �����:------" << endl;
    cout << "�������: " << highest.surname << endl;
    cout << "���� ����������: " << highest.day << "." << highest.month << "." << highest.year << endl;
    cout << "������� ���: " << highest.average << endl;
    cout << endl;
    cout << "------������� � ��������� ������� �����:------" << endl;
    cout << "�������: " << lowest.surname << endl;
    cout << "���� ����������: " << lowest.day << "." << lowest.month << "." << lowest.year << endl;
    cout << "������� ���: " << lowest.average << endl;

    
    for (int i = 0; i < count; i++)
    {
        delete[] students[i].exams;
    }
    delete[] students;

    return 0;
}
