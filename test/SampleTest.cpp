//
// Created by 北條 育男 on 2019-05-17.
//

#include <gmock/gmock.h>

#include "Sample.h"

using namespace ::testing;

namespace {
  class SampleTest : public Test {
  public:
    Sample sample;
  };
}

TEST_F(SampleTest, should_generate_message) {
  ASSERT_THAT(sample.message(), Eq("Test"));
}
