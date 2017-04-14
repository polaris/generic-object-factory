#ifndef __Factory_H
#define __Factory_H

#include <unordered_map>

template <typename IdentifierType, typename ProductCreator, template <class ...> class Map = std::unordered_map>
class Factory {
public:
    bool registerCreator(IdentifierType key, ProductCreator value) {
        return map_.emplace(key, value).second;
    }

    template <typename T>
    std::unique_ptr<T> create(IdentifierType key) const {
        const auto itr = map_.find(key);
        if (itr != map_.end()) {
            return itr->second();
        }
        return decltype(itr->second())();
    }

    static Factory<IdentifierType, ProductCreator, Map>& instance() {
        static Factory<IdentifierType, ProductCreator, Map> factory;
        return factory;
    }

private:
    Factory() =default;

    Map<IdentifierType, ProductCreator> map_;
};

#endif
