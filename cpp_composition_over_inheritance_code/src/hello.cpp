#include <cpp_composition_over_inheritance_code/hello.h>
#include <iostream>

void hello(std::string const& name) {
  std::cout << "Hello, " << name << "!\n";
}

std::string sayHello(const std::string& name) {
    std::string greetings;
    greetings = "Hello, " + name + "!";
    return greetings;
}
