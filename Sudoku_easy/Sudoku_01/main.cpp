#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <time.h>
#include <vector>
#include <array>

using namespace std;

vector<int> sudoku1;
vector<vector<int>> sudoku0;

void print_sudoku(){

    int count = 0;
    int count11 = 0;
    int count2 = 0;
    int count22 = 0;

    cout << endl;
    for(int i = 0; i < sudoku0.size(); i++){
        for(int ii = 0; ii< sudoku0.at(i).size(); ii++){
            if(sudoku0.at(i).at(ii) != 0){
                cout << sudoku0.at(i).at(ii);
            }else{
                cout << " ";
            }
            count++;
            if(count == 3){
                count  = 0;
                count11++;
                if(count11 == 3){
                    count11 = 0;
                }else{
                    cout << " || " ;
                }
            }else{
                cout << " | " ;
            }
        }
        cout << endl;
        count2++;
        if(count2 == 3){
            count2 = 0;
            count22++;
            if(count22 == 3){
                count22 = 0;
            }else{
                    cout << "===================================="<< endl;
                }
        }else{
            cout << "------------------------------------"<< endl;
        }
    }
    cout << endl;
};

bool lose_fila(){
    bool a = false;
    for (unsigned long int it = 0; it < sudoku0.size(); it++) {
        vector<int> lose;
        for (unsigned long int it2 = 0; it2 < sudoku0.at(it).size(); it2++) {
            if (sudoku0.at(it).at(it2) != 0){
                lose.push_back(sudoku0.at(it).at(it2));
            }
        }
        for (unsigned long int adolfito = 0; adolfito < lose.size(); adolfito++) {
            for (unsigned long int robertito = 0; robertito < lose.size(); robertito++) {
                if (adolfito != robertito){
                    if (lose.at(adolfito) == lose.at(robertito)){
                        a = true;
                    }
                }
            }
        }
    }
    return a;
};

bool lose_columna(){
    bool a = false;
    for (unsigned long int it = 0; it < sudoku0.size(); it++) {
        vector<int> lose;
        for (unsigned long int it2 = 0; it2 < sudoku0.at(it).size(); it2++) {
            if (sudoku0.at(it2).at(it) != 0){
                lose.push_back(sudoku0.at(it2).at(it));
            }
        }
        for (unsigned long int adolfito = 0; adolfito < lose.size(); adolfito++) {
            for (unsigned long int robertito = 0; robertito < lose.size(); robertito++) {
                if (adolfito != robertito){
                    if (lose.at(adolfito) == lose.at(robertito)){
                        a = true;
                    }
                }
            }
        }

    }
    return a;
};

bool lose_cube(){
    bool a = false;
    for (unsigned long int it = 1; it <= 7; it = it +3) {
        for (unsigned long int it2 = 1; it2 <= 7; it2 = it2 +3) {
            vector<int> lose;
            for (int e = -1; e < 2; e++) {
                for (int ee = -1; ee < 2; ee++) {
                    if (sudoku0.at(it+e).at(it+ee) != 0) lose.push_back(sudoku0.at(it+e).at(it+ee));
                }
            }
            for (unsigned long int adolfito = 0; adolfito < lose.size(); adolfito++) {
                for (unsigned long int robertito = 0; robertito < lose.size(); robertito++) {
                    if (adolfito != robertito){
                        if (lose.at(adolfito) == lose.at(robertito)){
                            a = true;
                        }
                    }
                }
            }
        }

    }
    return a;
};

bool lose(){
    bool fila;
    bool columa;
    bool cube;

    fila = lose_fila();
    columa = lose_columna();
    cube = lose_cube();

    if((fila == true || columa == true) || cube == true){
        return true;
    }else{
        return false;
    }
};

bool win(){
    bool a= false;
    vector<int> ceros;
    for(int i = 0; i < sudoku0.size(); i++){
        for(int ii = 0; ii < sudoku0.at(i).size(); ii++){
            if(sudoku0.at(i).at(ii) == 0){
                ceros.push_back(sudoku0.at(i).at(ii));
            }
        }
    }
    if(ceros.size() == 0){
        if(lose() == false){
            a = true;
        }else{
            a = false;
        }
    }else{
        a = false;
    }
    return a;
};


int main()
{
    srand(time(NULL));
    ifstream sudoku;
    string numbers;
    int number;
    string sudoku_name;

    //if random
    unsigned long int sudoku_number = rand()%(5);

    //if chose
    /*cout << "Dime el numero del sudoku que desea realizar (0-4) " << endl;
    cin >> sudoku_number;*/

    cout << "Se eligio el sudoku: " << sudoku_number + 1 << endl;

    if(sudoku_number == 0) sudoku_name = "Sudoku_I";
    if(sudoku_number == 1) sudoku_name = "Sudoku_II";
    if(sudoku_number == 2) sudoku_name = "Sudoku_III";
    if(sudoku_number == 3) sudoku_name = "Sudoku_IV";
    if(sudoku_number == 4) sudoku_name = "Sudoku_V";

    sudoku.open(sudoku_name);
    if(sudoku.is_open()){
        while(!sudoku.eof()){
            sudoku >> numbers;
            number = atoi(numbers.c_str());
            if(sudoku1.size() < 9){
                sudoku1.push_back(number);
            }else{
                sudoku0.push_back(sudoku1);
                sudoku1.erase(sudoku1.begin(), sudoku1.end());
                sudoku1.push_back(number);
            }
        }
    }else{
        cout << "Error " << endl;
    }

    sudoku.close();

    print_sudoku();

    for(;;){
        int numberr;
        int num1;
        int num2;
        int now;
        cout << "Dime la posicion teniendo en cuenta: " << endl <<
                "00 01 02 03 04 05 06 07 08" << endl <<
                "10 11 12 13 14 15 16 17 18" << endl <<
                "20 21 22 23 24 25 26 27 28" << endl <<
                "30 31 32 33 34 35 36 37 38" << endl <<
                "40 41 42 43 44 45 46 47 48" << endl <<
                "50 51 52 53 54 55 56 57 58" << endl <<
                "60 61 62 63 64 65 66 67 68" << endl <<
                "70 71 72 73 74 75 76 77 78" << endl <<
                "80 81 82 83 84 85 86 87 88" << endl;
        cin >> numberr;
        num1 = numberr/10%10;
        num2 = numberr - num1*10;

        if(sudoku0.at(num1).at(num2) == 0){
            cout << "Dime el numero que quieras meter: " << endl;
            cin >> now;
            sudoku0.at(num1).at(num2) = now;
        }else{
            cout << "No puedes modificar ese numero" << endl;
        }

        print_sudoku();

        if(win() == true){
            cout << "Ganaste!!" << endl;
            break;
        }
        if(lose() == true){
            cout << "Perdiste =(" << endl;
            break;
        }
    }

    return 0;
}
