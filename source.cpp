#include <iostream>
#include <vector>
using namespace std;

double VectorsScalarProduct(vector<double> vec1, vector<double> vec2, size_t vecSize) {
	double product = 0;
	for (size_t i = 0; i < vecSize; i++) {
		product += vec1[i] * vec2[i];
	}
	return product;
}

int main() {
	setlocale(0, "");
	size_t vecSize;
	double coord;
	vector<double> vec1, vec2;
	cout << "Введите размерность векторов: \n";
	cin >> vecSize;
	for (size_t i = 0; i < vecSize; i++) {
		cout << "Введите " << i + 1 << "е координаты: \n";
		cin >> coord;
		vec1.push_back(coord);
		cin >> coord;
		vec2.push_back(coord);
	}
	cout << "Скалярное произведение этих векторов равно " << VectorsScalarProduct(vec1, vec2, vecSize);
}
