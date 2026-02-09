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
    
    cout << "Color#\tR value\tG value\tB value" << endl;
    cout << "------\t-------\t-------\t-------" << endl;

    for (int i = 0; i < rnd; i++){
        //temp struct to push into vector
        Color temp;
        temp.red = rand() % 300;
        temp.green = rand() % 300;
        temp.blue = rand() % 300;

        color.push_back(temp);

        cout << i + 1 << "\t" << temp.red << "\t" << temp.green << "\t" << temp.blue << endl;
    }

    return 0;
}