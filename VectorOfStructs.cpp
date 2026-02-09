#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int MX = 50, MN = 25;


//defining struct for holding RGB hue values
struct Color{
    int red;
    int green;
    int blue;
};

int main(){
    srand(time(0));

    //vector to hold data from temp struct
    vector<Color> color;
    
    //generating random number for # of Color objects
    int rnd = rand() % (MX - MN + 1) + MN;

    for (int i = 0; i < rnd; i++){
        //temp struct to push into vector
        int red = rand() % 300;
        int green = rand() % 300;
        int blue = rand() % 300;
        Color temp = {red, green, blue};
        color.push_back(temp);
    }

    cout << color[20].red << " " << color[20].green << " " << color[20].blue << endl;


    return 0;
}