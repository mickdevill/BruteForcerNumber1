#include <iostream>
#include <syscall.h>
#include <string>
#include <vector>
#include <strings.h>
#include "main.h"
#include "Bruter.h"

int main() {

    char psw[5] = "fuck";



    std::vector<char> symbs;
    initSymbs(&symbs);

Bruter bruter(10, true);




    char k[5];
    int k0 = 0;
    int k1 = 0;
    int k2 = 0;
    int k3 = 0;

    k[0] = symbs[k0];

    k[1] = symbs[k1];
    k[2] = symbs[k2];
    k[3] = symbs[k3];
    k[4] = '\0';

    int nSize = symbs.size() - 1;
    int totalIter = 0;


goto end;

    start:

    if (k3 <= nSize) {
         if (chekPSW(psw, k)) {
             goto end;
         }
        k[3] = symbs[k3];
        k3++;
        totalIter++;
        goto start;
    } else {
        k2++;
        k3 = 0;
    }

    if (k2 <= nSize) {
         if (chekPSW(psw, k)) {
             goto end;
         }
        k[2] = symbs[k2];
        totalIter++;
        goto start;
    } else {
        k1++;
        k2 = 0;
        k[2] = symbs[k2];
    }

    if (k1 <= nSize) {
         if (chekPSW(psw, k)) {
             goto end;
         }
        k[1] = symbs[k1];
        totalIter++;
        goto start;
    } else {
        k0++;
        k1 = 0;
        k[1] = symbs[k1];
    }

    if (k0 <= nSize) {
        k[0] = symbs[k0];
        totalIter++;
         if (chekPSW(psw, k)) {
             goto end;
         }
        goto start;
    }


    end:
    std::cout << totalIter;
    printf("\n%s", k);
    printf("\n%s", psw);

    return 0;
}


bool chekPSW(char *psw, char *bruter) {

    return psw[0] == bruter[0] && psw[1] == bruter[1] && psw[2] == bruter[2] && psw[3] == bruter[3];
}

void initSymbs(std::vector<char> *symbs) {

    char cur;
    for (int i = 0; i < 128; i++) {
        cur = i;
        if (isprint(cur)) {
            symbs->push_back(cur);
        }


    }

}
