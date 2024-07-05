#include <iostream>
#include "Graph.hpp"

Graph::Graph(float x, float y){

    this->size.x = x;
    this->size.y = y;
}

Graph::~Graph() {
    for (std::vector<Vector2 *>::iterator it = this->coordinates.begin(); it != this->coordinates.end(); it++) {
        delete(*it);  
    }
    this->coordinates.clear();
}

void    Graph::add_point(float x, float y) {

    Vector2 *point = new Vector2();
    point->x = x;
    point->y = y;

    coordinates.push_back(point);
}

void    Graph::delete_point(float x, float y) {

    for (std::vector<Vector2 *>::iterator it = this->coordinates.begin(); it != this->coordinates.end(); it++) {
        if((*it)->x == x) {
            if ((*it)->y == y)
            {
                delete(*it);
                this->coordinates.erase(it);
                return;
            }
        }    
    }
}

bool    Graph::is_point(float x, float y) 
{
    if (x > this->size.x || y > this->size.y)
        std::cout << "Value out of Graph range!!" << std::endl;
    
    for(std::vector<Vector2 *>::iterator it = this->coordinates.begin(); it!= this->coordinates.end(); it++)
    {
        if((*it)->x == x) {
            if ((*it)->y == y)
                return (true);
        }    
    }
    return (false);
}

std::ostream&   operator <<(std::ostream& lhs, Graph& rhs) {

    for (float y = rhs.size.y; y >= 0; y--)
    {
        std::cout << y << " ";
        for (float x = 0; x <= rhs.size.x; x++)
        {
            if(rhs.is_point(x, y))
                std::cout << "X ";
            else
                std::cout << ". ";

        }
        std::cout << "\n";
    }
    std::cout << "  ";
    for (float x = 0; x < rhs.size.x; x++)
        std::cout << x << " ";

    return (lhs);
} 
