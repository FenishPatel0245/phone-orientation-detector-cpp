#include "FileManager.h"
#include <fstream>
#include <sstream>
#include <iostream>

// Load gravity data from a file into a vector of GravityData structs
std::vector<GravityData> FileManager::readData(const std::string& filename)
{
    std::vector<GravityData> data;
    std::ifstream infile(filename);
    std::string line;

    while (std::getline(infile, line))
    {
        std::istringstream iss(line);
        GravityData d;

        // Expecting: x y z orientation (space/tab separated)
        if (iss >> d.x >> d.y >> d.z >> d.orientation)
        {
            data.push_back(d);
        }
    }

    return data;
}

// Write prediction results to a file in tab-separated format
void FileManager::writeOutputs(const std::string& filename, const std::vector<GravityData>& results)
{
    std::ofstream out(filename);
    out << "X\tY\tZ\tOrientation\n";

    for (const auto& d : results)
    {
        out << d.x << "\t" << d.y << "\t" << d.z << "\t" << d.orientation << "\n";
    }
}