#pragma once
#include "Condition.h"
class InRangeCondition :
    public Condition
{
    InRangeCondition(Agent* target, float range)
        : m_target(target), m_range(range) {}
    virtual ~InRangeCondition() {}

    virtual bool test(Agent* agent) const;

private:
    Agent* m_target;
    float m_range;
};

