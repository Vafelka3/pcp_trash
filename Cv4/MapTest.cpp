#include "MapTest.hpp"

void MapTest::run() {
    testMoveTesla();
}

void MapTest::testMoveTesla() {
    // vytvoreni instance, priprava dat
    Map map;
    
    // neco provedu, zavolam metodu
    map.moveTesla(-1, 0);
    
    // overim, ze Tesla mi neprepsala mapu
    test_(map.getField(2, 3) == '-');
    
    // overim, ze se zmenila X pozice Tesly o -1 (doleva)
    test_(map.getTesla()->getX() == 2);
    test_(map.getTesla()->getY() == 3);
}
