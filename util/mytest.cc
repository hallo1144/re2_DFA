#include <iostream>
#include <string>

#include "re2/re2.h"
#include "re2/prog.h"

using namespace std;

int bytemap_range;

void cb(const int* next, bool match) {
    for(int i = 0; i < bytemap_range+1; i++) {
        cout << next[i] << " ";
    }
    cout << endl;
    cout << "state created, match = " << match << ".\n";
}

int main(int argc, char** argv) {
    string regex_str = ".a";
    re2::StringPiece text("qga");
    RE2 a(regex_str);

    /*
    bool RE2::Match(const StringPiece& text,
                size_t startpos,
                size_t endpos,
                Anchor re_anchor,
                StringPiece* submatch,
                int nsubmatch)
    */

    // cout << a.Match(text, 0, 2, RE2::ANCHOR_START, NULL, 0) << endl;

    re2::Prog* p = a.getProg();
    bytemap_range =  p->bytemap_range();
    cout << p->DumpByteMap() << endl;
    int num = p->BuildEntireDFA(re2::Prog::kFirstMatch, cb);
    cout << "state: " << num << endl;
    
    cout << "test case\n";
    return 0;
}