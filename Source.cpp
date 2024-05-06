#include <iostream>

struct Coordinate {
public:

    void print() const {
        std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;
    }
    // Put public things here in this section.
    // Any function can access this data.
    int x;
    int y;
    int z;

    // We simply moved the function into the Coordinate scope (curly braces: {})
    // Associate `add` with an instance of `Coordinate` and only take a single argument.
    Coordinate add(Coordinate two) {
        Coordinate result;

        // The x, y, and z values come from whatever instance we called `.add()` on.
        result.x = x + two.x;
        result.y = y + two.y;
        result.z = z + two.z;

        // add() can access `matrix` because it is associated with Coordinate.
        result.matrix = (rand() % 5) + matrix + two.matrix;

        return result;
    }

private:
    // Put private things here in this section.
    // Only functions associated with Coordinate can access this data.
    int matrix;
};

int main()
{
    Coordinate c1;
    c1.x = 10;
    c1.y = 5;
    c1.z = 0;

    Coordinate c2;
    c2.x = 2;
    c2.y = 4;
    c2.z = 6;

    Coordinate c3 = c1.add(c2);

    c3.print();
}