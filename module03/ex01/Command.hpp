#ifndef Command_hpp
#define Command_hpp

#include <stdio.h>
#include <string>
#include <vector>

struct Article
{
    std::string name;
    int quantity;
    double price;
};

class Command
{
protected:
    int id;
    int clientId;
    std::string date;
    std::vector<Article *> articles;
    double totalPrice;
    virtual double getDiscountCommand(double newTotalPrice) = 0;

public:
    Command(int newId, int newClientId, std::string newDate);
    virtual ~Command();
    double getTotalPrice();
    void addArticle(Article *article);
};

Command::Command(int newId, int newClientId, std::string newDate)
{
    id = newId;
    clientId = newClientId;
    date = newDate;
    totalPrice = 0;
};

Command::~Command()
{
    
};

void Command::addArticle(Article * article)
{
    articles.push_back(article);
};

double Command::getTotalPrice() {

    size_t size = articles.size();
    for (size_t i=0; i < size; i++) {
        double totalArticle = articles[i]->quantity * articles[i]->price;
        this->totalPrice += totalArticle;
    }
    
    // double discountCommand = getDiscountCommand(totalPrice);
    
    return totalPrice // - discountCommand;
};

#endif
