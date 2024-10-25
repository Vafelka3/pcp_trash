#include <iostream>
#include <array>
using namespace std;

int main(){
////Первый пример двухмерного обычного массива
//    const int row = 5;
//    const int col = 10;
//
//    char arr[row][col]; //двухмерный массив
//
//    for (int i = 0; i < row; ++i) {
//        for (int j = 0; j < col; ++j) {
//            arr[i][j]='-';
//        }
//    }
//
//    arr[1][3]='x'; //меняем символ на 2 ряде в 4 столбце
//
//    for (int i = 0; i < row; ++i) {
//        for (int j = 0; j < col; ++j) {
//            cout<<arr[i][j];
//        }
//        cout<<endl;
//    }
//    //Выведет поле состоящее из символа "-"

    cout<<endl;

//Второй пример 2-х мерного массива

    array<array<char, 10>, 5> pole{};  // {} - иницилизуем пустой 2-х мерный char массив

    for (auto &row: pole) { // auto -> array<char, 5>
        for (auto &column: row) { // auto -> char
            column = '-';
        }
    }

    pole.at(1).at(3) = 'x'; //меняем символ на 2 ряде в 4 столбце

    for (int x = 0; x < pole.size(); x++) {
        for (int y = 0; y < pole.at(x).size(); y++) {
            cout << pole.at(x).at(y);
        }
        cout << endl;
    }

}
