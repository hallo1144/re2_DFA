#include <iostream>
#include <string>

#include "re2/DfaWrapper.h"

using namespace std;

int main(int argc, char** argv) {
    // string regex_str = "^(.*\\.)*$";
    // re2::StringPiece text("");
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
    
    int statenum = re2::DfaWrapper::regexStateNum(".a", true);
    std::vector<re2::PState*>* d = re2::DfaWrapper::getRegexDfa(".a");
    printf("a: %d, b: %ld\n", statenum, d->size());

    for(unsigned int i = 0; i < d->size(); i++) {
        cout << "state " << (*d)[i]->index << ": " << endl;
        for(int j = 0; j < 256; j++) {
            cout << (*d)[i]->next[j] << " ";
            if((j+1)%16==0)
                cout << endl;
        }
        cout << endl;
    }

    cout << "test case\n";
    return 0;
}