# salib 💉
**salib** (**s***marter* **a***rgument* **lib***rary*) \
is a single-file library to handle arguments in **C++11** | made as a successor to [ecah-lib](https://github.com/jstmaxlol/ecah-lib)

### [download salib](https://github.com/jstmaxlol/ecah-lib/blob/main/ecah-lib.h)

## how to use ⁉️
to use **salib** you need to [download](https://github.com/jstmaxlol/salib/blob/main/salib.h) the library's **.h (header)** file and `#include` it in your **C++** project \
if the header file is in the same directory as your **.cpp** file `#include "salib.h"`
here's an example snippet;
```
#include <iostream>
#include <string>
///
// // example | salib
///

#include "salib.h"                                          // include salib

int main(int argc, char** argv) {
    sa.retrieve(argc, argv);                                // retrieve argc & argv

    std::string bufferString;                               // create a buffer std::string for the first argument
    sa.get(bufferString, 1);                                // store the first argument in the buffer std::string

    std::cout << "argc=" << argc << "\n"                    // output argc
              << "argv[1]=\"" << bufferString << "\"\n";    // output the first argument through the buffer std::string
    return 0;
}
```
