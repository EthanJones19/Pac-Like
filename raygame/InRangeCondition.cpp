#include "InRangeCondition.h"

bool InRangeCondition::test(Agent* agent) const
{
	return m_range > (m_target->getWorldPosition() - agent->getWorldPosition()).getMagnitude();
}