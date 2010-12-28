class Interface;

class System {
public:
  void init(Interface*);
  void power();
  void reset();
  void run();

//private:
  Interface *interface;
};

#include <interface/interface.hpp>

extern System system;
