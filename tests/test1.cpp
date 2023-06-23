#include <voc-hooks/Calculator.h>

int main() {
	VocHooks::Calculator calc(23.4);

	return static_cast<int>(calc.Calc()) - 23;
}