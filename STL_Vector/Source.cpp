/*Написать программу «Автоматизированная информационная система ЖД вокзала». 
Система содержит: сведения об отправлении поездов дальнего следования. 
Для каждого поезда указываем: номер, время отправления, станцию назначения. Обеспечить:
	Ввод данных в систему
	Вывод информации о всех поездах
	Вывод информации о запрашиваемом поезде
Использовать контейнерный класс vector.
*/


#include "Library.h"
#include"RailwayStation.h"

int main() {
	setlocale(LC_ALL, "Russian");
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
	
	system("pause");
	return 0;
}