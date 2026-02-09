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

const int max = 50, min = 25;

int main(){
    srand(time(0));
    
    //vector to hold data from temp struct
    vector<Color> color;
    
    //generating random number for # of Color objects
    int rnd = rand() % (max - min + 1) + min;

    for (int i = 0, i < rnd; i++){
        //temp struct to push into vector
        int red = rand() % 300;
        int green = rand() % 300;
        int blue = rand() % 300;
        Color temp = {red, green, blue};
        color.push_back(temp);
    }


    return 0;
}