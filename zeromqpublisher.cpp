#pragma once

#include <iostream>
#include <zmq.hpp>

using namespace std;

class ZmqPublisher {
public:
    ZmqPublisher(const std::string& bind_address = "tcp://*:5555")
        : context_(1), publisher_(context_, zmq::socket_type::pub) {
        publisher_.bind(bind_address);
        std::cout << "[ZmqPublisher] Bound to " << bind_address << std::endl;
    }

    void publish(const std::string& topic, const std::string& message) {
        std::string full_message = topic + " " + message;
        zmq::message_t zmq_message(full_message.begin(), full_message.end());
        publisher_.send(zmq_message, zmq::send_flags::none);
        std::cout << "[ZmqPublisher] Sent: " << full_message << std::endl;
    }

private:
    zmq::context_t context_;
    zmq::socket_t publisher_;
};