#include "command4.h"

Command4::Command4(DefaultIO dio): Command("display results") {
    this->dio = dio;
}

void Command4::execute() {}