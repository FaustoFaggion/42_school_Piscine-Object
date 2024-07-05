#include "Graph.hpp"

int main() {
    
    Graph   graph(5, 8);

    std::cout << "\n\nCreate Graph!!!\n";
    std::cout << graph;

    std::cout << "\n\nAdd Point!!!\n";
    graph.add_point(0, 0);
    std::cout << graph;

    std::cout << "\n\nAdd Point!!!\n";
    graph.add_point(1, 2);
    std::cout << graph;

    std::cout << "\n\nAdd Point!!!\n";
    graph.add_point(4, 8);
    std::cout << graph;

    std::cout << "\n\nAdd Point!!!\n";
    graph.add_point(6, 1);
    std::cout << graph;

    std::cout << "\n\nDelete Point!!!\n";
    graph.delete_point(2, 2);
    std::cout << graph;

}



