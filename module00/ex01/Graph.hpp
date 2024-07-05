#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <iostream>

class Graph {

    private:
        struct Vector2 {
            float x;
            float y;
        };
        Vector2                    size;
        std::vector<Vector2 *>      coordinates;
        
        bool    is_point(float x, float y);
    
    public:
        Graph(float x, float y);
        ~Graph();

        void    add_point(float x, float y);
        void    delete_point(float x, float y);
    
    friend  std::ostream&   operator <<(std::ostream& lhs, Graph& rhs);
};



#endif