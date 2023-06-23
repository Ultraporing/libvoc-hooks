#include <voc-hooks/Calculator.h>

namespace VocHooks {
	Calculator::Calculator(double c) : c_(c) {}

	double Calculator::Calc() const { return c_; }
} // namespace Lib