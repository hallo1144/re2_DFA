#include <iostream>
#include <string>

#include "re2/DfaWrapper.h"

using namespace std;

int main(int argc, char** argv) {
    // string regex_str = ".a";
    // re2::StringPiece text("一a");
    // RE2 a(regex_str);

    /*
    bool RE2::Match(const StringPiece& text,
                size_t startpos,
                size_t endpos,
                Anchor re_anchor,
                StringPiece* submatch,
                int nsubmatch)
    */

    // cout << a.Match(text, 0, text.size(), RE2::UNANCHORED, NULL, 0) << endl;

    /*re2::Prog* p = a.getProg();
    bytemap_range =  p->bytemap_range();
    cout << p->DumpByteMap() << endl;
    int num = p->BuildEntireDFA(re2::Prog::kFirstMatch, cb);
    cout << "state: " << num << endl;*/
    // cout << re2::DfaWrapper::regexStateNum(".a") << endl;
    
    cout << "test case\n";
    return 0;
}