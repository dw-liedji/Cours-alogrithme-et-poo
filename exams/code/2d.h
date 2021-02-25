// A 2D point class!
class Point
{

private:
    // Coordinates of the point.
    double x;
    double y;

public:
    // Constructors
    Point();                   // Default constructor
    Point(double x, double y); // Two-argument constructor

    // Destructor
    ~Point();

    // Accessor methods
    double get_x();
    double get_y();

    // Mutator methods
    void set_x(double val);
    void set_y(double val);
};