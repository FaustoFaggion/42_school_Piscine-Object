#include <iostream>
#include "Command.hpp"
#include "ThursdayDiscountCommand.hpp"
#include "PackageReductionDiscountCommand.hpp"

int main()
{
    Article article1;
    article1.name = "Item 1";
    article1.price = 10;
    article1.quantity = 10;

    Article article2;
    article2.name = "Item 2";
    article2.price = 20;
    article2.quantity = 10;

    int total;
    total = (article1.price * article1.quantity) + (article2.price * article2.quantity);
    std::cout << "The total amount is: " << total << std::endl << std::endl;

    Command * thursdayDiscountCommand1 = new ThursdayDiscountCommand(2, 2, "Thursday");

    thursdayDiscountCommand1->addArticle(&article1);
    thursdayDiscountCommand1->addArticle(&article2);

    std::cout << "Command with discount of Thursday: " << thursdayDiscountCommand1->getTotalPrice() << std::endl;

    Command * thursdayDiscountCommand2 = new ThursdayDiscountCommand(3, 3, "Tuesday");

    thursdayDiscountCommand2->addArticle(&article1);
    thursdayDiscountCommand2->addArticle(&article2);

    std::cout << "Command without discount of Thursday: " << thursdayDiscountCommand2->getTotalPrice() << std::endl;

    Command * packageReductionDiscountCommand1 = new PackageReductionDiscountCommand(4, 4, "Monday");

    packageReductionDiscountCommand1->addArticle(&article1);
    packageReductionDiscountCommand1->addArticle(&article2);

    std::cout << std::endl << "Command with discount when the total is greater then (150) : " << packageReductionDiscountCommand1->getTotalPrice() << std::endl;

    Command * packageReductionDiscountCommand2 = new PackageReductionDiscountCommand(5, 5, "Friday");

    packageReductionDiscountCommand2->addArticle(&article1);

    std::cout << "Command without discount when the total isn't greater then (150) : " << packageReductionDiscountCommand2->getTotalPrice() << std::endl;

    delete thursdayDiscountCommand1;
    delete thursdayDiscountCommand2;
    delete packageReductionDiscountCommand1;
    delete packageReductionDiscountCommand2;

    return 0;
}
