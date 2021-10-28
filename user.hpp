#ifndef __USER_HPP_
#define __USER_HPP_
#include <string>
#include <vector>
#include <fstream>

class User{

public:
// Constructors
    User(std::string username): _username(username), _name(""), _age(0), // User enters only username
                                _weight(0.0), _height(0.0), _bmi(0.0) {}
    User(std::string username, std::string name): _username(username), _name(name), _age(0), // User enters username and name
                                _weight(0.0), _height(0.0), _bmi(0.0) {}
    User(std::string username, std::string name, int age, double weight, double height, double bmi): _username(username), 
                                _name(name), _age(age), 
                                _weight(weight), _height(height), _bmi(bmi) {}               // User enters all details
// Public functions
    

private:
    // User variables
    // If adding more, create more private variables
    std::string _username;  //Look into security for data
    std::string _name;
    int _age;
    double _weight;
    double _height;
    double _bmi;
// Private functions


};


#endif // __USER_HPP_