
#ifndef COLOR_H
#define COLOR_H

#include <string>

using namespace std;

class Color {
public:
    Color();
    Color(int,string);
    Color(const Color& orig);
    int GetIdColor() const {
        return idColor;
    }

    // getter and setter
    void SetIdColor(int idColor) {
        this->idColor = idColor;
    }

    string GetNameColor() const {
        return nameColor;
    }

    void SetNameColor(string nameColor) {
        this->nameColor = nameColor;
    }

    virtual ~Color();
private:
    int idColor;
    string nameColor;
};

#endif /* COLOR_H */
        