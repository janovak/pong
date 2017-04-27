#ifndef main_loop_h
#define main_loop_h

#include <memory>
#include <stack>

#include "game_state.h"

class MainLoop {
public:
    MainLoop();
    ~MainLoop();

    void Loop();

private:
    std::shared_ptr<GameState> currentGameState_;
    std::stack<std::shared_ptr<GameState>> gameStateStack_;
};

#endif
