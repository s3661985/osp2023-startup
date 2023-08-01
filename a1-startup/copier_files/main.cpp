/**
 * startup code provided by Paul Miller for COSC1114 - Operating Systems
 * Principles
 **/
#include "reader.h"
#include "writer.h"
#include <cstdlib>
/* global variables if needed go here */
int main(int argc, char** argv) {
    /* check command line arguments */
    /* load the file and copy it to the destination */

    if (argc == 3)
    
    {   
        writer writer(argv[2]);
        reader reader(argv[1],writer);

        if(reader.isFileOpen())
        {
            reader.run();
            writer.run();
        }
        else
        {
            std::cout << "Failed to open input file" << std::endl;
        }
       
    }
    else
    {
        std::cout << "Invalid Command Line Arguments" << std::endl;
    }


    return EXIT_SUCCESS;
}
