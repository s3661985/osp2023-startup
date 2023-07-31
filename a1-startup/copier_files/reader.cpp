/**
 * startup code provided by Paul Miller for COSC1114 - Operating Systems
 * Principles
 **/
#include "reader.h"
#include <functional>

reader::reader(const std::string& name, writer& mywriter): thewriter(mywriter)
{
    this->in.open(name);
    
    if(this->in.is_open())
    {
        std::cout<<"File opened " << std::endl;
    }
    else
    {
        std::cout << "Failed to open input file " << std::endl;
    }
}

void reader::run()
{
    std::string line;
    while(std::getline(in,line))
    {
        this->thewriter.append(line);
    }

}
