//
// Created by mcidevil on 09/02/2022.
//

#include <iostream>
#include "bruter.h"


bruter::bruter(int length, bool azOnOff, bool AZonOff, bool secial) {
    this->lenght = length;
    this->azOnOff = azOnOff;
    this->AZonOff = AZonOff;
    this->secial = secial;
    initSymbs();

    for (int i = 0; i < this->symbs.size() + 1; i++) {
        std::cout << this->symbs[i] << '\n';
    }

}


bruter::bruter(int length, bool ALLonBeCarefullYouCanBurnYourCPU) {

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

    for (int i = 0; i < this->symbs.size() + 1; i++) {
        std::cout << this->symbs[i] << '\n';
    }
}

void bruter::initSymbs() {
    char cur;

    if (this->azOnOff && this->AZonOff, this->secial) {
        for (int i = 0; i < 128; i++) {
            cur = i;
            if (isprint(cur)) {
                this->symbs.push_back(cur);

            }

        }
    }

    if (this->azOnOff && this->AZonOff) {
        for (int i = 97; i < 122; i++) {
            cur = i;
            if (isprint(cur)) {
                this->symbs.push_back(cur);
            }

        }

        for (int i = 65; i < 90; i++) {
            cur = i;
            if (isprint(cur)) {
                this->symbs.push_back(cur);
            }

        }


    } else {
        for (int i = 97; i < 122; i++) {
            cur = i;
            if (isprint(cur)) {
                this->symbs.push_back(cur);

            }

        }
    }

    int charFromSymbsIniter = 0;

    for (int i = 0; i < this->symbs.size() + 1; ++i) {
        this->charFromSymbs.push_back(charFromSymbsIniter);
    }

}
























