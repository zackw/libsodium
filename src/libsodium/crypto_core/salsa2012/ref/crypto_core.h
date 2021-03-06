#ifndef crypto_core_H
#define crypto_core_H

#include "crypto_core_salsa2012.h"

#define crypto_core crypto_core_salsa2012
#define crypto_core_OUTPUTBYTES crypto_core_salsa2012_OUTPUTBYTES
#define crypto_core_INPUTBYTES crypto_core_salsa2012_INPUTBYTES
#define crypto_core_KEYBYTES crypto_core_salsa2012_KEYBYTES
#define crypto_core_CONSTBYTES crypto_core_salsa2012_CONSTBYTES
#define crypto_core_PRIMITIVE "salsa2012"
#define crypto_core_IMPLEMENTATION crypto_core_salsa2012_IMPLEMENTATION
#define crypto_core_VERSION crypto_core_salsa2012_VERSION

#endif
