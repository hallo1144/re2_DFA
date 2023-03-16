#include "re2/prog.h"
#include "re2/re2.h"
#include "re2/stringpiece.h"

namespace re2 {
    class DFA;
}

namespace re2 {
    class DfaWrapper {
        public:
            static int regexStateNum(const char* regex);
            static DFA* transferDFA(const char* regex);
    };
}