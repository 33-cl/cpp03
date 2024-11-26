#include "../inc/ClapTrap.hpp"

int main() {
    ClapTrap clap1;
    std::cout << "Testing default ClapTrap:" << std::endl;

    clap1.attack("Enemy1");
    clap1.takeDamage(5);
    clap1.beRepaired(3);

    ClapTrap clap2(clap1);
    std::cout << "\nTesting copied ClapTrap (clap2):" << std::endl;

    clap2.attack("Enemy2");
    clap2.takeDamage(3);
    clap2.beRepaired(2);

    ClapTrap clap3;
    clap3 = clap1;
    std::cout << "\nTesting assigned ClapTrap (clap3):" << std::endl;

    clap3.attack("Enemy3");
    clap3.takeDamage(2);
    clap3.beRepaired(4);

    std::cout << "\nDestroying all ClapTraps..." << std::endl;

    return 0;
}
