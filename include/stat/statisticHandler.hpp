#include "statisticBase.hpp"

#include <vector>
#include <any>

namespace stat
{
    template <typename T>

    class StatisticHandler
    {
    private:
        std::vector<StatisticBase<T>> statistics;

    public:
        StatisticHandler();

        void addStatistic(StatisticBase<T> statistic);

        std::vector<StatisticBase<T>> getStatistics();
        void resetStatistics();
    };
};