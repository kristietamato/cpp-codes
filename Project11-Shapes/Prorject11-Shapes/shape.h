//  shape.h

#ifndef SHAPE_LOCK
#define SHAPE_LOCK

class shape
{
public:
    // constructor
    shape(int sizeChoice, bool fillChoice, int shapeInput);

    void printShape(int shapeChoice);

private:
    int size;
    bool fill;
    int shapeChoice;
    void shape1(void);
    void shape2(void);
    void shape3(void);
    void shape4(void);
    void shape5(void);
    void shape6(void);
    void shape7(void);
    void shape8(void);
    void shape9(void);
    void shape10(void);
    void shape11(void);
};

#endif
