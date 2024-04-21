#include <iostream>
#include "Header.h"
using namespace std;

void Apparat::dan3(const char* io, const char* model, int energ) {
	cout << "Производитель " << io << "\n Модель " << model << "\n Потребление " << energ << "В" << endl;
}
//
void slot::dan21(const char* ii, int colmest, int colich) {
	cout << "Название: " << ii << ". Место в слоте(придельное): " << colmest << ". Наличие: " << colich << endl;
}
void slot::dan22(const char* ii, int colmest, int colich) {
	cout << "Название: " << ii << ". Место в слоте(придельное): " << colmest << ". Наличие: " << colich << endl;
}
void slot::dan23(const char* ii, int colmest, int colich) {
	cout << "Название: " << ii << ". Место в слоте(придельное): " << colmest << ". Наличие: " << colich << endl;
}
void slot::dan24(const char* ii, int colmest, int colich) {
	cout << "Название: " << ii << ". Место в слоте(придельное): " << colmest << ". Наличие: " << colich << endl;
}
void slot::dan25(const char* ii, int colmest, int colich) {
	cout << "Название: " << ii << ". Место в слоте(придельное): " << colmest << ". Наличие: " << colich << endl;
}


const char* snack::getDan11() const {
	return ii;
}
void snack::setDan11(const char* idi, int colorii, int sto, int colich) {
	ii = idi;
	cout << "Название 1: " << ii << ". Колории: " << colorii << ". Стоймость: " << sto << ". Количество: " << colich << endl;
}
const char* snack::getDan12()const {
	return ii;
}
void snack::setDan12(const char* idi, int colorii, int sto, int colich) {
	ii = idi;
	cout << "Название 2: " << ii << ". Колории: " << colorii << ". Стоймость: " << sto << ". Количество: " << colich << endl;
}
const char* snack::getDan13()const {
	return ii;
}
void snack::setDan13(const char* idi, int colorii, int sto, int colich) {
	ii = idi;
	cout << "Название 3: " << ii << ". Колории: " << colorii << ". Стоймость: " << sto << ".Количество: " << colich << endl;
}

const char* snack::getDan14()const {
	return ii;
}
void snack::setDan14(const char* idi, int colorii, int sto, int colich) {
	ii = idi;
	cout << "Название 4: " << ii << ". Колории: " << colorii << ". Стоймость: " << sto << ". Количество: " << colich << endl;
}



const char* snack::getDan15()const {
	return ii;
}
void snack::setDan15(const char* idi, int colorii, int sto, int colich) {
	ii = idi;
	cout << "Название 5: " << ii << ". Колории: " << colorii << ". Стоймость: " << sto << ". Количество: " << colich << endl;
}
