#include <iostream>
using namespace std;

class Animal
{
	string name;
	double size;
	double weight;
	int age;
public:
	Animal()
	{
		name = "";
		size = 0;
		weight = 0;
		age = 0;
	}
	Animal(string n, double s, double w, int a)
	{
		name = n;
		size = s;
		weight = w;
		age = a;
	}
	void Print()
	{
		cout << "�������� " << name << endl;
		cout << "������ : " << size << endl;
		cout << "���: " << weight << endl;
		cout << "�������: " << age << endl;
	}
	void Input()
	{
		cout << "������� �������� ";
		cin >> name;
		cout << "������� ������� ";
		cin >> age;
		cout << "������� ������ ";
		cin >> size;
		cout << "������� ��� ";
		cin >> weight;
	}
};

class Elephant : public Animal
{
	double trunk;
	double foot;
public:
	Elephant()
	{
		trunk = foot = 0;
	}
	Elephant(string n, double s, double w, int a, double t, double f) :Animal(n, s, w, a)
	{
		trunk = t;
		foot = f;
	}
	void Print()
	{
		Animal::Print();
		cout << "������ ������: " << trunk << endl;
		cout << "������ ���� " << foot << endl;
	}
};

class Penguin : public Animal
{
	string kind;
	double feed;
public:
	Penguin()
	{
		kind = "";
		feed = 0;
	}
	Penguin(string n, double s, double w, int a, string k, double f) :Animal(n, s, w, a)
	{
		kind = k;
		feed = f;
	}
	void Print()
	{
		Animal::Print();
		cout << "��� �������: " << kind << endl;
		cout << "��� ����� " << feed << endl;
	}
};

class Parrot : public Animal
{
	string color;
	bool speak;
public:
	Parrot()
	{
		color = "";
		speak = false;
	}
	Parrot(string n, double s, double w, int a, string c, bool f) :Animal(n, s, w, a)
	{
		color = c;
		speak = f;
	}
	void Print()
	{
		Animal::Print();
		cout << "���� " << color << endl;
		if (speak)
			cout << "����� ��������" << endl;
		else
			cout << "�� ����� ��������" << endl;
	}
};

class Dog :public Animal
{
	string nick;
	bool train;
public:
	Dog()
	{
		nick = "";
		train = false;
	}
	Dog(string n, double s, double w, int a, string c, bool f) :Animal(n, s, w, a)
	{
		nick = c;
		train = f;
	}
	void Print()
	{
		Animal::Print();
		cout << "���: " << nick << endl;
		if (train)
			cout << "���������" << endl;
		else
			cout << "�� ���������" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	Elephant obj1("����", 23, 3000, 50, 3, 1.5);
	Penguin obj2("������", 1, 30, 3, "����������", 100);
	Parrot obj3("�������", 0.5, 3, 2, "�������", true);
	Dog obj4("������", 2, 30, 5, "�����", true);
	obj1.Print();
	cout << endl;
	obj2.Print();
	cout << endl;
	obj3.Print();
	cout << endl;
	obj4.Print();
}