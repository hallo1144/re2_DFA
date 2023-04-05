/* File : example.i */
%module myre2
%include "std_vector.i"

%{
    /* Put headers and other declarations here */
    #include "re2/DfaWrapper.h"
    #include <vector>
    using namespace re2;
    #define SWIG_PYTHON_STRICT_BYTE_CHAR
%}

namespace std {
    %template(PStateVector) vector<re2::PState*>;
}

%include "../re2/DfaWrapper.h"