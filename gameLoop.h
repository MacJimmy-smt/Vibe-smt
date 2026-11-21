
#pragma once
#include <vector>
#include <string>

class GameLoop {
public:
    bool isFinished() const;
    void update();
    void render();
private:
    std::vector<int> m_positions;
};

bool GameLoop::isFinished() const {
    return m_positions.empty();
}

void GameLoop::update() {
    // Simulate some work
    for (int i = 0; i < 100; ++i) {
        // ...
    }
}

void GameLoop::render() {
    std::cout << "Render frame #" << m_positions.back() << std::endl;
}
