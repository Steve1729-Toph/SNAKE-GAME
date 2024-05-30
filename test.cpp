#include <iostream>
#include <cmath>



typedef NODE* node;

c
        } else {
            this->tail->next = Node;
        }
        this->tail = Node;
    }

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

void run() { n; ++i) {
        double x, y, z;
        std::cin >> x >> y >> z;
        ds_a.i
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