#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

//constants for random number generation
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
    
    cout << left << setw(8) << "Color#" << setw(8) << "R value" << setw(8) << "G value" << setw(8) << "B value" << endl;
    cout << setw(8) << "------" << setw(8) << "-------" << setw(8) << "-------" << setw(8) << "-------" << endl;

    for (int i = 0; i < rnd; i++){
        //temp struct to push into vector
        Color temp;
        temp.red = rand() % 300;
        temp.green = rand() % 300;
        temp.blue = rand() % 300;

        color.push_back(temp);

        cout << left << setw(8) << i + 1 << setw(8) << temp.red << setw(8) << temp.green << setw(8) << temp.blue << endl;
    }

    return 0;
}