#include <iostream>
#include <cmath>

class NODE {
public:
    double x;
    double y;
    double z;
    NODE* next;
    NODE(double a, double b, double c) : x(a), y(b), z(c), next(nullptr) {}
};

typedef NODE* node;

class list {
public:
    node head;
    node tail;
    list() : head(nullptr), tail(nullptr) {}

    void insertNodeAtTail(double _a, double _b, double _c) {
        node Node = new NODE(_a, _b, _c);
        if (this->head == nullptr) {
            this->head = Node;
        } else {
            this->tail->next = Node;
        }
        this->tail = Node;
    }

    void free_singly_linked_list() {
        node current = head;
        while (current) {
            node temp = current;
            current = current->next;
            delete temp;
        }
    }
};

bool compareNodes(node a, node b) {
    double epsilon = 0.0001;
    return (std::abs(a->x - b->x) < epsilon && std::abs(a->y - b->y) < epsilon && std::abs(a->z - b->z) < epsilon);
}

void run() {
    list ds_a;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        double x, y, z;
        std::cin >> x >> y >> z;
        ds_a.insertNodeAtTail(x, y, z);
    }

    list ds_b;
    int m;
    std::cin >> m;
    for (int i = 0; i < m; ++i) {
        double x, y, z;
        std::cin >> x >> y >> z;
        ds_b.insertNodeAtTail(x, y, z);
    }

    // node tmp1 = ds_a.head;
    node tmp2 = ds_b.head;
    for (int i = 0; i < m; ++i) {
        bool found = false;
        node current = ds_a.head;
        for (int j = 0; j < n; ++j) {
            if (compareNodes(current, tmp2)) {
                std::cout << j << std::endl;
                found = true;
                break;
            }
            current = current->next;
        }
        if (!found) {
            std::cout << "KHONG" << std::endl;
        }
        tmp2 = tmp2->next;
    }

    ds_a.free_singly_linked_list();
    ds_b.free_singly_linked_list();
}

int main() {
    run();
    return 0;
}