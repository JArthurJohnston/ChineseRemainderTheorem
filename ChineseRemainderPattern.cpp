/* 
 * File:   main.cpp
 * Author: Joe Johnston
 *
 * Created on December 2, 2013, 4:46 PM
 */

#include <cstdlib>
#include <iostream>

int chineseRemainder(int, int, int, int, int, int);

using namespace std;

int main(int argc, char** argv) {
    
    cout << chineseRemainder(3,4,5, 2,2,1);
    
    return 0;
}

int chineseRemainder (int modX, int modY, int modZ, int xCoord, int yCoord, int zCoord){
    int x = 1, y = 1, z = 1, solution = 1;
        while(true){
            if (x == xCoord && y == yCoord && z == zCoord)
                return solution;
            x++, y++, z++, solution++;
            if (x > modX)
                    x = 1;
            if (y > modY)
                    y = 1;
            if (z > modZ)
                    z = 1;
	}
}