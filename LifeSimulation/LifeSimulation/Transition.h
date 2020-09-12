#pragma once
#include <functional>

#include "Human.h"

class Transition
{
private:
	std::function<bool()> m_Controle;

public:
	Transition(const std::function<bool()> NextControle);   // Transition vers le prochain controle
	const std::function<bool()> getControle();
};