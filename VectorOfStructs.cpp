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

    vector<Color> color;
    Color temp = {232, 324, 2};
    color.push_back(temp);

    cout << color[0].red << " " << color[0].green << " " << color[0].blue << endl
;

    return 0;
}