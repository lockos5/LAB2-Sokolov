#include "cs.h"

cs::cs(std::string n, int num, int numw, int e)
{
	name = n;
	numFac = num;
	numWorkFac = numw;
	eff = e;
}

cs::cs()
{
	name = "Test";
	numFac = 10;
	numWorkFac = 2;
	eff = false;
}

std::string cs::GetName() const
{
	return this->name;
}

int cs::GetNumFac() const
{
	return this->numFac;
}

int cs::GetNumWorkFac() const
{
	return this->numWorkFac;
}

int cs::GetEff() const
{
	return this->eff;
}

void cs::SetName(std::string st)
{
	name = st;
}

void cs::SetEff(int n)
{
	eff = n;
}

bool cs::SetNumWorkFac(bool A) {
    if (A) {
        if ((numWorkFac + 1) > numFac) {
            return false; // Превышает максимальное количество
        } else {
            numWorkFac++; // Увеличиваем количество
            return true;
        }
    } else {
        if ((numWorkFac - 1) < 0) {
            return false; // Минимальное количество не может быть меньше 0
        } else {
            numWorkFac--; // Уменьшаем количество
            return true;
        }
    }
}


std::ostream& operator<<(std::ostream& os, const cs& c)
{
	os << "Your cs's name: " << c.GetName() << "\n";
	os << "Your cs's number of factories: " << c.GetNumFac() << "\n";
	os << "Your cs's number of working factories: " << c.GetNumWorkFac() << "\n";
	os << "Your cs's efficiency: " << c.GetEff() << "\n";
	return os;
}
