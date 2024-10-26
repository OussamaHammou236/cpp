#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon obj("test");
    HumanA re("fff", obj);
    HumanB f("ddd");
    re.attack();
    f.setWeapo(obj);
    f.attack();
    obj.setType("cccccc");
    re.attack();
}