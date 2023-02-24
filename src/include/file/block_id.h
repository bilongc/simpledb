#include <string>

namespace simpledb {

class BlockId {
public:
    explicit BlockId(std::string filename, int blknum) {
        this->blknum_ = blknum;
        this->filename_ = filename;
    }

    std::string filename() {
        return this->filename_;
    }

    int blknum() {
        return this->blknum_;
    }

private:
    int blknum_;
    std::string filename_;
}
}
