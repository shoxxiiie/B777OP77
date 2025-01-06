#include <iostream>
#include <string>

class Reservoir {
private:
    std::string name; 
    double width;     
    double length;   
    double maxDepth;  

public:
    Reservoir() : name("Unnamed"), width(0), length(0), maxDepth(0) {}

    Reservoir(const std::string& name, double width, double length, double maxDepth)
        : name(name), width(width), length(length), maxDepth(maxDepth) {}

    double calculateVolume() const {
        return width * length * maxDepth;
    }

    double calculateSurfaceArea() const {
        return width * length;
    }

    void display() const {
        std::cout << "Name: " << name
                  << ", Width: " << width
                  << ", Length: " << length
                  << ", Max Depth: " << maxDepth
                  << ", Volume: " << calculateVolume()
                  << ", Surface Area: " << calculateSurfaceArea() << std::endl;
    }

    void setName(const std::string& newName) { name = newName; }
    std::string getName() const { return name; }

    void setDimensions(double newWidth, double newLength, double newMaxDepth) {
        width = newWidth;
        length = newLength;
        maxDepth = newMaxDepth;
    }

    double getWidth() const { return width; }
    double getLength() const { return length; }
    double getMaxDepth() const { return maxDepth; }
};

int main() {
    Reservoir reservoir1("Lake One", 100.0, 200.0, 30.0);
    Reservoir reservoir2("River One", 50.0, 300.0, 10.0);

    reservoir1.display();
    reservoir2.display();

    std::cout << "Comparing volumes: " << std::endl;
    if (reservoir1.calculateVolume() > reservoir2.calculateVolume()) {
        std::cout << reservoir1.getName() << " has a larger volume." << std::endl;
    } else {
        std::cout << reservoir2.getName() << " has a larger volume." << std::endl;
    }

    return 0;
}
