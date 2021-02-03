#include <iostream>
#include <cmath>
#include <memory>

#include "./src/builder/index.hpp"
#include "./src/prototype/index.hpp"
#include "./src/factory/index.hpp"
#include "./src/singleton/index.hpp"
#include "./src/adapter/index.hpp"
#include "./src/bridge/index.hpp"
#include "./src/composite/index.hpp"
#include "./src/decorator/index.hpp"
#include "./src/flyweight/index.hpp"
#include "./src/proxy/index.hpp"
#include "./src/chain_of_responsibility/index.hpp"

using namespace std;


int main(int argc, char *argv[])
{
  chain::Game game;
  chain::GameCreature goblin{game, 2, 2, "Strong Goblin"};

  cout << goblin << endl;

  {
    chain::DoubleAttackModifier2 dam{game, goblin};
    cout << goblin << endl;
  }

  cout << goblin << endl;
}
