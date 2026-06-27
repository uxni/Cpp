#include <iostream>

/*

TOOK ME ALMOST 30MINS SINCE I KEEP FORGETTING HAHA
I LEARNED TODAY IS
CLASSES, INHERITANCE

*/

class Player {
private:
  std::string name;
  int health;
public:

  Player(std::string n, int h){
    name = n;
    health = h;
  }
  
  void Print() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << std::endl;
  }
  
  void SetName(std::string newName) {
    name = newName;
  }
  
  int GetHealth() {
    return health;
  }
  
  void Damage(int amount) {
    health -= amount;
  }

  void Heal(int amount) {
    health += amount;
  }
};

class Boss : public Player {
public:
    Boss(std::string n, int h)
        : Player(n, h) {
    }

    void SpecialAttack() {
        std::cout << "The boss used a special skill (Lightning Strike)" << std::endl;
    }
    
    void Enrage() {
      Heal(50);
      std::cout << "The boss became enraged!" << std::endl;
    }
};

int main() {
    // variables
    int choice;
    
    // entities
    Player player("Atn", 80);
    Boss boss("Kei", 80);
    
    
    std::cout << "=====BUTTLE=====" << std::endl;
      
    std::cout << "Player HP: " << player.GetHealth() << std::endl;
    std::cout << "Boss HP: " << boss.GetHealth() << std::endl;
    std::cout << "1. Attack\n2. Heal\n3. Quit" << std::endl;
    
    while (player.GetHealth() > 0 && boss.GetHealth() > 0) {
      std::cin >> choice;
    
      switch (choice) {
      case 1:
        boss.Damage(20);
        boss.SpecialAttack();
        player.Damage(18);
        break;
      case 2:
        player.Heal(20);
        boss.SpecialAttack();
        player.Damage(18);
        break;
      case 3:
        return 0;
      default:
        std::cout << "Invalid choice! Please enter 1, 2, or 3.\n";
      }
      
      player.Print();
      boss.Print();
      std::cout << "1. Attack\n2. Heal\n3. Quit" << std::endl;
    }
    
    if (player.GetHealth() > 0) {
       std::cout << "🎉 You Win!\n";
     } else {
       std::cout << "💀 Game Over!\n";
    }
    
    return 0;
}  
