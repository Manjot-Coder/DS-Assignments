#include <iostream>
using namespace std;

int main() {
   
    int nA = 4;
    int nB = 4;

    
    int A_row[] = {0, 0, 1, 2};
    int A_col[] = {0, 2, 1, 0};
    int A_val[] = {1, 2, 3, 4};

 
    int B_row[] = {0, 0, 1, 2};
    int B_col[] = {0, 1, 1, 2};
    int B_val[] = {5, 6, 7, 8};


    int R_row[100];
    int R_col[100];
    int R_val[100];
    int nR = 0; 

    
    for (int i = 0; i < nA; i++) {
        for (int j = 0; j < nB; j++) {
            if (A_col[i] == B_row[j]) {
             
                int r = A_row[i];
                int c = B_col[j];
                int val = A_val[i] * B_val[j];

               
                bool found = false;
                for (int k = 0; k < nR; k++) {
                    if (R_row[k] == r && R_col[k] == c) {
                        R_val[k] += val; 
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    R_row[nR] = r;
                    R_col[nR] = c;
                    R_val[nR] = val;
                    nR++;
                }
            }
        }
    }

    
    cout << "Result of multiplication (row, col, val):\n";
    for (int i = 0; i < nR; i++) {
        if (R_val[i] != 0)
            cout << "(" << R_row[i] << ", " << R_col[i] << ", " << R_val[i] << ")\n";
    }

    return 0;
}
