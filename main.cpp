#include <iostream>
#include "FileCachManager.h"
#include "MySerialServer.h"
#include "MyClientHandler.h"
#include "Solver.h"
#include "BestFirstSearch.h"
#include "Matrix.h"
#include "State.h"
#include "Point.h"
#include "BFS.h"

int main() {

    State<Point> *initial = new State<Point>(Point(0, 0), 3);
    State<Point> *goal = new State<Point>(Point(2, 2), 6);

    vector<State<Point> *> searchable;
    searchable.push_back(initial);
    searchable.push_back(new State<Point>(Point(0, 1), -1));
    searchable.push_back(new State<Point>(Point(0, 2), 2));
    searchable.push_back(new State<Point>(Point(1, 0), -1));
    searchable.push_back(new State<Point>(Point(1, 1), 7));
    searchable.push_back(new State<Point>(Point(1, 2), 5));
    searchable.push_back(new State<Point>(Point(2, 0), 1));
    searchable.push_back(new State<Point>(Point(2, 1), 4));
    searchable.push_back(goal);

    Searchable<Point> *m = new Matrix(searchable, initial, goal);
    BFS<Point> *b = new BFS<Point>;
    string x = b->search(m);
    cout << x << endl;
}