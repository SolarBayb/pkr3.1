#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
using namespace std;
enum Specialty { ��, ��, ��, ��, �� };
string strSpecialty[] = { "��","��","��","��","��" };
struct Student
{
	string prizv;
	Specialty specialty;
	short unsigned kurs;
	short unsigned physic;
	short unsigned math;
	short unsigned inform;
};
void Create(Student* s, const int N);
void Print(Student* s, const int N);
void Count(Student* s, const int N);
void Prizv(Student* s, const int N);
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;
	cout << "������ ������� ��������: "; cin >> N;
	Student* s = new Student[N];
	Create(s, N);
	Print(s, N);
    Count(s, N);
	cout  << "��������, �� �������� ������ 5 ��� 4 � ������ � ����������: " << endl;
	Prizv(s, N);
	delete[] s;
	return 0;
}
void Create(Student* s, const int N)
{
	int kurs, specialty{};
	for (int i = 0; i < N; i++)
	{
		cout << "������� " << i + 1 << ":" << endl;
		cin.get();
		cin.sync();
		cout << "�������: "; getline(cin, s[i].prizv);
		cout << "����: "; cin >> s[i].kurs;
		cout << "������������ (0 - ��, 1 - ��, 2 - ��, 3 - ��, 4 - ��):";cin >> specialty;
			s[i].specialty = (Specialty)specialty;
		cout << " ������ � ������: "; cin >> s[i].physic;
		cout << " ������ � ����������: "; cin >> s[i].math;
		cout << " ������ � �����������: "; cin >> s[i].inform;
	}
}
void Print(Student* s, const int N)
{
	cout <<
		"================================================================================"
		<< endl;
	cout << "| � | ������� | ���� | ������������ | Գ���� | ���������� | ����������� | "
		<< endl;
	cout <<
		"--------------------------------------------------------------------------------"
		<< endl;
	for (int i = 0; i < N; i++)
	{
		cout << "| " << setw(2) << right << i + 1 << " "
			<< "| " << setw(13) << left << s[i].prizv
			<< "| " << setw(3) << right << s[i].kurs << " "
			<< "| " << setw(8) << right << strSpecialty[s[i].specialty] <<
			" "
			<< "| " << setw(4) << right << s[i].physic << " "
			<< "| " << setw(6) << right << s[i].math << " "
			<< "| " << setw(6) << right << s[i].inform << " |" << endl;
	}
	cout <<
		"================================================================================"
		<< endl;
}
void Count(Student* s, const int N)
{
	int count1 = 0;
    int count2 = 0;
	int count3 = 0;
	for (int i = 0; i < N; i++)
	{
		if (s[i].physic == 5)
		{
			count1++;
		}

		if (s[i].math == 5)
		{
			count2++;
		}

		if (s[i].inform == 5)
		{
			count3++;
		}

	}
	cout << "ʳ������ ������ ��������� � ������: " << count1 << endl;
	cout << "ʳ������ ������ ��������� � ����������: " << count2 << endl;
	cout << "ʳ������ ������ ��������� � �����������: " << count3 << endl;

}
	void Prizv(Student * s, const int N)
	{
		for ( int i=0 ; i < N ; i++)
		{
			if (s[i].physic == 5 && s[i].math == 5 || s[i].physic == 4 && s[i].math == 4)
			{
				cout << s[i].prizv << endl;
			}
		}
    }
