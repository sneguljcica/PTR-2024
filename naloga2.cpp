#include<bits/stdc++.h>

int main () {
    int stevec=0;
    for (int i=0; 1; i+=5){
        if (i*9<10000) {
            stevec++;
        }else{
            break;
        }
    }
    printf ("%d\n", stevec);
    return 0;
}