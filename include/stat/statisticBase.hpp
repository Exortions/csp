namespace stat
{
    template <typename T>

    class StatisticBase
    {
    private:
        char *name;
        T value;
        char *unit;
        char *description;

    public:
        StatisticBase(char *name, T value, char *unit, char *description);
        StatisticBase();

        char *getName() const;
        T getValue() const;
        char *getUnit() const;
        char *getDescription() const;
        char *getCategory() const;

        virtual void reset();

        virtual void update(T value) = 0;

        virtual void tick() = 0;
    };
}