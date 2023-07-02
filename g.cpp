#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	static int Сabinet; //статическая переменная
	bool hdll = true; // hdll - He Don't Like Lectures //поле
	void new_study_year() //метод
	{
		Сourse++;
	}
	void test() //метод
	{
		cout << "Oh no";
	}
	void end_lecture() //метод
	{
		cout << "Oh yeeeeeee";
	}
	void set_Course(int Course_) //сеттер
	{
		if (Course_ > 0) {
			Сourse = Course_;
		}
	}
	int get_Course() //геттер
	{
		return Сourse;
	}
	static int get_Сabinet() //статический метод
	{
		return Сabinet;
	}
private:
	string test; //поле
	int Сourse = 1; //поле
	string direction = "Fis-mat"; //поле
};
class Teacher
{
public:
	friend Student;
	bool Test;
	void test(Student& s) //метод работающий с приватными полями класса студент(нет, оно
	{ // не работает и я так и не понял почему ведь класс учитель
		дружествен
			if (Test = true) // к классу студент ,но компилятор пишет что член недоступен)
			{
				s.test = "passed";
			}
			else
			{
				s.test = "failed";
			}
	}
};
int Student::Сabinet = 15;