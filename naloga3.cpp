#include<bits/stdc++.h>
using namespace std;


int main () {
    int razdalja, hitrost, st;
    int dolodsek, omejitev; 
    //? dol = dolzina; ses = sestevek;

    int sesrazdalj=0, dolodsek2=0, vozi=0;;
    double cas=0.0;

    cin >> razdalja >> hitrost >> st;
    cin >> dolodsek >> omejitev;



    if (dolodsek < razdalja) {
        cas += (1.0*dolodsek / (1.0*hitrost));
        sesrazdalj += dolodsek;
    }else{                                              // else if dolodsek == razdalja
        cas += ((1.0*razdalja) / (1.0*hitrost));
        cout <<fixed<<setprecision(2)<< cas << "\n";
        return 0;
    }

    for (int i=0; i<st; i++) {
        dolodsek2 = dolodsek;
        cin >> dolodsek;
        vozi = dolodsek -dolodsek2;

        if (sesrazdalj+vozi < razdalja) {
            cas += ((1.0*vozi) / (1.0*omejitev));
            sesrazdalj += vozi;
            if (sesrazdalj == razdalja) {
                cout <<fixed<<setprecision(2)<< cas << "\n";
                return 0;
            }
        }else{                                              // else if dolodsek == razdalja
            cas += ((1.0*(razdalja-sesrazdalj)) / (1.0*omejitev));
            int cc=cas*(1.0*100);
            cas = (1.0*cc)/100.0;
            cout <<fixed<<setprecision(2)<< cas << "\n";

            return 0;
        }

        cin >> omejitev;
    }

   return 0;
}