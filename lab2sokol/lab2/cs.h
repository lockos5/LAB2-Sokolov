
#pragma once
#include <string>
#include <iostream>

class cs {
private:
    std::string name;
    int numFac;
    int numWorkFac;
    int eff;

public:
    cs(std::string n, int num, int numw, int e);
    cs();
    std::string GetName() const;
    int GetNumFac() const;
    int GetNumWorkFac() const;
    int GetEff() const;
    void SetName(std::string st);
    void SetEff(int n);
    bool SetNumWorkFac(bool A);
    friend std::ostream& operator<<(std::ostream& os, const cs& c);
};
