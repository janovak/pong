#ifndef main_loop_h
#define main_loop_h

#include <memory>
#include <stack>

#include "game_state.h"

class MainLoop {
public:
    void Loop();

private:
    std::stack<std::unique_ptr<State>> gameStateStack_;
};

#endif
