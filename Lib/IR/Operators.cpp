#include "Operators.h"

const char* IR::getOpcodeName(Opcode opcode)
{
	switch(opcode)
	{
#define VISIT_OPCODE(encoding, name, nameString, Imm, ...)                                         \
	case Opcode::name: return nameString;
		ENUM_OPERATORS(VISIT_OPCODE)
#undef VISIT_OPCODE
	default: return "unknown";
	};
}
