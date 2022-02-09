//
// Created by mcidevil on 09/02/2022.
//

#ifndef BRUTFORCERNUMBER1_BRUTER_H
#define BRUTFORCERNUMBER1_BRUTER_H

#include <cstdlib>
#include <vector>
#include <string>

class Bruter {

public:
    Bruter(int length, bool azOnOff, bool AZonOff, bool secial);

public:
    Bruter(int length, bool ALLonBeCarefullYouCanBurnYourCPU = false);

private:
    void initSymbs();

private:
    int bruteItHead();

private:
    int bruteItBody(int charFromSymbsPoss, int curInPassword);

private: void bruteItManin();

private:
    void initPasword();


private:
    int lenght;
private:
    bool azOnOff;
private:
    bool AZonOff;
private:
    bool secial;

private:
    std::vector<char> pasword;
private:
    std::vector<int> charFromSymbsInPasword;
private:
    std::vector<char> symbs;

};


#endif //BRUTFORCERNUMBER1_BRUTER_H
