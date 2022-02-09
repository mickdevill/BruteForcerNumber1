//
// Created by mcidevil on 09/02/2022.
//

#ifndef BRUTFORCERNUMBER1_BRUTER_H
#define BRUTFORCERNUMBER1_BRUTER_H

#include <cstdlib>
#include <vector>
#include <string>

class bruter {

public:
    bruter(int length, bool azOnOff = true, bool AZonOff = false, bool secial = false);

public:
    bruter(int length, bool ALLonBeCarefullYouCanBurnYourCPU = false);

private:void initSymbs();

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
    std::vector<int> charFromSymbs;
private:
    std::vector<char> symbs;

};


#endif //BRUTFORCERNUMBER1_BRUTER_H
