#include <iostream>
#include <string>
#include <sstream>


template <typename T>
T calcDistance(T distance1, T distance2) {
    return distance1 + distance2;
}


class City {
private:
    std::string name;
    int distanceFromChicago;

public:
    City(const std::string& name, int distance) : name(name), distanceFromChicago(distance) {}

    City operator+(const City& other) const {
        std::string combinedName = name + " to " + other.name;
        int totalDistance = distanceFromChicago + other.distanceFromChicago;
        return City(combinedName, totalDistance);
    }

    void display() const {
        std::cout << "City: " << name << ", Distance: " << distanceFromChicago << " miles" << std::endl;
    }

    
    int getDistance() const {
        return distanceFromChicago;
    }
};


class Planet {
private:
    std::string name;
    double distanceFromEarth;

public:
    Planet(const std::string& name, double distance) : name(name), distanceFromEarth(distance) {}

    
    Planet operator+(const Planet& other) const {
        std::string combinedName = name + " to " + other.name;
        double totalDistance = distanceFromEarth + other.distanceFromEarth;
        return Planet(combinedName, totalDistance);
    }

    
    void display() const {
        std::cout << "Planet: " << name << ", Distance: " << distanceFromEarth << " million km" << std::endl;
    }
};


int main() {
    
    int dist1 = 300; 
    int dist2 = 400; 
    double dist3 = 0.5; 
    double dist4 = 1.0; 

    
    int totalDistance1 = calcDistance(dist1, dist2);
    std::cout << "Total Distance (int): " << totalDistance1 << " miles" << std::endl;

    double totalDistance2 = calcDistance(dist3, dist4);
    std::cout << "Total Distance (double): " << totalDistance2 << " million km" << std::endl;

    
    City city1("New York", 300);
    City city2("Los Angeles", 400);
    City citySum = city1 + city2;

    
    citySum.display();

    
    Planet planet1("Venus", 0.5);
    Planet planet2("Mars", 1.0);
    Planet planetSum = planet1 + planet2;

    
    planetSum.display();

    return 0;
}
