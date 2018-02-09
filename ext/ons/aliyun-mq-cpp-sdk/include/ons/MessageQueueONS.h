#ifndef __MESSAGEQUEUEONS_H__
#define __MESSAGEQUEUEONS_H__

#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

namespace ons {
class MessageQueueONS {
 public:
  MessageQueueONS();
  MessageQueueONS(const string& topic, const string& brokerName, int queueId);

  MessageQueueONS(const MessageQueueONS& other);
  MessageQueueONS& operator=(const MessageQueueONS& other);

  string getTopic() const;
  void setTopic(const string& topic);

  string getBrokerName() const;
  void setBrokerName(const string& brokerName);

  int getQueueId() const;
  void setQueueId(int queueId);

  bool operator==(const MessageQueueONS& mq) const;
  bool operator<(const MessageQueueONS& mq) const;
  int compareTo(const MessageQueueONS& mq) const;

 private:
  string m_topic;
  string m_brokerName;
  int m_queueId;
};

}  //<!end namespace;
#endif
