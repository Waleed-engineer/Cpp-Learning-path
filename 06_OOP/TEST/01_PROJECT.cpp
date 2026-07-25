#include <iostream>
#include <string>
#include <vector>
#include <memory>


class FileSystemNode {
protected:
    std::string name_;

public:
    explicit FileSystemNode(const std::string& name) : name_(name) {}
    virtual ~FileSystemNode() = default;

    std::string getName() const {
        return name_;
    }

    virtual size_t getSize() const = 0;
    virtual void display(int depth = 0) const = 0;
    virtual bool isDirectory() const = 0;
};


class File : public FileSystemNode {
private:
    size_t size_;

public:
    File(const std::string& name, size_t size)
        : FileSystemNode(name), size_(size) {}

    size_t getSize() const override {
        return size_;
    }

    void display(int depth = 0) const override {
        std::string indent(depth * 2, ' ');
        std::cout << indent << "[F] " << name_ << " (" << size_ << " bytes)\n";
    }

    bool isDirectory() const override {
        return false;
    }
};

class Directory : public FileSystemNode {
private:
    std::vector<std::unique_ptr<FileSystemNode>> contents_;

public:
    explicit Directory(const std::string& name) : FileSystemNode(name) {}

    FileSystemNode* find(const std::string& name) const {
        for (const auto& node : contents_) {
            if (node->getName() == name) {
                return node.get();
            }
        }
        return nullptr;
    }

    void add(std::unique_ptr<FileSystemNode> node) {
        if (node) {
            contents_.push_back(std::move(node));
        }
    }

    size_t getSize() const override {
        size_t total_size = 0;
        for (const auto& node : contents_) {
            total_size += node->getSize();
        }
        return total_size;
    }

    void display(int depth = 0) const override {
        std::string indent(depth * 2, ' ');
        std::cout << indent << "[D] " << name_ << "\n";
        for (const auto& node : contents_) {
            node->display(depth + 1);
        }
    }

    bool isDirectory() const override {
        return true;
    }
};
