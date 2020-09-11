#pragma once
#include <functional>

#include "Human.h"



class Transition
{

private:
	std::function<bool()> m_Controle;

public:
	Transition(const std::function<bool()> NextControle);
	const std::function<bool()> getControle();



};