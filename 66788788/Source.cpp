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
	eda3 = "Milkxbc��     xbcvbcyWay";
	eda4 = "Marsxbcbxcv";
	eda5 = "Nutscxbc         bcvbbbbbbbbbb";
	bool t = false;
	slot* m2 = new slot;
	Apparat* m = new Apparat;
	snack* m1 = new snack;
	string d0, d1 = "�", d2, d3, d4, d5 = "��", vib;
	char rit;
	bool tok = true;
	int pe, pen, pent, skok1 = 0, skok2 = 0, skok3 = 0, skok4 = 0, skok5 = 0, mnogo, op, mas1 = 0, mas2 = 0, mas3 = 0, mas4 = 0, mas5 = 0;
	cout << "������� � ������������ ����������� ���!\n���� �������?\n������������/����" << endl;
	do {
		cin >> d0;
		if (d0 == "������������") {
			cout << "������ �� ���������" << endl;
			pe = 0;
		}
		else if (d0 == "����") {
			cout << "���������� " << endl;
			pe = 0;
			return 0;
		}
		else {
			cout << "�� ����, ������" << endl;
			pe = 1;
		}
	} while (pe != 0);
	do {
		do {
			do {
				cout << "��� �� ������ ������������ �������\n���...?\n����������/�������" << endl;
				cin >> d0;
				if (d0 == "����������") {
					do {
						pe = 0;
						cout << "���� �����������." << endl;
						m1->setDan11(eda1, 14, 54, skok1);
						m1->setDan12(eda2, 34, 109, skok2);
						m1->setDan13(eda3, 17, 513, skok3);
						m1->setDan14(eda4, 10000, 45, skok4);
						m1->setDan15(eda5, 56, 9, skok5);
						cout << "������� ������� ����������:\n1.������� �� ����� ���������.\n2.������� �����������, ������� �� ������ ������.\n3.���� � ��� �������� ������� ������� �� '�'.\n����." << endl;
						cin >> vib;
						if (vib == "1") {
							cout << "�� ������� " << eda1 << endl;
							cin >> mnogo;
							if (skok1 >= mnogo && mnogo > 0) {
								skok1 -= mnogo;
								mas1 += mnogo;
								cout << "���������: " << eda1 << " � ����������� " << mas1 << endl << "\n�� ������ ����������?\n\n��/���";
							}
							else if (skok1 == 0) {
								cout << "�����, ���������� �� �������.\n�� ������ ����������?\n\n��/���" << endl;
							}
							else {
								cout << "������\n�� ������ ����������?\n\n��/���" << endl;
							}
						}
						else if (vib == "2") {
							cout << "�� ������� " << eda2 << endl;
							cin >> mnogo;
							if (skok2 >= mnogo && mnogo > 0) {
								skok2 -= mnogo;
								mas2 += mnogo;
								cout << "���������: " << eda2 << " � ����������� " << mas2 << endl << "\n�� ������ ����������?\n\n��/���";
							}
							else if (skok2 == 0) {
								cout << "�����, ���������� �� �������.\n�� ������ ����������?\n\n��/���" << endl;
							}
							else {
								cout << "������\n�� ������ ����������?\n\n��/���" << endl; ;
							}
						}
						else if (vib == "3") {
							cout << "�� ������� " << eda3 << endl;
							cin >> mnogo;
							if (skok3 >= mnogo && mnogo > 0) {
								skok3 -= mnogo;
								mas3 += mnogo;
								cout << "���������: " << eda3 << " � ����������� " << mas3 << endl << "\n�� ������ ����������?\n\n��/���";
							}
							else if (skok3 == 0) {
								cout << "�����, ���������� �� �������.\n�� ������ ����������?\n\n��/���" << endl;
							}
							else {
								cout << "������\n�� ������ ����������?\n\n��/���" << endl;
							}
						}
						else if (vib == "4") {
							cout << "�� ������� " << eda4 << endl;
							cin >> mnogo;
							if (skok4 >= mnogo && mnogo > 0) {
								skok4 -= mnogo;
								mas4 += mnogo;
								cout << "���������: " << eda4 << " � ����������� " << mas4 << "\n�� ������ ����������?\n\n��/���" << endl;
							}
							else if (skok4 == 0) {
								cout << "�����, ���������� �� �������.\n�� ������ ����������?\n\n��/���" << endl;
							}
							else {
								cout << "������\n�� ������ ����������?\n\n��/���" << endl;
							}
						}
						else if (vib == "5") {
							cout << "�� ������� " << eda5 << endl;
							cin >> mnogo;
							if (skok5 >= mnogo && mnogo > 0) {
								skok5 -= mnogo;
								mas5 += mnogo;
								cout << "���������: " << eda5 << " � ����������� " << mas5 << "\n�� ������ ����������?\n\n��/���" << endl;
								;
							}
							else if (skok5 == 0) {
								cout << "�����, ���������� �� �������.\n�� ������ ����������?\n\n��/���" << endl;
							}
							else {
								cout << "������\n�� ������ ����������?\n\n��/���" << endl;
							}
						}
						else if (vib == "�") {
							d5 = "����";
							d1 = "�";
						}
						else if (vib == "����") {

							cout << "�� ��������." << endl;
							return 0;
						}
						else {
							cout << "������\n�� ������ ����������?\n\n��/���" << endl;

						}
						if (d1 != "�") {
							cin >> d1;
						}
						else {
							d1 = "���";
						}
					} while (d1 == "��");
					if (tok == (d1 == "���" && d5 != "����")) {
						cout << "�� �������." << endl;
						return 0;
					}
					else if (d5 == "����") {
						cout << "���� ��� �������� ����� �����������, ������� '�' � ��������� ���� ������������� �������� �������� ��������.\n��� ������, ����� '�'.  " << endl;

					}
					else {
						cout << "�� �� ���������, ��� �� ������ ������� ������ ����������....." << endl;
						return 0;
					}
					do {
						cin >> rit;
						switch (rit) {
						case '�':
							pent = 0;
							pen = 0;
							cout << "���������� ������ ������������ ��������, ������� �������� �������.\n�� �������?" << endl;
							break;
						case '�':

							pent = 1;
							pen = 0;
							pe = 0;
							cout << "����������." << endl;
							return 0;
							break;
						default:
							cout << "��������� �� ����, ����� �����������!" << endl;
							pen = 1;
							break;
						}
					} while (pen != 0);
				}
				else if (d0 == "�������") {
					pe = 0;
					pent = 1;
					cout << "���� ������ �� ������������ " << endl;
					m->dan3("������", "PT-45.7", 220);
					m2->dan21(eda1, 10, skok1);
					m2->dan22(eda2, 10, skok2);
					m2->dan23(eda3, 10, skok3);
					m2->dan24(eda4, 10, skok4);
					m2->dan25(eda5, 10, skok5);
					cout << "��� �� ���������� �������?\n���������/����" << endl;
					cin >> d1;
					if (d1 == "���������") {
						do {
							cout << "������ ������, ��������, �������.\n" << "1." << eda1 << " " << skok1 << "\n" << "2." << eda2 << " " << skok2 << "\n" << "3." << eda3 << " " << skok3 << "\n" << "4." << eda4 << " " << skok4 << "\n" << "5." << eda5 << " " << skok5 << "\n\n\n������� ����� ����� � ���������� ����������� �� ������ � ���� ����." << endl;
							cin >> op;
							switch (op)
							{
							case 1:
								do {
									cout << "������� �� ������?" << endl;
									cin >> mnogo;
									if (skok1 >= 0) {
										if (mnogo < 10 && mnogo > -10) {
											skok1 = skok1 + (mnogo);
											if (skok1 < 10) {
												cout << "����������� " << eda1 << " " << skok1 << "\n ���������� ����������: " << eda1 << "\n ������� '�' ��� ����������� ��� '�', ���� ���������� ���������� �����" << endl;
												cin >> d2;
											}
											else if (skok1 == 10) {
												cout << "����������� " << eda1 << " " << skok1 << " ���������. �������������� �����." << endl;
												d2 = "�";
											}
											else if (skok1 > 10) {
												cout << "����������� " << eda1 << " " << skok1 << " ������������.������� ������.(��� ����� �����)" << endl;

												d2 = "�";
											}
										}
										else if (mnogo == 10 && skok1 == 0) {
											skok1 = mnogo;
											cout << "����������� " << eda1 << " " << skok1 << "���������. �������������� �����." << endl;
											d2 = "�";
										}
										else if (mnogo > 10) {
											cout << "������� ������� �����, �������� ������." << endl;
											d2 = "�";
										}
										else {
											cout << "������, ������� �� ��������" << endl;
											d2 = "�";
										}
									}
									else {
										cout << "������" << endl;
										d2 = "�";
									}
								} while (d2 == "�" && skok1 != 10);
								cout << "����� � " << eda1 << " ��������� " << skok1 << endl;
								break;
							case 2:
								do {
									cout << "������� �� ������?" << endl;
									cin >> mnogo;
									if (skok2 >= 0) {
										if (mnogo < 10 && mnogo > -10) {
											skok2 = skok2 + (mnogo);
											if (skok2 < 10) {
												cout << "����������� " << eda2 << " " << skok2 << "\n ���������� ����������: " << eda2 << "\n ������� '�' ��� ����������� ��� '�', ���� ���������� ���������� �����" << endl;
												cin >> d2;
											}
											else if (skok2 == 10) {
												cout << "����������� " << eda2 << " " << skok2 << " ���������. �������������� �����." << endl;
												d2 = "�";
											}
											else if (skok2 > 10) {
												cout << "����������� " << eda2 << " " << skok2 << " ������������.������� ������.(��� ����� �����)" << endl;

												d2 = "�";
											}
										}
										else if (mnogo == 10 && skok2 == 0) {
											skok2 = mnogo;
											cout << "����������� " << eda2 << " " << skok2 << "���������. �������������� �����." << endl;
											d2 = "�";
										}
										else if (mnogo > 10) {
											cout << "������� ������� �����, �������� ������." << endl;
											d2 = "�";
										}
										else {
											cout << "������, ������� �� ��������" << endl;
											d2 = "�";
										}
									}
									else {
										cout << "������" << endl;
										d2 = "�";
									}
								} while (d2 == "�" && skok2 != 10);
								cout << "����� � " << eda2 << " ��������� " << skok2 << endl;
								break;
							case 3:
								do {
									cout << "������� �� ������?" << endl;
									cin >> mnogo;
									if (skok3 >= 0) {
										if (mnogo < 10 && mnogo > -10) {
											skok3 = skok3 + (mnogo);
											if (skok3 < 10) {
												cout << "����������� " << eda3 << " " << skok3 << "\n ���������� ����������: " << eda3 << "\n ������� '�' ��� ����������� ��� '�', ���� ���������� ���������� �����" << endl;
												cin >> d2;
											}
											else if (skok3 == 10) {
												cout << "����������� " << eda3 << " " << skok3 << " ���������. �������������� �����." << endl;
												d2 = "�";
											}
											else if (skok3 > 10) {
												cout << "����������� " << eda3 << " " << skok3 << " ������������.������� ������.(��� ����� �����)" << endl;

												d2 = "�";
											}
										}
										else if (mnogo == 10 && skok3 == 0) {
											skok3 = mnogo;
											cout << "����������� " << eda3 << " " << skok3 << "���������. �������������� �����." << endl;
											d2 = "�";
										}
										else if (mnogo > 10) {
											cout << "������� ������� �����, �������� ������." << endl;
											d2 = "�";
										}
										else {
											cout << "������, ������� �� ��������" << endl;
											d2 = "�";
										}
									}
									else {
										cout << "������3" << endl;
										d2 = "�";
									}
								} while (d3 == "�" && skok3 != 10);
								cout << "����� � " << eda3 << " ��������� " << skok3 << endl;
								break;
							case 4:
								do {
									cout << "������� �� ������?" << endl;
									cin >> mnogo;
									if (skok4 >= 0) {
										if (mnogo < 10 && mnogo > -10) {
											skok4 = skok4 + (mnogo);
											if (skok4 < 10) {
												cout << "����������� " << eda4 << " " << skok4 << "\n ���������� ����������: " << eda4 << "\n ������� '�' ��� ����������� ��� '�', ���� ���������� ���������� �����" << endl;
												cin >> d2;
											}
											else if (skok4 == 10) {
												cout << "����������� " << eda4 << " " << skok4 << " ���������. �������������� �����." << endl;
												d2 = "�";
											}
											else if (skok4 > 10) {
												cout << "����������� " << eda4 << " " << skok4 << " ������������.������� ������.(��� ����� �����)" << endl;

												d2 = "�";
											}
										}
										else if (mnogo == 10 && skok4 == 0) {
											skok4 = mnogo;
											cout << "����������� " << eda4 << " " << skok4 << "���������. �������������� �����." << endl;
											d2 = "�";
										}
										else if (mnogo > 10) {
											cout << "������� ������� �����, �������� ������." << endl;
											d2 = "�";
										}
										else {
											cout << "������, ������� �� ��������" << endl;
											d2 = "�";
										}
									}
									else {
										cout << "������" << endl;
										d2 = "�";
									}
								} while (d2 == "�" && skok4 != 10);
								cout << "����� � " << eda4 << " ��������� " << skok4 << endl;
								break;
							case 5:
								do {
									cout << "������� �� ������?" << endl;
									cin >> mnogo;
									if (skok5 >= 0) {
										if (mnogo < 10 && mnogo > -10) {
											skok5 = skok5 + (mnogo);
											if (skok5 < 10) {
												cout << "����������� " << eda5 << " " << skok5 << "\n ���������� ����������: " << eda5 << "\n ������� '�' ��� ����������� ��� '�', ���� ���������� ���������� �����" << endl;
												cin >> d2;
											}
											else if (skok5 == 10) {
												cout << "����������� " << eda5 << " " << skok5 << " ���������. �������������� �����." << endl;
												d2 = "�";
											}
											else if (skok5 > 10) {
												cout << "����������� " << eda5 << " " << skok5 << " ������������.������� ������.(��� ����� �����)" << endl;

												d2 = "�";
											}
										}
										else if (mnogo == 10 && skok5 == 0) {
											skok5 = mnogo;
											cout << "����������� " << eda5 << " " << skok5 << "���������. �������������� �����." << endl;
											d2 = "�";
										}
										else if (mnogo > 10) {
											cout << "������� ������� �����, �������� ������." << endl;
											d2 = "�";
										}
										else {
											cout << "������, ������� �� ��������" << endl;
											d2 = "�";
										}
									}
									else {
										cout << "������" << endl;
										d2 = "�";
									}
								} while (d2 == "�" && skok5 != 10);
								cout << "����� � " << eda5 << " ��������� " << skok5 << endl;
								break;
							default:
								cout << "��������� ��� ���. ����� ������ ���." << endl;
								break;
							}
							cout << "���������� ���������� ��������?\n��/���" << endl;
							cin >> d3;
						} while (d3 == "��");
						if (d3 == "���") {
							cout << "��� ������." << endl;
						}
						else {
							cout << "??????" << endl;
						}
					}
				}
				else {
					cout << "�� ����, ��� �� ��� ��?" << endl;
					pe = 1;
					pent = 1;
				}
			} while (pent == 0);
		} while (pe != 0);
		cout << "������� ����������?\n�������/���" << endl;
		cin >> d4;
	} while (d4 == "�������");
	if (d4 == "���") {
		cout << "����� ��������. ������� ����� ���������� �����������" << endl;
	}
	else {
		cout << "�������� ����������. � ����������." << endl;
	}
	delete m;
	delete m1;
	delete m2;
	return 0;
}













