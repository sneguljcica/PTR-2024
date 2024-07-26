#include<bits/stdc++.h>

int main () {
    char pasnik [500];
    int n, st, bilke=0, sita=0, idx=0, dolzina;
    bool regratmarjetica=false;
    scanf ("%d %d", &n, &st);
    scanf ("%s", pasnik);
    dolzina = strlen (pasnik);
    for (int i=0; i<dolzina; i++) {
        if (pasnik [i] == '|'){
            idx++;
            if (bilke <3) {
                sita++;
                bilke++;
                regratmarjetica = false;
            }
        }
        if (pasnik [i] == '/'){
            idx++;
            bilke=0;
            regratmarjetica = false;
        }
        if (pasnik [i] == 'R'){
            idx++;
            regratmarjetica = 1;
            sita++;
            bilke=0;
        }
        if (pasnik [i] == 'M'){
            idx++;
            if (regratmarjetica == 0) {
                sita++;
            }
            bilke=0;
        }
        if (sita >= n){
            break;
        }
    }
    printf ("%d\n", idx);
    return 0;
}