#include <iostream>
#include <string>
#include <map>

struct Article
{
    std::string name;
    double price;
};

bool    operator==(Article &lhs, Article &rhs) {
    if (lhs.name == rhs.name) {
        return true;
    }
    return false;
}

class Command {

    private:
        int                         id;
        std::string                 date;
        std::string                 client;
        std::map<Article *, int>  articles;

    public:
        Command();
        ~Command();

        void    add_article(Article &article, int qty) {
            if (this->articles.find(article)) {
            
            }
        };


        for ()


        float   get_total_price();
};