#pragma once
#include <iostream>
#include <functional>
#include "Human.h"
#include "States.h"

class Transition
{

private:
	function<bool()> m_Controle;

public:
	Transition();
	Transition(const std::function<bool()> NextControle);
	const std::function<bool()> getControle();



};