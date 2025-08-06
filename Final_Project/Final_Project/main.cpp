
#include <iostream>
#include "NNModule.h"
#include "TestClassifier.h"
#include "KNNModule.h"
#include "FileManager.h"

int main()
{
    std::vector<GravityData> training = FileManager::readData("trainingData.txt");

    std::cout << "\n";
    std::cout << "*\n";
    std::cout << "*        PHONE ORIENTATION SYSTEM        *\n";
    std::cout << "*\n";
    std::cout << "* Select your classifier:                *\n";
    std::cout << "-----------------------------------------\n";
    std::cout << "*  1. Nearest Neighbour                  *\n";
    std::cout << "*  2. TestClassifier                  *\n";
    std::cout << "*  3. KNNModule                      *\n";
    std::cout << "*\n";
    std::cout << "\n";
    std::cout << "Enter choice (1-3): ";

    int choice;
    std::cin >> choice;

    Classifier* classifier = nullptr;

    if (choice == 1)
    {
        classifier = new NNModule();
        classifier->train(training);

        std::cout << "\n";
        std::cout << "+------------------------------------------+\n";
        std::cout << "| Choose input method:                     |\n";
        std::cout << "+------------------------------------------+\n";
        std::cout << "|  1. Enter x y z manually                 |\n";
        std::cout << "|  2. Use data file (e.g., unknownData.txt)|\n";
        std::cout << "+------------------------------------------+\n";
        std::cout << "\n";
        std::cout << "Enter choice (1-2): ";

        int inputMethod;
        std::cin >> inputMethod;

        if (inputMethod == 1)
        {
            double x, y, z;
            std::cout << "\n";
            std::cout << "Enter x y z: ";
            std::cin >> x >> y >> z;

            std::string orientation = classifier->predict(x, y, z);
            std::cout << "\n";
            std::cout << "Predicted orientation: " << orientation << "\n";
        }
        else
        {
            std::string filename;
            std::cout << "\n";
            std::cout << "Enter filename: ";
            std::cin >> filename;

            std::vector<GravityData> unknown = FileManager::readData(filename);
            std::vector<GravityData> results;

            for (auto& d : unknown)
            {
                GravityData res = d;
                res.orientation = classifier->predict(d.x, d.y, d.z);
                results.push_back(res);
            }

            FileManager::writeOutputs("result.txt", results);
            std::cout << "\n";
            std::cout << "Results written to result.txt\n";
        }
    }
    else if (choice == 2)
    {
        classifier = new TestClassifier();
        std::cout << classifier->predict(0, 0, 0) << "\n";
    }
    else if (choice == 3)
    {
        classifier = new KNNModule();
        std::cout << classifier->predict(0, 0, 0) << "\n";
    }
    '
        delete classifier;
    return 0;
}