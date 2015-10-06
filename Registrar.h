#ifndef __Registrar_H
#define __Registrar_H

#include <memory>

template <typename Product, typename Factory, typename IdentifierType, IdentifierType Identifier>
class Registrar {
    static const bool registered;
};

template <typename Product, typename Factory, typename IdentifierType, IdentifierType Identifier>
const bool Registrar<Product, Factory, IdentifierType, Identifier>::registered = 
    Factory::instance().registerCreator(Identifier, Product::Create);

#endif
