#include <iostream>

using namespace std;

int main()
{
    //the variable that stores how many tasks you have completed
    int taskNumber = 0;
    
    while (taskNumber < 9)
    {
        taskNumber++;
        cout << "Hercules has now completed "
            << taskNumber << " tasks."<< endl;
    }
    return 0;
}