#include <iostream>

#include <librdkafka/rdkafkacpp.h>

int main() {

  auto conf = RdKafka::Conf::create(RdKafka::Conf::CONF_GLOBAL);
  std::string errstr;

  if (conf->set("bootstrap.servers", "localhost:9092", errstr) != RdKafka::Conf::CONF_OK) {
    throw std::runtime_error(errstr);
  }

  return 0;
}
