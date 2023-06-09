#include <iostream>
using namespace std;

double calcGWA (int nsubj) {
    double totalUnits = 0.0;
    double totalGrade = 0.0;

    for (int i = 1; i <= nsubj; i++) {
        double grade;
        int units;

        cout << "\n\tGrade for Subject " << i << ": ";
        cin >> grade;

        cout << "\tUnits for Subject " << i << ": ";
        cin >> units;

        totalGrade += grade * units;
        totalUnits += units;
    }

    double gwa = totalGrade / totalUnits;
    
    return gwa;
}

bool wantretry () {
    char res;
    bool valres = false;

    while (!valres) {
        cout << "\n\tDo you want to calculate another GWA? [Y/N]: ";
        cin >> res;

        if (res == 'Y' || res == 'y') {
            valres = true;
            return true;
        }

        else if (res == 'N' || res == 'n') {
            valres = true;
            return false;
        }

        else {
            cout << "\n\tInvalid input. Please enter 'Y' or 'N'." << endl;
        }
    }

    return false;
}

int main () {
    bool retry = true;

    while (retry) {
        int nsubj;

        cout << "========================================================================\n";

        cout << "Enter the number of subjects you've taken: ";
        cin >> nsubj;

        double gwa = calcGWA(nsubj);

        cout << "\n\t\tYour GWA is " << gwa << endl;

        retry = wantretry();
    }

    return 0;
}

/*

 Author: Charles Ignacio

 Accounts:
-- Facebok: /chaaarles.ei
-- Instagram: @_charlesei
-- Github: @chaaarlesei

 */