#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() : _hit_points(10), _energy_points(10), _attack_damage(0), _name("default")
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _hit_points(10), _energy_points(10), _attack_damage(0), _name(name)
{
    std::cout << "ClapTrap constructor with name parameter called" << std::endl;
    _name = name;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _hit_points(other._hit_points), _energy_points(other._energy_points), _attack_damage(other._attack_damage)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        _hit_points = other._hit_points;
        _energy_points = other._energy_points;
        _attack_damage = other._attack_damage;
    }
    std::cout << "ClapTrap assignment operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (_energy_points > 0 && _hit_points > 0)
    {
        _energy_points--;
        std::cout << "ClapTrap attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    } 
    else
    {
        std::cout << "ClapTrap is unable to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hit_points > 0)
    {
        _hit_points = (amount >= _hit_points) ? 0 : _hit_points - amount;
        std::cout << "ClapTrap takes " << amount << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap is already dead.." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_points > 0 && _hit_points > 0)
    {
        _energy_points--;
        _hit_points += amount;
        std::cout << "ClapTrap repairs itself, gaining " << amount << " hit points!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap cannot repair itself!" << std::endl;
    }
}