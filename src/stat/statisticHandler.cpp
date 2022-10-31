#include "stat/statisticHandler.hpp"

stat::StatisticHandler::StatisticHandler()
{
}

stat::StatisticHandler::addStatistic(StatisticBase<T> statistic)
{
    this->statistics.push_back(statistic);
}

std::vector<stat::StatisticBase<T>> stat::StatisticHandler::getStatistics()
{
    return this->statistics;
}

void stat::StatisticHandler::resetStatistics()
{
    for (auto statistic : this->statistics)
    {
        statistic.reset();
    }
}