#include <string.h>
#include <iostream>
using namespace std;

int hexToDec(const string& hexString) {
    int decNum = 0;

    for (size_t i = 0; i < hexString.length(); ++i) {
        char hexChar = hexString[i];

        int hexDig;
        if (hexChar >= '0' && hexChar <= '9') {
            hexDig = hexChar - '0';
        } else if (hexChar >= 'a' && hexChar <= 'f') {
            hexDig = hexChar - 'a' + 10;
        } else if (hexChar >= 'A' && hexChar <= 'F') {
            hexDig = hexChar - 'A' + 10;
        } else {
            cerr << "Neispravan heksadecimalni znak:" << hexChar << endl;
            return -1; 
        }

        
        decNum = decNum * 16 + hexDig;
    }

    return decNum;
}

int main() {

    string hexString = "13c"; 
    int decNum = hexToDec(hexString);

    if (decNum != -1) {
        cout << "Hex: " << hexString << " => Dec: " << decNum << endl;
    }

    return 0;
}