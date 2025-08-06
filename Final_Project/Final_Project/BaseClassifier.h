
#ifndef BASE_CLASSIFIER_H
#define BASE_CLASSIFIER_H

#include <vector>
#include <string>

// Represents one training sample with gravity vector and orientation label
struct GravityData
{
    double x;
    double y;
    double z;
    std::string orientation;
};

// Abstract base class for orientation classifiers
class Classifier
{
public:
    // Train the classifier with a set of labeled samples
    virtual void train(const std::vector<GravityData>& data) = 0;

    // Predict the orientation based on new gravity input
    virtual std::string predict(double x, double y, double z) = 0;

    // Virtual destructor for proper cleanup of derived classes
    virtual ~Classifier() {}
};

#endif // BASE_CLASSIFIER_H
