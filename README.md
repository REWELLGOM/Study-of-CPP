# For visual convenience, the functions are divided by each feature
시각적으로 보기 편하게하기위해서 각각의 특징별로 기능을 나눠놨음

<details>
<summary>STL</summary>

<details>
<summary>Template</summary>

```cpp
double d = max<double>(5.5,2); //all var type is double

int i = max<int,char,char>('a','b');

template<typename T>
void f(T x, T y)
{
    cout<<"Template"<<endl;
}
```
</details>

<details>
<summary>Sort</summary>

```cpp

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    sort(array.begin(), array.end());
    int avg = array.size() / 2;
    answer = array[avg];
    return answer;
}

```
-----------------------------------------------------
</details>


</details>

# Recyclebility(재사용성)

<details>
<summary>Enum</summary>

### Use to define constants as a group
상수들을 하나의 그룹으로 묶어서 정의하는 데 사용

```cpp
enum class ECharacterState
{
    Idle,
    Walking
};

public:
    Character() : CurrentState(ECharacterState::Idle) {}
    void UpdateState(ECharacterState NewState)
    {
        CurrentState = NewState;
        switch (CurrentState)
        {
            case ECharacterState::Idle:
                break;
            case ECharacterState::Walking:
                break;
        }
    }
    ECharacterState GetState() const
    {
        return CurrentState;
    }
};
int main()
{
    Character myCharacter;
    myCharacter.UpdateState(ECharacterState::Running);  // 상태를 Running으로 변경
    ECharacterState currentState = myCharacter.GetState(); // 현재 상태를 가져옴
    return 0;
}
```

-------------------------------------------------

</details>


<details>
<summary>Class</summary>

### User-defined data types defined by combining data with the functions (methods) that process it
데이터와 해당 데이터를 처리하는 함수(메서드)를 함께 묶어서 정의한 사용자 정의 데이터 형식

```cpp
class Point
{
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    void SetPoint(int newX, int newY) {
        x = newX;
        y = newY;
    }
};
int main()
{
    Point point;    
    point.Print();

    point.SetPoint(5, 3); 
    point.Print();
    return 0;
}
```

-------------------------------------------------
</details>
<details>
<summary>Structure(구조체)</summary>

### Manage variables in different data formats in a single unit
다른 데이터 형식의 변수들을 하나의 단위로 묶어서 관리

```cpp
struct CharacterStats
{
    int Health;
    int Mana;
    int Armor;
    float Speed;
    CharacterStats(int health, int mana, int armor, float speed)
        : Health(health), Mana(mana), Armor(armor), Speed(speed) {}
};
void printStats(const CharacterStats& stats)
{
    std::cout << "Health: " << stats.Health << std::endl;
    std::cout << "Mana: " << stats.Mana << std::endl;
    std::cout << "Armor: " << stats.Armor << std::endl;
    std::cout << "Speed: " << stats.Speed << " units/sec" << std::endl;
}
int main()
{
    CharacterStats myCharacter(100, 50, 25, 4.5f);
    printStats(myCharacter);
    return 0;
}

```

-------------------------------------------------

</details>

<details>
<summary>Function OverLoading(함수 오버로딩)</summary>
  
### Unless fuction name is same If declaration form of parameters is different it is declaration of other function. Cause factor which thorough function called we can divide fuction
함수 호출 시 전달되는 인자를통해서 호출하고자 하는 함수의 구분이 가능하기 때문에 함수명이 같더라도 매개변수의 선언형태(인자의 개수 차이, 자료형 차이등)가 다르면 다른 함수로 정의

```cpp
void applyDamage(int& health, int damage) {
    health -= damage;
    cout << "Health reduced by " << damage << " points." << endl;
}
// 오버로딩된 함수: 추가로 방어력을 고려
void applyDamage(int& health, int damage, int armor) {
    int effectiveDamage = damage - armor;
    if (effectiveDamage < 0) effectiveDamage = 0;
    health -= effectiveDamage;
    cout << "Health reduced by " << effectiveDamage << " points after armor." << endl;
}
// 오버로딩된 함수: 데미지의 유형에 따라 다르게 처리
void applyDamage(int& health, int damage, string damageType) {
    if (damageType == "Fire") {
        damage += 5; // 불 데미지는 추가 데미지 포인트가 있음
    }
    health -= damage;
    cout << "Health reduced by " << damage << " points due to " << damageType << " damage." << endl;
}
int main() {
    int myHealth = 100;
    applyDamage(myHealth, 10);  // 기본 데미지
    applyDamage(myHealth, 20, 5);  // 방어력 고려
    applyDamage(myHealth, 15, "Fire");  // 데미지 유형 고려
    return 0;
}

```

-------------------------------------------------

</details>

<details>
<summary>Namespace</summary>

### Organize name
이름을 그룹화함

