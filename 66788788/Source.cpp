#include <iostream>
#include "Source1.cpp"
using namespace std;
int main() {
	system("chcp 1251");
	const char* eda1;
	const char* eda2;
	const char* eda3;
	const char* eda4;
	const char* eda5;
	eda1 = "Twibcbcb    cbcbcbcbxxs";
	eda2 = "Bouncbx    cbcvbcty";
	eda3 = "Milkxbcми     xbcvbcyWay";
	eda4 = "Marsxbcbxcv";
	eda5 = "Nutscxbc         bcvbbbbbbbbbb";
	bool t = false;
	slot* m2 = new slot;
	Apparat* m = new Apparat;
	snack* m1 = new snack;
	string d0, d1 = "к", d2, d3, d4, d5 = "ко", vib;
	char rit;
	bool tok = true;
	int pe, pen, pent, skok1 = 0, skok2 = 0, skok3 = 0, skok4 = 0, skok5 = 0, mnogo, op, mas1 = 0, mas2 = 0, mas3 = 0, mas4 = 0, mas5 = 0;
	cout << "Автомат с батоньчиками приветсвует вас!\nВаши дейстия?\nиспользовать/уйти" << endl;
	do {
		cin >> d0;
		if (d0 == "использовать") {
			cout << "хорошо мы продолжим" << endl;
			pe = 0;
		}
		else if (d0 == "уйти") {
			cout << "Досвидание " << endl;
			pe = 0;
			return 0;
		}
		else {
			cout << "Не ясно, заново" << endl;
			pe = 1;
		}
	} while (pe != 0);
	do {
		do {
			do {
				cout << "Как вы хотите использовать автомат\nКак...?\nпокупатель/обслуга" << endl;
				cin >> d0;
				if (d0 == "покупатель") {
					do {
						pe = 0;
						cout << "Наше предложение." << endl;
						m1->setDan11(eda1, 14, 54, skok1);
						m1->setDan12(eda2, 34, 109, skok2);
						m1->setDan13(eda3, 17, 513, skok3);
						m1->setDan14(eda4, 10000, 45, skok4);
						m1->setDan15(eda5, 56, 9, skok5);
						cout << "Правила покупки батончиков:\n1.Нажмите на номер батончика.\n2.Укажите колличество, которое вы хотите купить.\n3.Если у вас остались вопросы нажмите на 'п'.\nуйти." << endl;
						cin >> vib;
						if (vib == "1") {
							cout << "Вы выбрали " << eda1 << endl;
							cin >> mnogo;
							if (skok1 >= mnogo && mnogo > 0) {
								skok1 -= mnogo;
								mas1 += mnogo;
								cout << "Полученно: " << eda1 << " в колличестве " << mas1 << endl << "\nВы хотите продолжить?\n\nда/нет";
							}
							else if (skok1 == 0) {
								cout << "Пусто, обратитесь за помощью.\nВы хотите продолжить?\n\nда/нет" << endl;
							}
							else {
								cout << "Нельзя\nВы хотите продолжить?\n\nда/нет" << endl;
							}
						}
						else if (vib == "2") {
							cout << "Вы выбрали " << eda2 << endl;
							cin >> mnogo;
							if (skok2 >= mnogo && mnogo > 0) {
								skok2 -= mnogo;
								mas2 += mnogo;
								cout << "Полученно: " << eda2 << " в колличестве " << mas2 << endl << "\nВы хотите продолжить?\n\nда/нет";
							}
							else if (skok2 == 0) {
								cout << "Пусто, обратитесь за помощью.\nВы хотите продолжить?\n\nда/нет" << endl;
							}
							else {
								cout << "Нельзя\nВы хотите продолжить?\n\nда/нет" << endl; ;
							}
						}
						else if (vib == "3") {
							cout << "Вы выбрали " << eda3 << endl;
							cin >> mnogo;
							if (skok3 >= mnogo && mnogo > 0) {
								skok3 -= mnogo;
								mas3 += mnogo;
								cout << "Полученно: " << eda3 << " в колличестве " << mas3 << endl << "\nВы хотите продолжить?\n\nда/нет";
							}
							else if (skok3 == 0) {
								cout << "Пусто, обратитесь за помощью.\nВы хотите продолжить?\n\nда/нет" << endl;
							}
							else {
								cout << "Нельзя\nВы хотите продолжить?\n\nда/нет" << endl;
							}
						}
						else if (vib == "4") {
							cout << "Вы выбрали " << eda4 << endl;
							cin >> mnogo;
							if (skok4 >= mnogo && mnogo > 0) {
								skok4 -= mnogo;
								mas4 += mnogo;
								cout << "Полученно: " << eda4 << " в колличестве " << mas4 << "\nВы хотите продолжить?\n\nда/нет" << endl;
							}
							else if (skok4 == 0) {
								cout << "Пусто, обратитесь за помощью.\nВы хотите продолжить?\n\nда/нет" << endl;
							}
							else {
								cout << "Нельзя\nВы хотите продолжить?\n\nда/нет" << endl;
							}
						}
						else if (vib == "5") {
							cout << "Вы выбрали " << eda5 << endl;
							cin >> mnogo;
							if (skok5 >= mnogo && mnogo > 0) {
								skok5 -= mnogo;
								mas5 += mnogo;
								cout << "Полученно: " << eda5 << " в колличестве " << mas5 << "\nВы хотите продолжить?\n\nда/нет" << endl;
								;
							}
							else if (skok5 == 0) {
								cout << "Пусто, обратитесь за помощью.\nВы хотите продолжить?\n\nда/нет" << endl;
							}
							else {
								cout << "Нельзя\nВы хотите продолжить?\n\nда/нет" << endl;
							}
						}
						else if (vib == "п") {
							d5 = "коко";
							d1 = "н";
						}
						else if (vib == "уйти") {

							cout << "До свидания." << endl;
							return 0;
						}
						else {
							cout << "Ошибка\nВы хотите продолжить?\n\nда/нет" << endl;

						}
						if (d1 != "н") {
							cin >> d1;
						}
						else {
							d1 = "нет";
						}
					} while (d1 == "да");
					if (tok == (d1 == "нет" && d5 != "коко")) {
						cout << "До встречи." << endl;
						return 0;
					}
					else if (d5 == "коко") {
						cout << "Если ваш желаймый товар отсутствует, нажмите 'п' и подождите пока обслуживающий персонал загрузит продукты.\nИли уйдите, нажав 'у'.  " << endl;

					}
					else {
						cout << "От не понимания, что вы хотели сказать апарат выключился....." << endl;
						return 0;
					}
					do {
						cin >> rit;
						switch (rit) {
						case 'п':
							pent = 0;
							pen = 0;
							cout << "Покупатель просил предоставить человека, который обслужит автомат.\nВы обслуга?" << endl;
							break;
						case 'у':

							pent = 1;
							pen = 0;
							pe = 0;
							cout << "Досвидание." << endl;
							return 0;
							break;
						default:
							cout << "Изричение не ясны, лучше выражайтесь!" << endl;
							pen = 1;
							break;
						}
					} while (pen != 0);
				}
				else if (d0 == "обслуга") {
					pe = 0;
					pent = 1;
					cout << "Ваши данные об оборудовании " << endl;
					m->dan3("Россия", "PT-45.7", 220);
					m2->dan21(eda1, 10, skok1);
					m2->dan22(eda2, 10, skok2);
					m2->dan23(eda3, 10, skok3);
					m2->dan24(eda4, 10, skok4);
					m2->dan25(eda5, 10, skok5);
					cout << "Что вы планируете сделать?\nзагрузить/Уйти" << endl;
					cin >> d1;
					if (d1 == "загрузить") {
						do {
							cout << "Номера снеков, название, наличие.\n" << "1." << eda1 << " " << skok1 << "\n" << "2." << eda2 << " " << skok2 << "\n" << "3." << eda3 << " " << skok3 << "\n" << "4." << eda4 << " " << skok4 << "\n" << "5." << eda5 << " " << skok5 << "\n\n\nНажмите номер снека и загружайте колличество до десяти в один слот." << endl;
							cin >> op;
							switch (op)
							{
							case 1:
								do {
									cout << "Сколько вы ложите?" << endl;
									cin >> mnogo;
									if (skok1 >= 0) {
										if (mnogo < 10 && mnogo > -10) {
											skok1 = skok1 + (mnogo);
											if (skok1 < 10) {
												cout << "Колличество " << eda1 << " " << skok1 << "\n Продолжить заполнение: " << eda1 << "\n Нажмите 'п' для продолжения или 'г', чтоб законьчить заполнения слота" << endl;
												cin >> d2;
											}
											else if (skok1 == 10) {
												cout << "Колличество " << eda1 << " " << skok1 << " заполнено. Автоматический выход." << endl;
												d2 = "г";
											}
											else if (skok1 > 10) {
												cout << "Колличество " << eda1 << " " << skok1 << " переполненно.Уберите лишнее.(Без знака минус)" << endl;

												d2 = "п";
											}
										}
										else if (mnogo == 10 && skok1 == 0) {
											skok1 = mnogo;
											cout << "Колличество " << eda1 << " " << skok1 << "заполнено. Автоматический выход." << endl;
											d2 = "г";
										}
										else if (mnogo > 10) {
											cout << "Слишком большое число, положите меньше." << endl;
											d2 = "п";
										}
										else {
											cout << "Ошибка, столько не положить" << endl;
											d2 = "п";
										}
									}
									else {
										cout << "Ошибка" << endl;
										d2 = "п";
									}
								} while (d2 == "п" && skok1 != 10);
								cout << "Стеки с " << eda1 << " заполнены " << skok1 << endl;
								break;
							case 2:
								do {
									cout << "Сколько вы ложите?" << endl;
									cin >> mnogo;
									if (skok2 >= 0) {
										if (mnogo < 10 && mnogo > -10) {
											skok2 = skok2 + (mnogo);
											if (skok2 < 10) {
												cout << "Колличество " << eda2 << " " << skok2 << "\n Продолжить заполнение: " << eda2 << "\n Нажмите 'п' для продолжения или 'г', чтоб законьчить заполнения слота" << endl;
												cin >> d2;
											}
											else if (skok2 == 10) {
												cout << "Колличество " << eda2 << " " << skok2 << " заполнено. Автоматический выход." << endl;
												d2 = "г";
											}
											else if (skok2 > 10) {
												cout << "Колличество " << eda2 << " " << skok2 << " переполненно.Уберите лишнее.(Без знака минус)" << endl;

												d2 = "п";
											}
										}
										else if (mnogo == 10 && skok2 == 0) {
											skok2 = mnogo;
											cout << "Колличество " << eda2 << " " << skok2 << "заполнено. Автоматический выход." << endl;
											d2 = "г";
										}
										else if (mnogo > 10) {
											cout << "Слишком большое число, положите меньше." << endl;
											d2 = "п";
										}
										else {
											cout << "Ошибка, столько не положить" << endl;
											d2 = "п";
										}
									}
									else {
										cout << "Ошибка" << endl;
										d2 = "п";
									}
								} while (d2 == "п" && skok2 != 10);
								cout << "Стеки с " << eda2 << " заполнены " << skok2 << endl;
								break;
							case 3:
								do {
									cout << "Сколько вы ложите?" << endl;
									cin >> mnogo;
									if (skok3 >= 0) {
										if (mnogo < 10 && mnogo > -10) {
											skok3 = skok3 + (mnogo);
											if (skok3 < 10) {
												cout << "Колличество " << eda3 << " " << skok3 << "\n Продолжить заполнение: " << eda3 << "\n Нажмите 'п' для продолжения или 'г', чтоб законьчить заполнения слота" << endl;
												cin >> d2;
											}
											else if (skok3 == 10) {
												cout << "Колличество " << eda3 << " " << skok3 << " заполнено. Автоматический выход." << endl;
												d2 = "г";
											}
											else if (skok3 > 10) {
												cout << "Колличество " << eda3 << " " << skok3 << " переполненно.Уберите лишнее.(Без знака минус)" << endl;

												d2 = "п";
											}
										}
										else if (mnogo == 10 && skok3 == 0) {
											skok3 = mnogo;
											cout << "Колличество " << eda3 << " " << skok3 << "заполнено. Автоматический выход." << endl;
											d2 = "г";
										}
										else if (mnogo > 10) {
											cout << "Слишком большое число, положите меньше." << endl;
											d2 = "п";
										}
										else {
											cout << "Ошибка, столько не положить" << endl;
											d2 = "п";
										}
									}
									else {
										cout << "Ошибка3" << endl;
										d2 = "п";
									}
								} while (d3 == "п" && skok3 != 10);
								cout << "Стеки с " << eda3 << " заполнены " << skok3 << endl;
								break;
							case 4:
								do {
									cout << "Сколько вы ложите?" << endl;
									cin >> mnogo;
									if (skok4 >= 0) {
										if (mnogo < 10 && mnogo > -10) {
											skok4 = skok4 + (mnogo);
											if (skok4 < 10) {
												cout << "Колличество " << eda4 << " " << skok4 << "\n Продолжить заполнение: " << eda4 << "\n Нажмите 'п' для продолжения или 'г', чтоб законьчить заполнения слота" << endl;
												cin >> d2;
											}
											else if (skok4 == 10) {
												cout << "Колличество " << eda4 << " " << skok4 << " заполнено. Автоматический выход." << endl;
												d2 = "г";
											}
											else if (skok4 > 10) {
												cout << "Колличество " << eda4 << " " << skok4 << " переполненно.Уберите лишнее.(Без знака минус)" << endl;

												d2 = "п";
											}
										}
										else if (mnogo == 10 && skok4 == 0) {
											skok4 = mnogo;
											cout << "Колличество " << eda4 << " " << skok4 << "заполнено. Автоматический выход." << endl;
											d2 = "г";
										}
										else if (mnogo > 10) {
											cout << "Слишком большое число, положите меньше." << endl;
											d2 = "п";
										}
										else {
											cout << "Ошибка, столько не положить" << endl;
											d2 = "п";
										}
									}
									else {
										cout << "Ошибка" << endl;
										d2 = "п";
									}
								} while (d2 == "п" && skok4 != 10);
								cout << "Стеки с " << eda4 << " заполнены " << skok4 << endl;
								break;
							case 5:
								do {
									cout << "Сколько вы ложите?" << endl;
									cin >> mnogo;
									if (skok5 >= 0) {
										if (mnogo < 10 && mnogo > -10) {
											skok5 = skok5 + (mnogo);
											if (skok5 < 10) {
												cout << "Колличество " << eda5 << " " << skok5 << "\n Продолжить заполнение: " << eda5 << "\n Нажмите 'п' для продолжения или 'г', чтоб законьчить заполнения слота" << endl;
												cin >> d2;
											}
											else if (skok5 == 10) {
												cout << "Колличество " << eda5 << " " << skok5 << " заполнено. Автоматический выход." << endl;
												d2 = "г";
											}
											else if (skok5 > 10) {
												cout << "Колличество " << eda5 << " " << skok5 << " переполненно.Уберите лишнее.(Без знака минус)" << endl;

												d2 = "п";
											}
										}
										else if (mnogo == 10 && skok5 == 0) {
											skok5 = mnogo;
											cout << "Колличество " << eda5 << " " << skok5 << "заполнено. Автоматический выход." << endl;
											d2 = "г";
										}
										else if (mnogo > 10) {
											cout << "Слишком большое число, положите меньше." << endl;
											d2 = "п";
										}
										else {
											cout << "Ошибка, столько не положить" << endl;
											d2 = "п";
										}
									}
									else {
										cout << "Ошибка" << endl;
										d2 = "п";
									}
								} while (d2 == "п" && skok5 != 10);
								cout << "Стеки с " << eda5 << " заполнены " << skok5 << endl;
								break;
							default:
								cout << "Проверьте еще раз. Таких кнопок нет." << endl;
								break;
							}
							cout << "Продолжите заполнение автомата?\nда/нет" << endl;
							cin >> d3;
						} while (d3 == "да");
						if (d3 == "нет") {
							cout << "Как угодно." << endl;
						}
						else {
							cout << "??????" << endl;
						}
					}
				}
				else {
					cout << "Не ясно, кто вы все же?" << endl;
					pe = 1;
					pent = 1;
				}
			} while (pent == 0);
		} while (pe != 0);
		cout << "Позвать покупателя?\nконечно/нет" << endl;
		cin >> d4;
	} while (d4 == "конечно");
	if (d4 == "нет") {
		cout << "Всего хорошего. Автомат будет дожидаться покупателей" << endl;
	}
	else {
		cout << "Странное бармотание. Я отключаюсь." << endl;
	}
	delete m;
	delete m1;
	delete m2;
	return 0;
}













