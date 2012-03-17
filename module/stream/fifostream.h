#ifndef FIFOSTREAM_H
#define FIFOSTREAM_H

// remoteinputstream.h
// 2/9/2012

#include "inputstream.h"
#include "outputstream.h"

class FifoStream : public InputStream, public OutputStream
{
  qint64 size_;
public:
  explicit FifoStream(qint64 size = 0) : size_(size) { }

  virtual qint64 size() const { return size_; } ///< \override

  void setSize(qint64 size) { size_ = size; }
};

#endif // FIFOSTREAM_H