```cpp
namespace Player
{
    class PlayerCharacter
    {
    public:
        void MoveForward(float Value);
        void MoveRight(float Value);
    };
}

namespace AI
{
    class EnemyCharacter
    {
    public:
        void Patrol();
        void Chase();
    };
}

void SetupGame()
{
    Player::PlayerCharacter player;
    AI::EnemyCharacter enemy;

    player.MoveForward(1.0f);
    player.MoveRight(1.0f);
    
    enemy.Patrol();
}
```

-------------------------------------------------

</details>

# Improved performance(성능 향상)

<details>
<summary>InlineFunction(인라인 함수)</summary>

### Minimize number of calling to increase running speed
호출을 최소화하여 프로그램의 실행 속도를 높이는 함수

```cpp
inline int Add(int x, int y) {
    return x + y;
}

int main() {
    int sum = Add(5, 3);
    reutnr 0;
}
```

-------------------------------------------------

</details> 

<details>
<summary>New&Delete</summary>

### Operator used to dynamically allocate and release memory
동적으로 메모리를 할당하고 해제하는 데 사용되는 연산자

```cpp
#include <iostream>
int main() {
    int* num = new int;  // 동적으로 정수 메모리를 할당
    *num = 10;           // 할당된 메모리에 10을 저장
    std::cout << *num << std::endl;  // 메모리에 저장된 값을 출력
    delete num;          // 동적으로 할당된 메모리를 해제
    return 0;
}
```

-------------------------------------------------

</details> 

<details>
<summary>Reference(참조자)</summary>

### To provide nickname for a variable so that it can be referenced
변수의 다른 이름을 제공하여 해당 변수를 참조할 수 있게하는 것

```cpp
#include <iostream>
using namespace std;

int main() {
    int original = 100;   // 원본 변수
    int& ref = original;  // 원본 변수에 대한 참조자

    cout << "Original: " << original << ", Reference: " << ref << endl;
    ref += 100;           // 참조자를 통해 원본 변수 수정
    cout << "Original: " << original << ", Reference: " << ref << endl;

    return 0;
}
```


-------------------------------------------------

</details> 

# Convenience(편의성)
<details>
<summary>Default value for parameters(매개변수의 기본값)</summary>
  
### To specify the value of a parameter in advance
매개변수의 값을 미리 지정하는 것

-------------------------------------------------

</details>




# Easily confusing thing
  
쉽게 헷갈릴 수 있는것들

<details>
<summary>Capsulelize vs Modulize</summary>

캡슐화 vs 모듈화

</details>

<details>
<summary>Pointer vs Reference</summary>
  
포인터 vs 참조자

<details>
<summary>Pointer(포인터)</summary>
최초 생성된 후에 다른 주소를 가르킬수 있다(새 메모리주소, 새액터, 새컴포넌트 등등)  
null값을 나타낼 수 있다.

예시  
*AcotrPtr contents에 접근할때  
ActorPtr address에 접근할때  
ActorPtr = &Actor address변경 할때  
*ActorPtr = Actor value를 변경할때  

Ex Code)
```cpp
float Damage = 0;
float* DamagePtr = &Damage;
*DamagePtr = 5.5;
UE_LOG(LogTemp, Display, TEXT("Damage: %f, DamagePtr: %f"),Damage, *DamagePtr);
 ```

-------------------------------------------------

</details>

<details>
<summary>Reference(참조)</summary>  
  
최초 생성해서 한번'만' 가르킬수 있다.  
null값을 나타낼 수 없다(안정성이 있다)  
예시  
ActorRef contents에 접근할때  
&ActorRef address에 접근할때  
ActorRef = Actor value를 변경할때  

Ex Code)
```
float Damage = 0;
float& DamageRef = Damage;
DamageRef = 12.5;
UE_LOG(LogTemp, Display, TEXT("RefDamage: %f, Damage: %f"), DamageRef, Damage);
 ```

-------------------------------------------------

</details>

</details>

<details>
<summary>String vs char</summary>

Char ('')  
Control simple Char data, Control memory usage and processing more precisely  
단순한 문자 데이터를 다룰 때, 메모리 사용과 처리 과정을 더 정밀하게 제어할 수 있습니다  

String ("")  
Control complicate string, Prevent normal problem like memory overflow  
복잡한 문자열 처리가 필요할 때,  메모리 오버플로우와 같은 일반적인 문제를 방지  

</details>

# About HeaderFile
<details>
<summary>csting</summary>  

### append()
Append other string at the end of string    
문자열의 끝에 다른 문자열을 추가  

### replace()  
Replace part to other string  
문자열의 일부를 다른 문자열로 대체  

### find()
Find specific sting or first index of char in sting  
문자열 내에서 특정 문자열이나 문자의 첫 번째 인덱스를 찾음  

### substr()
Inject specific part of string to make new string
문자열의 특정 부분을 추출하여 새 문자열을 생성  

### size() Or length()  
Return string length  
문자열의 길이를 반환  

</details>

-----

<details>
<summary>Extra</summary>

### for(TypeName val : val2)  
Assign each element of numbers to repeat each element  
numbers의 각 요소를 num에 하나씩 할당하여 반복  

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    for (int num : numbers) {
        cout << num << " ";
    }
    return 0;
}
```

</details>
