#include <iostream>
#include <httplib>

int main() {
    httplib::Client client("paste.myst.rs/");
    std::cout << "Hello World" << std::endl;
}
