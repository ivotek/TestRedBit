
#include "Color.h"
#include <iostream>

using namespace std;

Color::Color() {
    cout << "Info logg ----- enter in costructor ------" << endl;
}

Color::Color(int idColor, string nameColor){
    this->idColor = idColor;
    this->nameColor = nameColor;
}

Color::Color(const Color& orig) {
}

Color::~Color() {
    cout << "Info logg ------ exit to the costructor -----" << endl;
}
