#pragma once

namespace voltura {

class Core {
public:
    Core() = default;
    ~Core() = default;

    const char* getVersion() const;
};

} // namespace voltura 