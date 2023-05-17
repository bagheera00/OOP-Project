#include "App.h"

int main(){
    App* flowerDeliveryApplication = new App();
    bool executionResult = flowerDeliveryApplication->initApp();
    if(!executionResult){
        cout << "Software Exiting by error - Error happened!" << endl;
        return 1;
    }

    cout << "Software Exiting safely - Successful execution!" << endl;
    return 0;
}