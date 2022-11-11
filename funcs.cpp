#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

double length(Coord3D *p){
    double result = sqrt(pow(p -> x, 2) + pow(p -> y, 2) + pow(p -> z, 2));
    return result;
}

Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if(length(p1) < length(p2)){
        return p1;
    }
    return p2;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt) {
  ppos -> x = ppos -> x + pvel -> x * dt;
  ppos -> y = ppos -> y + pvel -> y * dt;
  ppos -> z = ppos -> z + pvel -> z * dt;
}

Coord3D* createCoord3D(double x, double y, double z){ 
    Coord3D *coord = new Coord3D;
    *coord = {x, y, z};
    return coord;
}

void deleteCoord3D(Coord3D *p) { 
    delete p;
}