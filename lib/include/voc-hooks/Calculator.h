#pragma once

#include <voc-hooks/subfolder/helper.h>

namespace VocHooks {
	class Calculator {
	public:
		VOC_HOOKS_EXPORT Calculator(double c);

		VOC_HOOKS_EXPORT double Calc() const;

	private:
		double c_;
	};

	template <typename T> class CalculatorT {
	public:
		CalculatorT(T c) : c_(c) {}

		T Calc() const { return c_; }

	private:
		T c_;
	};
} // namespace Lib
