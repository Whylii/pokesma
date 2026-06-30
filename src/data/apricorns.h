struct ApricornTree
{
    u8 minimum;
    u8 maximum;
    enum ApricornType apricornType;
};

const struct ApricornTree gApricornTrees[APRICORN_TREE_COUNT] =
{
    #if APRICORN_TREE_COUNT > 0
    [APRICORN_TREE_NONE] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_RED,
    },

    [APRICORN_TREE_PWOODS_RED1] =
    {
        .minimum = 1,
        .maximum = 5,
        .apricornType = APRICORN_RED,
    },

    [APRICORN_TREE_PWOODS_BLUE1] =
    {
        .minimum = 1,
        .maximum = 5,
        .apricornType = APRICORN_BLUE,
    },

    [APRICORN_TREE_PWOODS_YELLOW1] =
    {
        .minimum = 1,
        .maximum = 5,
        .apricornType = APRICORN_YELLOW,
    },
    #endif
};
