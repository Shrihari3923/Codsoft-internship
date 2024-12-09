#include <iostream>
#include <list>
#include <string>
#include <iterator>

struct Task {
    std::string description;
    bool completed;

    Task(const std::string& desc) : description(desc), completed(false) {}
};

int main() {
    std::list<Task> tasks;
    bool running = true;
    int choice;
    std::string taskDescription;
    std::list<Task>::iterator it;

    while (running) {
        std::cout << "1. Add Task\n2. View Tasks\n3. Delete a Task\n4. Mark a task as completed\n5. Exit the code s\nEnter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Enter task: ";
            std::cin.ignore();
            std::getline(std::cin, taskDescription);
            tasks.push_back(Task(taskDescription));
        } else if (choice == 2) {
            int index = 1;
            for (it = tasks.begin(); it != tasks.end(); ++it) {
                std::cout << index << ". " << it->description;
                if (it->completed) {
                    std::cout << " [Completed task]";
                }
                std::cout << std::endl;
                index++;
            }
        } else if (choice == 3) {
            int index;
            std::cout << "Enter task number to deleted: ";
            std::cin >> index;
            it = tasks.begin();
            std::advance(it, index - 1);
            tasks.erase(it);
        } else if (choice == 4) {
            int index;
            std::cout << "Enter the task number to be marked as completed: ";
            std::cin >> index;
            it = tasks.begin();
            std::advance(it, index - 1);
            it->completed = true;
        } else if (choice == 5) {
            running = false;
        } else {
            std::cout << "Invalid choice, Please try again." << std::endl;
        }
    }

    return 0;
}

