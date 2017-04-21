#ifndef state_h
#define state_h

class State {
public:
    virtual void HandleInput() = 0;
    virtual void Update() = 0;
    virtual void Render() = 0;
};

#endif
