#include "P1.h"

Node* P1::tryParse(TokStreamer* ts) {
    Node* V_Node;
    if (V_Node = V::getInstance().tryParse(ts)) {
		return V_Node;
	}

	return nullptr;
}