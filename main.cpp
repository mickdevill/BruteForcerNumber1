#include <iostream>
#include <syscall.h>
#include <string>
#include <vector>
#include <strings.h>


bool chekPSW(char *psw, char *bruter);

int main() {

    char psw[5] = "a57g";

    std::vector<char> n = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'k', 'l', 'm','0','1','2','3','4','4','5','6','7',
                           '8','9'};
    char k[5];
    int k0 = 0;
    int k1 = 0;
    int k2 = 0;
    int k3 = 0;

    k[0] = n[k0];
    k[1] = n[k1];
    k[2] = n[k2];
    k[3] = n[k3];
    k[4] = '\0';

    int nSize = n.size() - 1;
    int totalIter = 0;
int takt = 1;
int takt2 = 1;
int takt3 = 1;


    start:

    if (k3 <= nSize) {
        if (chekPSW(psw, k)) {
            goto end;
        }
        k[3] = n[k3];
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
        k[2] = n[k2];
        totalIter++;
        goto start;
    } else {
            k1++;
        k2 = 0;
        k[2] = n[k2];
    }

    if (k1 <= nSize) {
        if (chekPSW(psw, k)) {
            goto end;
        }
        k[1] = n[k1];
        totalIter++;
        goto start;
    } else {
            k0++;
        k1 = 0;
        k[1] = n[k1];
    }

    if (k0 <= nSize) {
        k[0] = n[k0];
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

/*
    if (k3 <= nSize) {
        k3++;
        k[3] = n[k3];
        goto start;
    } else {
        k2++;
        k3 = 0;
    }


    if (k2 <= nSize) {
        k[2] = n[k2];
        goto start;
    } else {
        k1++;
        k2 = 0;
    }

    if (k1 <= nSize) {
        k[1] = n[k1];
        goto start;
    } else {
        k0++;
        k1 = 0;


    }


    if (k0 <= nSize) {

        k[0] = n[k0];

        goto start;

    } else {
        std::cout << totalIter;
    }
*/
