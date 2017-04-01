#ifndef P1_HEADER
#define P1_HEADER

#include "../../../Base/BaseGrammar.h"
#include "../V/V.h"
#include "../../../../Parsing/Flow/Job.h"


using namespace BaseGrammar;

namespace P1 {
    
    Node* tryParse(TokStreamer* st);
};

#endif
