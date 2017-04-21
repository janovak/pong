#ifndef main_loop_h
#define main_loop_h

#include <memory>
#include <stack>

#include "game_state.h"
#include "state.h"

class MainLoop {
public:
    MainLoop();
    ~MainLoop();

    void Loop();

private:
    std::shared_ptr<GameState> current_game_state_;
    std::stack<std::shared_ptr<GameState>> game_state_stack_;
};

#endif
