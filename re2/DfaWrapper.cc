#include "re2/DfaWrapper.h"
#include <cstdio>

namespace re2 {
    int DfaWrapper::regexStateNum(const char* regex, bool debug) {
        RE2 instance(regex);
        Prog* p = instance.prog_;
        if (debug)
            printf("%s\n", p->DumpByteMap().c_str());
        int num = p->BuildEntireDFA(re2::Prog::kFirstMatch, [&p, &debug](const int* next, bool match) {
            if (debug) {
                int length = p->bytemap_range();
                for(int i = 0; i < length; i++) {
                    printf("%d ", next[i]);
                }
                printf("match = %d.\n", match);
            }
        });
        return num;
    }
}