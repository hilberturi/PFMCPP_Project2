#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 
bool
char
int
float
double
wchar_t
+ valueless type: void
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    bool enableHighQualityRendering = true;
    bool showRegistrationPopup = false;
    bool hideKeyboard = true;

    // char
    char delimiter = ' ';
    char space = 32;
    char newline = '\n';
    
    // int
    int smallestNegativeInt = -2147483648;
    int largestPositiveInt = 2147483647;
    int bufferSize = 64;
    
    // float
    float zero = 0.f;
    float radius = 1.88f;
    float distance = 2.7e3;
    
    // double
    double angle = 1.888;
    double angularVelocity = 7272.737;
    double sampleRate = 44100.;
        
    ignoreUnused(number, 
                 enableHighQualityRendering, 
                 showRegistrationPopup, hideKeyboard,
                 delimiter, space, newline,
                 smallestNegativeInt, largestPositiveInt, bufferSize,
                 zero, radius, distance,
                 angle, angularVelocity, sampleRate);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
float computeDistanceFromSun(int planetIndex, bool useMetricSystem = false)
{
    ignoreUnused(planetIndex, useMetricSystem);
    return {};
}

/*
 2)
 */
double computeDistanceOfPoints(int xPoint1, int yPoint1, 
                               int xPoint2 = 0, int yPoint2 = 0) 
{
    ignoreUnused(xPoint1, yPoint1, xPoint2, yPoint2);
    return {};
}

/*
 3)
 */
void initResampling(double sampleRate = 48000., bool highQuality = false)
{
    ignoreUnused(sampleRate, highQuality);
}

/*
 4)
 */
bool movePlayhead(int offsetInSamples, bool allowNegativeOffset)
{
    ignoreUnused(offsetInSamples, allowNegativeOffset);
    return {};
}

/*
 5)
 */
void displayErrorMessage(int errorCode, char delimiter = ' ') 
{
    ignoreUnused(errorCode, delimiter);
}

/*
 6)
 */
bool checkForUpdates(int moduleType, 
                     bool useProxy = false, 
                     bool ignoreWarnings = false, 
                     bool userMustConfirm = true)
{
    ignoreUnused(moduleType, useProxy, ignoreWarnings, userMustConfirm);
    return {};
}

/*
 7)
 */
int establishModulationLink(int sourceParameterIndex, 
                            int targetParameterIndex,
                            float modulationStrength = 1.0f, 
                            float skewFactor = 0.5f)
{
    ignoreUnused(sourceParameterIndex, 
                 targetParameterIndex,
                 modulationStrength, skewFactor);    
    return {};
}

/*
 8)
 */
bool removeModulationLink(int linkIndex, bool forceRemoval = false)
{
    ignoreUnused(linkIndex, forceRemoval);
    return {};
}

/*
 9)
 */
void startRecordingUserGesture(int componentIndex, int timeoutInSeconds = 20)
{
    ignoreUnused(componentIndex, timeoutInSeconds);
}

/*
 10)
 */
int findFirstPlayingVoice(bool keyPressed, bool sustained, 
                          int minVelocity = 0, int maxVelocity = 127)
{
    ignoreUnused(keyPressed, sustained, minVelocity, maxVelocity);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto distanceOfEarthFromSun = computeDistanceFromSun(2);
    
    //2)
    auto distanceToZero = computeDistanceOfPoints(10, 20);
    
    //3)
    initResampling(48000., true);
    
    //4)
    auto movePlayheadSucceeded = movePlayhead(-1000, true);
    
    //5)
    displayErrorMessage(220);
    
    //6)
    auto updateAvailable = checkForUpdates(5, true, true);
    
    //7)
    auto linkIndex = establishModulationLink(10, 20, 0.2f);
    
    //8)
    auto removeOk = removeModulationLink(5, true);
    
    //9)
    startRecordingUserGesture(12, 60);
    
    //10)
    auto voiceIndex = findFirstPlayingVoice(true, false, 30);
    
    ignoreUnused(carRented, 
                 distanceOfEarthFromSun,
                 distanceToZero,
                 movePlayheadSucceeded,
                 updateAvailable,
                 linkIndex,
                 removeOk,
                 voiceIndex);
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
