//C++ w3schools
//Introduction, Get Started with C++, Syntax, Statements, Syntax Code Challenge, Output (Print Text), Print Numbers, New Lines, Output Code Challenge, Comments
/*Ja, ich weiß, wie man mehrzeilige Kommentare verwendet.*/
//VariablesDeclare, Multiple Variables, Identifiers, Constants, Variables Examples, Variables Code Challenge, User Input, Data Types, Numeric Data Types, Boolean Data Types
//Character Data Types, String Data Types, auto, Data Types Examples,(Tu jestem teraz)
//
//
//
//
//
//


#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;


// int main() {
//     std::cout << "Wer seid ihr?" << std::endl;
//     return 0;
// }


int main() {
    cout << "Hallo, Welt! Wie geht es euch?" << endl;
    cout << "Wer seid ihr?" << endl;
    cout << "\nHallo, Welt! Wie geht es euch? ";
    cout << "Wer seid ihr?\n";
    cout << 3 << endl;
    cout << 5 << endl;
    cout << 3 + 5 << endl;
    cout << 3 * 5 << endl;
    cout << "GrundLegendes" << "\n";
    cout << "Dieser Kurs richtet sich an Anfänger\t";
    cout << "Du kennst die Regeln" << endl;
    int meinNum = 15;
    cout << meinNum << endl;
    double meinDouble;
    meinDouble = 6.98;
    cout << meinDouble << endl;
    char meinChar = 'P';
    meinChar = 'Z';
    cout << meinChar << endl;
    string meinText = "der Begriff";
    bool meinBooLean = true;
    cout << meinText << " Nummer " << meinBooLean << endl;
    double sum = meinNum + meinDouble;
    cout << sum << endl;
    int x = 9, y = 3, z = 2;
    cout << x + y + z << endl;
    int a, b, c;
    a = b = c = 50;
    cout << a + b + c << endl;
    string pilzArt = "der Fliegenpilz";
    cout << pilzArt << endl;
    const int kilometerProStunde = 60;
    cout << kilometerProStunde << endl;
    // kilometerProStunde = 30; //error
    // cout << kilometerProStunde << endl;


//Der Rechteckrechner
    int Länge = 4;
    int Breite = 6;


    int Fläche = Länge * Breite;


    cout << "Die Länge beträgt: " << Länge << "\n";
    cout << "Die Breite beträgt: " << Breite << "\n";
    cout << "die Fläche des Rechtecks beträgt: " << Fläche << "\n";


//User Input
    int d;
    cout << "Gib eine Zahl ein: ";
    cin >> d;
    cout << "Deine Zahl ist: " << d << endl;

//Der Rechteckrechner mit CIN
    int teil1, teil2;
    int summe;
    cout << "Gib eine Zahl ein: ";
    cin >> teil1;
    cout << "Gib die nächste Zahl ein: ";
    cin >> teil2;
    summe = teil1 + teil2;
    cout << "Die Summe beträgt: " << summe << endl;

    float meinFloatNum = 5.99;
    string meinText1 = "Hallo";
    char meinBuchstabe = 'D';

    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1;
    cout << d1 << endl;


    char p = 65; 
    char r = 66; 
    char q = 67;
    cout << p << endl;
    cout << b << endl;
    cout << c << endl;


    auto i = 2.99f;
    cout << typeid(i).name() << endl;


    int stück = 49;
    double kosten_pro_stück  = 23.66;
    double währung = '$';

    


    return 0;

}






