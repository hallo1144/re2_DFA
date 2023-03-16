/* File : example.i */
%module myre2
%{
    /* Put headers and other declarations here */
    #include "re2/DfaWrapper.cc"
    using namespace re2;
%}

// %import "re2/DfaWrapper.cc"



// class DfaWrapper {
//     public:
//         static int regexStateNum(const char* regex) { return regexStateNum(regex); }
//         // static DFA*
// };

extern int regexStateNum(const char* regex, bool debug);