#pragma once
#include <functional>

#include "Human.h"

//Grace a l'aide d'un camarade j'ai pu comprendre et utiliser function<bool()>

class Transition
{

private:
	std::function<bool()> m_Controle;

public:
	Transition(const std::function<bool()> NextControle);   //Transition vers le prochain controle
	const std::function<bool()> getControle();



};