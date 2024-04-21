#pragma once
class snack {
public:
	const char* getDan11() const;
	void setDan11(const char* ii, int sto, int color, int colich);

	const char* getDan12() const;
	void setDan12(const char* ii, int sto, int color, int colich);

	const char* getDan13() const;
	void setDan13(const char* ii, int sto, int color, int colich);

	const char* getDan14() const;
	void setDan14(const char* ii, int sto, int color, int colich);

	const char* getDan15() const;
	void setDan15(const char* ii, int sto, int color, int colich);

private:
	const char* ii;
	int sto, color;
};
class slot {
public:
	void dan21(const char* ii, int colmest, int colich);
	void dan22(const char* ii, int colmest, int colich);
	void dan23(const char* ii, int colmest, int colich);
	void dan24(const char* ii, int colmest, int colich);
	void dan25(const char* ii, int colmest, int colich);
private:
	const char* ii;
	int colmest, colich;
};
class Apparat {
public:
	void dan3(const char* io, const char* model, int energ);
};