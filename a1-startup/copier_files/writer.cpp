/**
 * startup code provided by Paul Miller for COSC1114 - Operating Systems
 * Principles
 **/

#include "writer.h"

/**
 * provide your implementation for the writer functions here
 **/
writer::writer(const std::string& name)
{
    this->out.open(name);
}

void writer::run()
{
    while(!queue.empty())
    {
        out << queue.front() << std::endl;
        queue.pop_front();
    }

}

void writer::append(const std::string& line)
{
    this->queue.push_back(line);
}
