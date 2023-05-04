#include "re2/re2.h"
#include "re2/prog.h"

namespace re2 {
    class PState {
        public:
        bool match;
        int index;
        std::vector<int> next = std::vector<int>(256);

        PState(bool is_match, int idx): match(is_match), index(idx) {}
    };

    class DfaWrapper {
        public:
        static int regexStateNum(const char* regex, bool debug);
        static std::vector<PState*>* getRegexDfa(const char* regex);
    };

}