#ifndef MapTest_hpp
#define MapTest_hpp

#include "TestSuite/Test.h"
#include "Map.h"

class MapTest: public TestSuite::Test {
public:
    void run() override;
private:
    void testMoveTesla();
};

#endif /* MapTest_hpp */
