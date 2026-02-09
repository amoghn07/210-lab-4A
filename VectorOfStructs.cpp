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

    //vector to hold data from temp struct
    vector<Color> color;
    Color temp = {232, 324, 2};
    color.push_back(temp);
    

    return 0;
}