#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include <vector>
#include <string>
#include "BaseClassifier.h"

// Responsible for loading training/test data and saving prediction results
class FileManager
{
public:
    // Loads gravity data (x, y, z + label) from a file
    static std::vector<GravityData> readData(const std::string& filename);

    // Writes prediction results (with labels) to a file
    static void writeOutputs(const std::string& filename, const std::vector<GravityData>& results);
};

#endif // FILE_MANAGER_H