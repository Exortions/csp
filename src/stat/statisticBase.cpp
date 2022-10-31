#include "stat/statisticBase.hpp"

stat::StatisticBase::StatisticBase(char *name, T value, char *unit, char *description)
{
    this->name = name;
    this->value = value;
    this->unit = unit;
    this->description = description;
}

stat::StatisticBase::StatisticBase()
{
}

char *stat::StatisticBase::getName() const
{
    return this->name;
}

T stat::StatisticBase::getValue() const
{
    return this->value;
}

char *stat::StatisticBase::getUnit() const
{
    return this->unit;
}

char *stat::StatisticBase::getDescription() const
{
    return this->description;
}

char *stat::StatisticBase::getCategory() const
{
    return this->category;
}
