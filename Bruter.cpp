//
// Created by mcidevil on 09/02/2022.
//

#include <iostream>
#include "Bruter.h"


Bruter::Bruter(int length, bool azOnOff, bool AZonOff, bool secial) {
    this->lenght = length;
    this->azOnOff = azOnOff;
    this->AZonOff = AZonOff;
    this->secial = secial;
    initSymbs();
    initPasword();

    for (int i = 0; i < this->symbs.size(); i++) {
        std::cout << this->symbs[i] << '\n';
    }

}


Bruter::Bruter(int length, bool ALLonBeCarefullYouCanBurnYourCPU) {

    this->lenght = length;

    if (ALLonBeCarefullYouCanBurnYourCPU) {
        this->azOnOff = true;
        this->AZonOff = true;
        this->secial = true;
    } else {
        this->azOnOff = false;
        this->AZonOff = false;
        this->secial = false;
    }
    initSymbs();
    initPasword();

    // for (int i = 0; i < this->symbs.size(); i++) {
    //     std::cout << this->symbs[i] << '\n';
    // }

    bruteItManin();
}

void Bruter::initSymbs() {
    char cur;

    if (this->azOnOff) {
        for (int i = 97; i < 122 + 1; i++) {
            cur = i;
            if (isprint(cur)) {
                this->symbs.push_back(cur);
            }

        }
    }

    if (this->AZonOff) {
        for (int i = 65; i < 90 + 1; i++) {
            cur = i;
            if (isprint(cur)) {
                this->symbs.push_back(cur);
            }

        }
    }

    if (this->secial) {

        for (int i = 0; i < 64 + 1; i++) {
            cur = i;
            if (isprint(cur)) {
                this->symbs.push_back(cur);
            }

        }

        for (int i = 91; i < 96 + 1; i++) {
            cur = i;
            if (isprint(cur)) {
                this->symbs.push_back(cur);
            }

        }
        for (int i = 123; i < 126 + 1; i++) {
            cur = i;
            if (isprint(cur)) {
                this->symbs.push_back(cur);
            }

        }

    }


}

void Bruter::initPasword() {
    int charFromSymbsIniter = 0;

    for (int i = 0; i < this->lenght; i++) {
        this->charFromSymbsInPasword.push_back(charFromSymbsIniter);
    }

    for (int i = 0; i < this->lenght; i++) {
        this->pasword.push_back(this->symbs[0]);
    }

}

int Bruter::bruteItHead() {

    int charFromSymbsPoss = this->charFromSymbsInPasword.size() - 1;
    int curInPassword = this->pasword.size() - 1;

    start:

    if (this->charFromSymbsInPasword[charFromSymbsPoss] <= this->symbs.size() - 1) {

        // if (chekPSW(psw, k)) {
        //     goto end;
        // }

        this->pasword[curInPassword] = symbs[this->charFromSymbsInPasword[charFromSymbsPoss]];
        this->charFromSymbsInPasword[charFromSymbsPoss]++;

        //totalIter++;

        for (int i = 0; i < this->pasword.size(); i++) {
            std::cout << this->pasword[i];
        }
        std::cout << '\n';

        goto start;

    } else {
        this->charFromSymbsInPasword[charFromSymbsPoss - 1]++;
        this->charFromSymbsInPasword[charFromSymbsPoss] = 0;
        bruteItBody(charFromSymbsPoss - 1, curInPassword - 1);
    }

}

void Bruter::bruteItManin() {

    int charFromSymbsPoss = this->charFromSymbsInPasword.size() - 1;
    int curInPassword = this->pasword.size() - 1;

    while (true) {

        bruteItHead();
        continue;
    }


}

int Bruter::bruteItBody(int charFromSymbsPoss, int curInPassword) {


    if (this->charFromSymbsInPasword[charFromSymbsPoss] <= this->symbs.size() - 1) {

        // if (chekPSW(psw, k)) {
        //     goto end;
        // }

        this->pasword[curInPassword] = symbs[this->charFromSymbsInPasword[charFromSymbsPoss]];
        this->charFromSymbsInPasword[charFromSymbsPoss]++;

        //totalIter++;

        for (int i = 0; i < this->pasword.size(); i++) {
            std::cout << this->pasword[i];
        }
        std::cout << '\n';

        return 0;

    } else {
        this->charFromSymbsInPasword[charFromSymbsPoss - 1]++;
        this->charFromSymbsInPasword[charFromSymbsPoss] = 0;
        std::cout << "it Work";
        return bruteItBody(charFromSymbsPoss - 1, curInPassword - 1);

    }


}















