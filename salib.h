#include <iostream>
#include <cstring>
#include <string>
///
// /// salib - smarter argument library
///

class sa {
private:
    int argc = 0;
    char** argv = nullptr;
public:
    void retrieve(int _argc, char** _argv) {
        if (_argc > 0 && _argv != nullptr) {
            argc = _argc;
            argv = _argv;
        } else std::cerr << "[salib/e!] invalid arguments passed to sa.retrieve()\n";
    }
    bool get(std::string& outputBufferString, int argumentIndex) {
        if (argv == nullptr || argumentIndex < 0 || argumentIndex > argc)
            return false;
        if (argv != nullptr && argc >= 1 && argv[argumentIndex] != nullptr) {
            outputBufferString = argv[argumentIndex];
            return true;
        } return false;
    }
    void help() {
        std::cout
        << "salib - smarter argument handler - library\n"
        << "built by jstmax! (bit.ly/mx_info / @jstmaxlol on GitHub)\n\n"

        << "method list for salib;\n"
        << "sa.retrieve() > retrieves both argc and argv so you don't have to specify them when calling e.g. sa.get()\n"
        << "sa.get() > stores the contents of the indexed arg. into a std::string, returns either true or false\n"
        << "sa.help() > prints this usage screen to stdout\n";
    }
}; sa sa;
