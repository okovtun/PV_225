#include<iostream>
using namespace std;

class Vehicle
{
	int speed;
public:
	virtual void move() = 0;	//это число виртуальный метод, 
	//и благодар€ ему класс 'Vehicle' €вл€етс€ абстрактным
};

class GroundVehicle :public Vehicle {};

class Bulldozer :public GroundVehicle
{
public:
	void move()
	{
		cout << "≈здит где угодно на гусеничном ходу" << endl;
	}
};
class Car :public GroundVehicle{};
class SportCar :public Car
{
public:
	void move()
	{
		cout << "≈здит на высокой скорости по идеальной дороге" << endl;
	}
};
class Jeep :public Car
{
public:
	void move()
	{
		cout << "≈здит где угодно" << endl;
	}
};

void main()
{
	setlocale(LC_ALL, "");
	
	//Vehicle v;
	//GroundVehicle gv;
	Bulldozer bull;
	bull.move();

	SportCar bmw;
	bmw.move();

	Jeep jeep;
	jeep.move();
}