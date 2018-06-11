/*Написать программу «Автоматизированная информационная система ЖД вокзала». 
Система содержит: сведения об отправлении поездов дальнего следования. 
Для каждого поезда указываем: номер, время отправления, станцию назначения. Обеспечить:
	Ввод данных в систему
	Вывод информации о всех поездах
	Вывод информации о запрашиваемом поезде
Использовать контейнерный класс vector.
*/

/* iterator: методы: 
begin-end
rbegin-rend в случае если нам необходимо посмотреть с конца

 end указывает на конец области, а не на последний элемент;
*/
#include "Library.h"
#include"RailwayStation.h"

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Enter task num:";
	cin >> n;
	switch (n) {
		//example
	case 1: {
		vector<int> v;
		v.push_back(5);
		v.push_back(4);
		v.push_back(19);
		v.push_back(29);
		v.push_back(9);
		v.push_back(18);

		//удаление
		v.erase(v.begin());
		for (int i = 0;i < 6/*v.size()*/;i++)
			cout << v[i] << endl;
		cout << "--------------------------------------------------" << endl;
		//
		cout << *(v.end() - 2) << endl;
		cout << "--------------------------------------------------" << endl;

		//используем внешнюю сортировку из бибилиотеки алгоритм
		sort(v.begin(), v.end());
		for (int i = 0;i <6/* v.size()*/;i++)
			cout << v[i] << endl;
		cout << "--------------------------------------------------" << endl;
		// reverse-перевернуть
		reverse(v.begin(), v.end());
		for (int i = 0;i < 6/* v.size()*/;i++)
			cout << v[i] << endl;
		cout << "--------------------------------------------------" << endl;

	}break;

		//STL_Vector

	case 2: {
		/*vector<Train> t;*/
		Railways t;
		Train tmp;
		Time h(11, 00);
		ifstream in_file("Trains.txt");
		if (!in_file) {
			cerr << "File open error" << endl;
		}
		else {
			while (!in_file.eof()) {
				in_file >> tmp;
					t.Add(tmp);
				}
			
		}
		/*for (int i = 0; i < t.size(); i++)
			cout << t[i] << endl;*/
		cout << "Вывод информации о всех поездах:" << endl;
		t.printAll();
		cout << "-----------------------------------------------------------------------------" <<endl;
		cout << "Вывод информации о запрашиваемом поезде:" << endl;
		t.print(h);
	}break;

	}

	system("pause");
	return 0;
}