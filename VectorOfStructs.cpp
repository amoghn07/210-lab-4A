#include <iostream>
#include <vector>
#include <string>
using namespace std;

//defining struct for holding RGB hue values
struct Color{
    int red;
    int green;
    int blue;
};

int main(){

    Color test = {232, 324, 2};
    cout << test.red << " " << test.green << " " << test.blue << endl;

    return 0;
}