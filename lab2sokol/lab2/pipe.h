
#pragma once
#include <string>
#include <iostream>

class pipe {
private:
    std::string name;
    int length;
    int diameter;
    bool inRepair;

public:
    pipe(std::string n, int l, int d, bool rep);
    pipe();
    std::string GetName() const;
    int GetLength() const;
    int GetDiameter() const;
    bool GetInRepair() const;
    void SetInRepair(bool s);
    void SetName(std::string st);

    friend std::ostream& operator<<(std::ostream& os, const pipe& p);
};
