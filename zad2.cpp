//kod nie jest moj, pisalem z przykladu, ale teraz juz rozumiem, jak to dziala.

#include <iostream>
#include <ostream>
#include <string>
#include <memory>
#include <regex>


struct SmartTree {
    int value = 0;
    std::unique_ptr<SmartTree> left = std::make_unique<SmartTree>();
    std::unique_ptr<SmartTree> right = std::make_unique<SmartTree>();
};


std::unique_ptr<SmartTree> CreateLeaf(int value);

std::unique_ptr<SmartTree> InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree);

std::unique_ptr<SmartTree> InsertRightChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> right_subtree);

void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out);

std::string DumpTree(const std::unique_ptr<SmartTree> &tree);

std::unique_ptr<SmartTree> RestoreTree(const std::string &tree);


int main() {
    std::unique_ptr<SmartTree> test_tree;
    return 0;
}


std::unique_ptr<SmartTree> CreateLeaf(int value) {
    SmartTree tmp = {value, nullptr, nullptr};
    auto leaf = std::make_unique<SmartTree>(std::move(tmp));
    return leaf;
}

std::unique_ptr<SmartTree> InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree) {
    tree->left = move(left_subtree);
    return tree;
}

std::unique_ptr<SmartTree> InsertRightChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> right_subtree) {
    tree->right = move(right_subtree);
    return tree;
}

void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out) {
    if (unique_ptr->left != nullptr) {
        PrintTreeInOrder(unique_ptr->left, out);
    }
    (*out) << unique_ptr->value << ", ";
    if (unique_ptr->right != nullptr) {
        PrintTreeInOrder(unique_ptr->right, out);
    }
}

std::string DumpTree(const std::unique_ptr<SmartTree> &tree) {
    std::string dump;
    std::cout << dump << std::endl;
    dump += "[";
    dump += std::to_string(tree->value);
    dump += " ";
    if (tree->left != nullptr) {
        dump += DumpTree(tree->left);
    } else {
        dump += "[null]";
    }
    dump += " ";
    if (tree->right != nullptr) {
        dump += DumpTree(tree->right);
    } else {
        dump += "[null]";
    }
    dump += "]";
    return dump;
}

std::unique_ptr<SmartTree> RestoreTree(const std::string &tree) {

    if (tree == "[null]") {
        return nullptr;
    }

    int counter = 1;
    std::string value;
    unsigned long tree_length = tree.length();

    while (counter < tree_length) {
        if (tree[counter] == ' ') {
            value = tree.substr(1, counter);
            counter++;
            break;
        }
        counter++;
    }

    int brackets_counter = 0;
    int left = counter;
    std::string leftchild;
    while (counter < tree_length) {
        if (tree[counter] == '[') {
            brackets_counter += 1;
        } else if (tree[counter] == ']') {
            brackets_counter -= 1;
        }
        if (brackets_counter == 0) {
            leftchild = tree.substr(left, counter - left + 1);
            counter += 2;
            break;
        }
        counter++;
    }

    brackets_counter = 0;
    int right = counter;
    std::string rightchild;
    while (counter < tree_length) {
        if (tree[counter] == '[') {
            brackets_counter += 1;
        } else if (tree[counter] == ']') {
            brackets_counter -= 1;
        }
        if (brackets_counter == 0) {
            rightchild = tree.substr(right, counter - right + 1);
            counter++;
            break;
        }
        counter++;
    }

    auto root = CreateLeaf(std::stoi(value));
    root->left = RestoreTree(leftchild);
    root->right = RestoreTree(rightchild);
    return root;
}

