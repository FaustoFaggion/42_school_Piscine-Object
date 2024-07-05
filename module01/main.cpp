#include "Worker.hpp"
#include "ATool.hpp"
#include "Shovel.hpp"
#include "Workshop.hpp"

int main() {

    Shovel     *shovel = new Shovel();
    Hammer     *hammer = new Hammer();

    Workshop    workshop1("42SP");
    Workshop    workshop2("Casas Bahia");
    Worker      *worker1 = new Worker("Juli", 0, 0);
    Worker      *worker2 = new Worker("João", 0, 0);
    Worker      worker3("Julino", 0, 0);
    Worker      worker4("Janis", 0, 0);

    workshop1.registerWorker(*worker1);
    workshop1.registerWorker(*worker2);

    workshop2.registerWorker(worker3);
    workshop2.registerWorker(worker4);
    
    std::cout << workshop1 << std::endl;
    std::cout << workshop2 << std::endl;

    workshop2.releaseWorker(worker4);
    std::cout << workshop2 << std::endl;

    std::cout << "\nEXECUTE WORK DAY\n-------------------------------\n";
    workshop1.executeWorkDay();
    
    std::cout << "\nGETTING TOOLS\n-------------------------------\n";
    worker1->addTool(*shovel);
    worker2->addTool(*hammer);
    worker1->addTool(*hammer);

    std::cout << "\nEXECUTE WORK DAY\n-------------------------------\n";
    workshop1.executeWorkDay();

    std::cout << "\nEXECUTE WORK DAY\n-------------------------------\n";
    workshop1.executeWorkDay();

    std::cout << "\n";
    std::cout << *shovel << std::endl;
    delete worker1;
    std::cout << *shovel << std::endl;

    std::cout << "\n";
    std::cout << *hammer << std::endl;
    delete worker2;
    std::cout << *hammer << std::endl;

    return (0);
}