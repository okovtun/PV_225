https://github.com/okovtun/PV_225.git
https://www.youtube.com/watch?v=-kE_L8tb7Z8&list=PLeqyOOqxeiINREtQ3speFZN7xeXLV8gj7

Books:
https://github.com/AllonsiWho/Books.git
https://github.com/AllonsiWho/Book

TODO:
Проверочный код должен заработать:
	String str1 = "Hello";
	cout << str1 << endl;

	String str2 = "World";
	cout << str2 << endl;

	String str3 = str1 + str2;	//Конкатенация (слияние) строк
	cout << str3 << endl;

TOREAD:https://legacy.cplusplus.com/doc/tutorial/classes2/

DONE:
Проверочный код должен заработать:
1. DONE https://github.com/okovtun/PV_225/blob/b48f47bdc82c4e7a324e8b90a0ff37822259298c/IntroductionToOOP/Fraction/main.cpp#L349;
2. https://github.com/okovtun/PV_225/blob/b48f47bdc82c4e7a324e8b90a0ff37822259298c/IntroductionToOOP/Fraction/main.cpp#L355

TODO:
ВЫУЧИТЬ ТЕОРИЮ!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
В классе Fraction реализовать:
	1. Конструкторы и вывод на экран;	DONE
		5;		//double a = 5;
		1/2;
		2(3/4);
	2. Написать методы:
		Fraction& to_improper();	//целую часть интегрирует в числитель
		Fraction& to_proper();		//выделяет целую часть из числителя
		Fraction& reduce();			//сокращает дробь https://www.webmath.ru/poleznoe/formules_12_7.php
	3. Перегрузить арифметические операторы: +, -, *, /;		DONE
	4. Перегрузить присваивания:	=, +=, -=, *=, /=;			DONE
	5. Перегрузить операторы ++/--;
	6. Перегрузить операторы сравнения: ==, !=, >, <, >=, <=;	DONE
	7. Перегрузить оператор ввода с клавиатуры;

DONE:
1. В классе Point написать get/set-методы;	DONE
2. В классе Point написать метод ??? distance(???), который возвращает расстояние до указанной точки;
3. Написать функцию ??? distance(???), которая возвращает расстояние между двумя точками;