#include <iostream>

using namespace std;

namespace moveCode
{

    class BaseMovement
    {
    public:
        virtual void move()
        {
            cout << "Base movement" << endl;
        }
    };

    class PlayerMovement : public BaseMovement
    {
    public:
        void move() override
        {
            cout << "Player moves with keyboard input" << endl;
        }
    };

    class EnemyMovement : public BaseMovement
    {
    public:
        void move() override
        {
            cout << "Enemy moves automatically" << endl;
        }
    };

} // namespace moveCode

int main()
{
    // 직접 객체를 사용
    moveCode::PlayerMovement player;
    player.move(); // "Player moves with keyboard input" 출력

    moveCode::EnemyMovement enemy;
    enemy.move(); // "Enemy moves automatically" 출력

    return 0;
}