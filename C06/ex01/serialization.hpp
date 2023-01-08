#ifndef __SERIALIZATION_H__
# define __SERIALIZATION_H__
# include <iostream>
# include <cstdint>
# include "Data.hpp"

uintptr_t	serialize(Data* ptr);
Data* 		deserialize(uintptr_t raw);

#endif