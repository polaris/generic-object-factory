#ifndef __Registrar_H
#define __Registrar_H

#include <memory>

template <typename Product, typename Product::IdentifierType Identifier>
class Registrar {
    static const bool registered;
};

template <typename Product, typename Product::IdentifierType Identifier>
const bool Registrar<Product, Identifier>::registered = 
    Product::Factory::instance().registerCreator(Identifier, Product::create);

#endif
