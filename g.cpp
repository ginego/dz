#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	static int �abinet; //����������� ����������
	bool hdll = true; // hdll - He Don't Like Lectures //����
	void new_study_year() //�����
	{
		�ourse++;
	}
	void test() //�����
	{
		cout << "Oh no";
	}
	void end_lecture() //�����
	{
		cout << "Oh yeeeeeee";
	}
	void set_Course(int Course_) //������
	{
		if (Course_ > 0) {
			�ourse = Course_;
		}
	}
	int get_Course() //������
	{
		return �ourse;
	}
	static int get_�abinet() //����������� �����
	{
		return �abinet;
	}
private:
	string test; //����
	int �ourse = 1; //����
	string direction = "Fis-mat"; //����
};
class Teacher
{
public:
	friend Student;
	bool Test;
	void test(Student& s) //����� ���������� � ���������� ������ ������ �������(���, ���
	{ // �� �������� � � ��� � �� ����� ������ ���� ����� �������
		����������
			if (Test = true) // � ������ ������� ,�� ���������� ����� ��� ���� ����������)
			{
				s.test = "passed";
			}
			else
			{
				s.test = "failed";
			}
	}
};
int Student::�abinet = 15;