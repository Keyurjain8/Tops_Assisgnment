//1. Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)
#include <iostream>
#include <string>

using namespace std;
class cricketer {
	protected:
	string name;
    int age;

public:
    
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};
class batsman : public cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    
    void inputData() {
      cricketer::inputData(); 
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }

   
    void calculateAverageRuns() {
        
        averageRuns = totalRuns / 100.0; // Assuming 100 matches played
    }

    
    void displayData() {
        cout << "\nBatsman Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    batsman b;

  
    cout << "Enter Batsman Information:" << endl;
     b.inputData();

    
    b.displayData();

    return 0;
}

