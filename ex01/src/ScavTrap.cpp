#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    _mode = DEFAULT;
    std::cout << "ScavTrap constructor with name parameter called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hit_points = other._hit_points;
        _energy_points = other._energy_points;
        _attack_damage = other._attack_damage;
        _mode = other._mode;
    }
    std::cout << "ScavTrap assignment operator called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now on gate keeper mode !" << std::endl;
    _mode = GATE_KEEPER;
}

void    ScavTrap::attack(const std::string& target)
{
    if (_energy_points > 0 && _hit_points > 0)
    {
        _energy_points--;
        std::cout << "ScavTrap attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    } 
    else
    {
        std::cout << "ScavTrap is unable to attack!" << std::endl;
    }
}
