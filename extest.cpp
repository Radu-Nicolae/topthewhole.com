#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

//Consideram o matrice patratica cu n linii si n coloane (n < 10), cu elemente valori strict
//pozitive. Functia L determina numarul de ordine al liniei ce contine cele mai multe elemente 
//care sunt valori autopomorfice. Numim numar automorfic o valoare care este egala cu unul dintre 
//sufixele patratului lui. Exemplu de valoare automorfica este 25 deoarece 25*25 = 625

//Matricea si numarul de linii sunt transmise functiei prin intermediul a doi parametri.

//In cadrul functiei L se va face apel la functia a care verifica daca o valoare naturala 
//transmisa ca parametru este autopomorfica. Ea returneaza in Pascal valoarea True sau False,
//respectiv o valoarea nula sau 0 in c++, dupa cum valoarea parametrului este sau nu un numar
//autopomorfic

bool isAutomorfic(int number){
    bool isAutomorfic = false; 
    int square = number * number;
    int copySquare = square;
    int copyNumber;
    int digitSquare;
    int digitNumber;

    while (copySquare > 0){
        digitSquare = square % 10;
        while (copyNumber > 0){
            digitNumber = number % 10;
            if (digitNumber == copyNumber){
                return true;
                break;
            }
            copyNumber /= 10;
        }
        copySquare /= 10;
    }

    return false;
}



int main()
{
    int height = 0;
    cout << "How many columns will the matrix have: "
    cin >> height;

    int width = 0;
    cout << "How many rows will the matrix have: ";
    cin >> width;

    int matrix[width][height];
    for (int i = 0; i < width; i++){
        for (int j = 0; j < height; j++){
            matrix[i][j] = 0;
        }
    }

    int lineIndex = 0;
    int maxElements = 0;
    int maxLineIndex = -1;
    bool isNumberAutomorfic;

    for (int i; i< width; i++){
        for (int j = 0; j < height; j++){
            number = matrix[i][j];
            isNumberAutomorfic = isAutomorfic(number);

            if (isNumberAutomorfic){
                
            }
        }
    }


}
