#include "Serializer.hpp"

int main()
{
    Data *data = new Data;
    Data *tmp;
    uintptr_t raw;
    data->i = 100;
    raw = Serializer::serialize(data);
    tmp = Serializer::deserialize(raw);
    std::cout << tmp->i << std::endl;
}